/* NON_MATCHING: recovered incoming fade frames and canonical sound owner; search-match and stop-flag branch block placement still differs. */
#include "sound/SoundHandlePlayback.h"

extern "C" {
extern SoundHandlePlaybackStateA g_asdSoundSystem;
void asdSoundObjectStop(s32 handle, s32 frames);
s32 FUN_0016003c(s32 handle);

// Request a registered sound's stop, then retire its node once playback has ended.
u32 FUN_00140924(s32 id, s32 frames)
{
    u32 retired = 0;
    SoundHandlePlaybackStateA *system = &g_asdSoundSystem;
    AsdSndHandleNode *node = system->handles;
    for (s32 i = 0; i < system->count; ++i) {
        if (node == NULL) {
            break;
        }
        if (node->id != id) {
            node = node->next;
            continue;
        }
        if ((node->value & 0x10) == 0) {
            if (node->handle != 0) {
                asdSoundObjectStop(node->handle, frames);
            }
            node->value |= 0x10;
        }
        if (node->handle == 0 || FUN_0016003c(node->handle) <= 0) {
            node->value = 1;
            retired = 1;
            node->unk08 = 0;
        }
        break;
    }
    return retired;
}
}
