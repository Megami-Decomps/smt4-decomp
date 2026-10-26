#include "sys/DeferredTransferQueue.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {
extern DeferredTransferState DAT_0044d0f8;
extern u8 DAT_004c40f8[0xC];
extern DeferredTransferJob DAT_004c4104[64];
void FUN_002a4b0c(void *, u32);
}

extern "C" u32 deferredTransferEnqueue(u32 index, void *data, u32 size)
{
    if (s32(index) < 0) {
        return 0;
    }
    u32 count = DAT_0044d0f8.count;
    if (index >= count) {
        return 0;
    }
    DeferredTransferSlot *slot = &DAT_0044d0f8.slots[index];
    ScopedCriticalLock lock(DAT_004c40f8);
    if (slot->position != slot->limit && DAT_0044d0f8.produced - DAT_0044d0f8.consumed != 64) {
        if (data != NULL && size != 0) {
            FUN_002a4b0c(data, size);
            DeferredTransferJob *jobs = DAT_004c4104;
            jobs[DAT_0044d0f8.produced & 63].slot = slot;
            jobs[DAT_0044d0f8.produced & 63].data = data;
            jobs[DAT_0044d0f8.produced & 63].size = size;
            ++DAT_0044d0f8.produced;
            ++slot->position;
        }
        return 1;
    }
    return 0;
}
