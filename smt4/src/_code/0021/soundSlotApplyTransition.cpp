#include "shard/W5_W5Match2_SoundHeapOwner.h"

extern "C" {

struct SoundHandle;
extern SoundHeapOwner DAT_004e2f68;
void FUN_002bda30(SoundHandle *handle, s32 frames);

/* Apply a transition to an existing slot handle; an empty valid slot still succeeds. */
s32 soundSlotApplyTransition(u32 index, s32 frames)
{
    AsdSndSlotB *slot = DAT_004e2f68.slot;
    s32 result = 0;
    if (index >= 8 || slot == NULL) {
        return result;
    }
    SoundHandle *handle = (SoundHandle *)slot->handles[index];
    if (handle != NULL) {
        FUN_002bda30(handle, frames);
    }
    return 1;
}

}
