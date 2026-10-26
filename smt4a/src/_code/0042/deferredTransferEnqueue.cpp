#include "sys/DeferredTransferQueue.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {
extern DeferredTransferState DAT_005880d0;
extern u8 g_soundVoiceCriticalSection[0xC];
extern DeferredTransferJob DAT_00618524[64];
void FUN_001bd53c(void *, u32);
}

extern "C" u32 deferredTransferEnqueue(u32 index, void *data, u32 size)
{
    if (s32(index) < 0) {
        return 0;
    }
    u32 count = DAT_005880d0.count;
    if (index >= count) {
        return 0;
    }
    DeferredTransferSlot *slot = &DAT_005880d0.slots[index];
    ScopedCriticalLock lock(g_soundVoiceCriticalSection);
    if (slot->position != slot->limit && DAT_005880d0.produced - DAT_005880d0.consumed != 64) {
        if (data != NULL && size != 0) {
            FUN_001bd53c(data, size);
            DeferredTransferJob *jobs = DAT_00618524;
            jobs[DAT_005880d0.produced & 63].slot = slot;
            jobs[DAT_005880d0.produced & 63].data = data;
            jobs[DAT_005880d0.produced & 63].size = size;
            ++DAT_005880d0.produced;
            ++slot->position;
        }
        return 1;
    }
    return 0;
}
