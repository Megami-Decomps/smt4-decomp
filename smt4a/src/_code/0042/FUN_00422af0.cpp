/* NON_MATCHING: compiler combines job stores and caches the producer index unlike retail. */
#include "sys/DeferredTransferQueue.h"

extern "C" {
extern DeferredTransferState DAT_005880d0;
extern u8 g_soundVoiceCriticalSection[0xC];
extern DeferredTransferJob DAT_00618524[64];
void nn_os_CriticalSection_Enter(void *);
void nn_os_CriticalSection_Leave(void *);
void FUN_001bd53c(void *, u32);
}

extern "C" u32 FUN_00422af0(u32 index, void *data, u32 size)
{
    if (s32(index) < 0 || DAT_005880d0.count <= index) return 0;
    DeferredTransferSlot *slot = &DAT_005880d0.slots[index];
    nn_os_CriticalSection_Enter(g_soundVoiceCriticalSection);
    if (slot->position != slot->limit && DAT_005880d0.produced - DAT_005880d0.consumed != 64) {
        if (data != NULL && size != 0) {
            FUN_001bd53c(data, size);
            DAT_00618524[DAT_005880d0.produced & 63].slot = slot;
            DAT_00618524[DAT_005880d0.produced & 63].data = data;
            DAT_00618524[DAT_005880d0.produced & 63].size = size;
            ++DAT_005880d0.produced;
            ++slot->position;
        }
        nn_os_CriticalSection_Leave(g_soundVoiceCriticalSection);
        return 1;
    }
    nn_os_CriticalSection_Leave(g_soundVoiceCriticalSection);
    return 0;
}
