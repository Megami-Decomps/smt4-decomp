/* NON_MATCHING: the registered-node walk and the stop/fade helpers now match retail's shape; retail keeps the result in r5 (set to 1 at the top of the restart, cleared on a failed restart, with the sound system base loaded into r5 for the player argument) and threads the clamped-volume branch straight into the gain computation. */
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
u32 FUN_0015e2bc(void* player, AsdSndHandleNode* handle, s32 soundId, s32 option);
void asdSoundObjectStop(s32 handle, s32 frames); // declcheck: local (the shared declaration does not compile here or changes this unit)
void FUN_0015e874(s32 handle, s32 frames, f32 volume); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Stops the node's sound when it has one (as asdSoundRegisteredStop and handlerFinishById do). */
static __inline void soundStop(AsdSndHandleNode *node, s32 frames)
{
    if (node->handle != 0) {
        asdSoundObjectStop(node->handle, frames);
    }
}

/* Fades the node's sound to `volume` when it has one. */
static __inline void soundSetVolume(AsdSndHandleNode *node, s32 frames, f32 volume)
{
    if (node->handle != 0) {
        FUN_0015e874(node->handle, frames, volume);
    }
}

// Restart a registered sound handle and fade it to the requested 0..127 volume.
u32 asdSoundRegisteredRestart(s32 id, s32 soundId, u32 volume, u32 fadeFrames)
{
    u32 result = 0;
    AsdSndHandleNode* node = asdSoundRegisteredFind(id);
    if (node != NULL) {
        soundStop(node, 0);
        if ((u8)FUN_0015e2bc(g_asdSoundSystem.player, node, soundId, 0) == 0) {
            soundSetVolume(node, 0, 0.0f);
            node->unk0d = volume;
            if (volume > 127)
                node->unk0d = 127;
            f32 gain;
            if (volume == 0) {
                gain = 0.0f;
            } else {
                gain = 1.0f + ((f32)(u32)node->unk0d - 64.0f) * (1.0f / 63.5f);
                if (gain > 2.0f)
                    gain = 2.0f;
            }
            soundSetVolume(node, fadeFrames, gain);
            node->unk08 = soundId;
            node->value |= 2;
            result = 1;
        }
    }
    return result;
}
}
