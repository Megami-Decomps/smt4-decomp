/* NON_MATCHING: the records are the shared AllocatedArray (push_back as weightedEntryListAdd uses it); retail keeps push_back's result in r0 through a failed reserve and tests it once at the end (cmp; ldrne; subne) where the build returns NULL straight from the failure, and it reads end and the capacity word separately where the build pairs them in one ldrd. */
#include "classes/AllocatedArray.h"
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
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ AllocatedArray<AllocationRecord> records;
    /* 0x18 */ PairedAllocationSource *first;
    /* 0x1C */ PairedAllocationSource *second;
    /* 0x20 */ PairedAllocationSource *fourth;
    /* 0x24 */ PairedAllocationSource *third;
};

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
    return work->records.push_back(value) ? work->records.end - 1 : NULL;
}
