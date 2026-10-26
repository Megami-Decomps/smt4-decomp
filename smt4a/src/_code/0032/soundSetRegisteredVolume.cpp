/* NON_MATCHING: list-walk layout now matches retail (index test first, node check inside); retail keeps the volume in r1/node in r3 and skips the zero test after the >127 clamp, the build allocates them the other way. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

struct SoundHandleList {
    /* 0x00 */ AsdSndHandleNode *head;
    /* 0x04 */ s32 count;
};

extern "C" SoundHandleList g_soundHandleList;
extern "C" void FUN_0015e874(void *fader, u32 fadeId, f32 target);

/* Set a registered sound's volume and apply the corresponding fade target. */
extern "C" void soundSetRegisteredVolume(s32 id, u32 volume, u32 fadeId)
{
    AsdSndHandleNode *node = g_soundHandleList.head;
    for (s32 index = 0; index < g_soundHandleList.count; ++index, node = node->next) {
        if (node == NULL) {
            break;
        }
        if (node->id == id) {
            node->unk0d = volume;
            f32 target;
            if (volume > 127) {
                node->unk0d = 127;
            }
            if (volume == 0) {
                target = 0.0f;
            } else {
                target = (node->unk0d - 64.0f) * 0.015748031f + 1.0f;
                if (target > 2.0f)
                    target = 2.0f;
            }
            if (node->handle != 0)
                FUN_0015e874((void *)node->handle, fadeId, target);
            return;
        }
    }
}
