/* NON_MATCHING: the request body now matches; the registry walk keeps the id in r3 and the index in r0 (retail: id in r0, index in r2) and places the advance after the body. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

namespace {
struct SoundPauseRegistryView {
    u8 prefix[0x75C];
    struct Registered {
        AsdSndHandleNode *first;
        s32 count;
    } registered;
};
}
extern "C" {
extern SoundPauseRegistryView g_asdSoundSystem;
void FUN_0015e76c(s32 handle, s32 paused, u32 frames);
s32 FUN_00160050(s32 handle);
s32 modeIsOneOrTwo(s32 handle);

/* Pauses or resumes a sound when the node has one. */
static __inline void soundSetPause(s32 handle, s32 paused, u32 frames)
{
    if (handle != 0) {
        FUN_0015e76c(handle, paused, frames);
    }
}

// Request a pause or resume, then acknowledge and clear the pending transition bits.
u32 FUN_001414d4(s32 id, s32 resume, u32 frames)
{
    u32 completed = 0;
    SoundPauseRegistryView::Registered *list = &g_asdSoundSystem.registered;
    AsdSndHandleNode *node = list->first;
    for (s32 index = 0; index < list->count; ++index) {
        if (node == NULL)
            break;
        if (node->id != id) {
            node = node->next;
            continue;
        }
        switch (resume) {
        case 0:
            if ((node->value & 0x10) == 0 &&
                (node->handle == 0 || modeIsOneOrTwo(node->handle) == 0)) {
                soundSetPause(node->handle, 1, frames);
                node->value |= 0x14;
            }
            break;
        case 1:
            if ((node->value & 0x20) == 0 && node->handle != 0 &&
                modeIsOneOrTwo(node->handle) != 0) {
                soundSetPause(node->handle, 0, frames);
                node->value = (node->value & ~4) | 0x20;
            }
            break;
        }
        if (node->handle == 0 || FUN_00160050(node->handle) <= 0) {
            if (node->value & 0x10)
                node->value &= ~0x10;
            if (node->value & 0x20)
                node->value &= ~0x20;
            completed = 1;
        }
        break;
    }
    return completed;
}
}
