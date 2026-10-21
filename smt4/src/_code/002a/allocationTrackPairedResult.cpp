/* NON_MATCHING: O3 coalesces vector/ownership loads, removes the shared append-result test, and groups pair copies differently into VFP/LDM operations; candidate -O2. */
#include "classes/AsdAllocatorObject.h"
#include <new>
#include <utility>

class PairedAllocationSource {
public:
    virtual void unk00() = 0;
    virtual void unk04() = 0;
    virtual void unk08() = 0;
    virtual u64 allocate(u32 size, s32 kind, u32 alignment, u32 flags) = 0;
};
typedef std::pair<u64, u64> AllocationRecord;
struct AllocationRecordWork {
    u8 unk00[8];
    AsdAllocatorObject *allocator;
    AllocationRecord *begin;
    AllocationRecord *end;
    s32 capacityFlags;
    PairedAllocationSource *first;
    PairedAllocationSource *second;
    PairedAllocationSource *fourth;
    PairedAllocationSource *third;
};

static __inline bool allocationRecordsReserve(AllocationRecordWork *work, s32 capacity)
{
    if ((work->capacityFlags & 0x3fffffff) < capacity) {
        if (work->allocator == NULL || (work->capacityFlags & 0xc0000000) != 0x40000000) {
            return false;
        }
        AllocationRecord *records = static_cast<AllocationRecord *>(work->allocator->allocate(capacity * sizeof(AllocationRecord), 32));
        AllocationRecord *source = work->begin;
        AllocationRecord *end = work->end;
        AllocationRecord *destination = records;
        s32 count = 0;
        if (source != end) {
            do {
                if (destination != NULL) {
                    new (destination) AllocationRecord(*source);
                }
                ++source;
                ++destination;
            } while (source != end);
            source = work->begin;
            count = work->end - source;
        }
        if (source != NULL) {
            work->allocator->release(source);
        }
        work->end = records + count;
        work->begin = records;
        work->capacityFlags = (work->capacityFlags & 0xc0000000) | capacity;
    }
    return true;
}

static __inline bool allocationRecordsAppend(AllocationRecordWork *work, const AllocationRecord &value)
{
    s32 capacity = work->capacityFlags & 0x3fffffff;
    bool available = true;
    if (capacity <= work->end - work->begin) {
        available = allocationRecordsReserve(work, capacity == 0 ? 1 : capacity * 2);
    }
    if (available) {
        if (work->end != NULL) {
            new (work->end) AllocationRecord(value);
        }
        ++work->end;
    }
    return available;
}

extern "C" AllocationRecord *allocationTrackPairedResult(AllocationRecordWork *work, u32 size, s32 kind, u32 alignment, u32 flags)
{
    PairedAllocationSource *source = NULL;
    if (kind == 0) {
        source = work->first;
    } else if (kind == 1) {
        source = work->second;
    } else if (kind == 2) {
        source = work->third;
    } else if (kind == 3) {
        source = work->fourth;
    }
    AllocationRecord value(source->allocate(size, kind, alignment, flags), 0ULL);
    return allocationRecordsAppend(work, value) ? work->end - 1 : NULL;
}
