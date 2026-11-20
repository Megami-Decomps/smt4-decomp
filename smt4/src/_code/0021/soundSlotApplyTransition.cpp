#include "shard/W5_W5Match2_SoundHeapOwner.h"

extern "C" {

struct SoundHandle;
extern SoundHeapOwner g_asdSndSlotSelection;
void basicSoundStopOrFadeOut(SoundHandle *handle, s32 frames);

/* Apply a transition to an existing slot handle; an empty valid slot still succeeds. */
s32 soundSlotApplyTransition(u32 index, s32 frames)
{
    AsdSndSlotB *slot = g_asdSndSlotSelection.slot;
    s32 result = 0;
    if (index >= 8 || slot == NULL) {
        return result;
    }
    SoundHandle *handle = (SoundHandle *)slot->handles[index];
    if (handle != NULL) {
        basicSoundStopOrFadeOut(handle, frames);
    }
    return 1;
}

}
