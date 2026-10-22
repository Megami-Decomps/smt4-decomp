/* NON_MATCHING: compiler combines job stores and caches the producer index unlike retail. */
#include "sys/DeferredTransferQueue.h"

extern "C" {
extern DeferredTransferState DAT_0044d0f8;
extern u8 DAT_004c40f8[0xC];
extern DeferredTransferJob DAT_004c4104[64];
void nn_os_CriticalSection_Enter(void *);
void nn_os_CriticalSection_Leave(void *);
void FUN_002a4b0c(void *, u32);
}

extern "C" u32 FUN_0034e618(u32 index, void *data, u32 size)
{
    if (s32(index) < 0 || DAT_0044d0f8.count <= index) return 0;
    DeferredTransferSlot *slot = &DAT_0044d0f8.slots[index];
    nn_os_CriticalSection_Enter(DAT_004c40f8);
    if (slot->position != slot->limit && DAT_0044d0f8.produced - DAT_0044d0f8.consumed != 64) {
        if (data != NULL && size != 0) {
            FUN_002a4b0c(data, size);
            DAT_004c4104[DAT_0044d0f8.produced & 63].slot = slot;
            DAT_004c4104[DAT_0044d0f8.produced & 63].data = data;
            DAT_004c4104[DAT_0044d0f8.produced & 63].size = size;
            ++DAT_0044d0f8.produced;
            ++slot->position;
        }
        nn_os_CriticalSection_Leave(DAT_004c40f8);
        return 1;
    }
    nn_os_CriticalSection_Leave(DAT_004c40f8);
    return 0;
}
