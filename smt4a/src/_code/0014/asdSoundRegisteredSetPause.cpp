#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
void FUN_0015e76c(s32 handle, s32 paused, u32 frames);
s32 FUN_00160050(s32 handle);
s32 modeIsOneOrTwo(s32 handle);

/* Pauses or resumes a sound when the node has one. */
static __inline void soundSetPause(AsdSndHandleNode *node, s32 paused, u32 frames)
{
    if (node->handle != 0) {
        FUN_0015e76c(node->handle, paused, frames);
    }
}

// Request a pause or resume, then acknowledge and clear the pending transition bits.
u32 asdSoundRegisteredSetPause(s32 id, s32 resume, u32 frames)
{
    u32 completed = 0;
    AsdSndHandleNode *node = asdSoundRegisteredFind(id);
    if (node != NULL) {
        if (resume == 0) {
            if ((node->value & 0x10) == 0 &&
                (node->handle == 0 || modeIsOneOrTwo(node->handle) == 0)) {
                soundSetPause(node, 1, frames);
                node->value |= 0x14;
            }
        } else if (resume == 1) {
            if ((node->value & 0x20) == 0 && node->handle != 0 &&
                modeIsOneOrTwo(node->handle) != 0) {
                soundSetPause(node, 0, frames);
                node->value = (node->value & ~4) | 0x20;
            }
        }
        if (node->handle == 0 || FUN_00160050(node->handle) <= 0) {
            if (node->value & 0x10)
                node->value &= ~0x10;
            if (node->value & 0x20)
                node->value &= ~0x20;
            completed = 1;
        }
    }
    return completed;
}
}
