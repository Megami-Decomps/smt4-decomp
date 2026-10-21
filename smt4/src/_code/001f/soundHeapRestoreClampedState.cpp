/* NON_MATCHING: armcc preserves the requested state in r0 and uses r2 for the heap, adding a move before the call. */
#include "shard/W5_W5Match2_SoundHeapOwner.h"

extern "C" {

extern SoundHeapOwner DAT_004e2f68;
void nw_snd_SoundHeap_LoadState(AsdSndSlotB *heap, s32 state);

/* Restore the active heap, clamping the request to its last saved state. */
s32 soundHeapRestoreClampedState(s32 state)
{
    s32 result = 0;
    AsdSndSlotB *slot = DAT_004e2f68.slot;
    if (slot != NULL && slot->heapBase != NULL) {
        if ((s32)slot->savedState < state) {
            state = slot->savedState;
        }
        nw_snd_SoundHeap_LoadState(slot, state);
        result = 1;
    }
    return result;
}

}
