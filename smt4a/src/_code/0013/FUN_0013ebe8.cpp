/* NON_MATCHING: handle-list loop, return tail and volume-zero branch layout differ from retail. */
#include "sound/SoundHandlePlayback.h"

extern "C" {
extern SoundHandlePlaybackStateA g_asdSoundSystem;
u32 FUN_0015e2bc(void* player, AsdSndHandleNode* handle, s32 soundId, s32 option);
void asdSoundObjectStop(s32 handle, s32 frames);
void FUN_0015e874(s32 handle, s32 frames, f32 volume);

// Restart a registered sound handle and fade it to the requested 0..127 volume.
u32 FUN_0013ebe8(s32 id, s32 soundId, u32 volume, u32 fadeFrames)
{
    AsdSndHandleNode* node = g_asdSoundSystem.handles;
    s32 count = g_asdSoundSystem.count;
    for (s32 index = 0; index < count && node != NULL; ++index, node = node->next) {
        if (node->id == id) {
            if (node->handle != 0)
                asdSoundObjectStop(node->handle, 0);
            if ((u8)FUN_0015e2bc(g_asdSoundSystem.archivePlayer, node, soundId, 0) != 0)
                return 0;
            if (node->handle != 0)
                FUN_0015e874(node->handle, 0, 0.0f);
            node->unk0d = volume;
            if (volume > 127)
                node->unk0d = 127;
            f32 gain = 0.0f;
            if (volume != 0) {
                gain = 1.0f + ((f32)(u32)node->unk0d - 64.0f) * (1.0f / 63.5f);
                if (gain > 2.0f)
                    gain = 2.0f;
            }
            if (node->handle != 0)
                FUN_0015e874(node->handle, fadeFrames, gain);
            node->unk08 = soundId;
            node->value |= 2;
            return 1;
        }
    }
    return 0;
}
}
