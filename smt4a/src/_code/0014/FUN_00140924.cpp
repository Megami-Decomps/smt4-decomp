/* NON_MATCHING: sound stop and retirement semantics recovered; list traversal block placement and count register allocation still differ. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

struct SoundHandleListViewA {
    AsdSndHandleNode* first;
    s32 count;
};

struct SoundSystemHandleViewA {
    /* 0x000 */ u8 unk000[0x75C];
    /* 0x75C */ SoundHandleListViewA handles;
};

extern "C" {
extern SoundSystemHandleViewA g_asdSoundSystem;
void asdSoundObjectStop(s32 handle);
s32 FUN_0016003c(s32 handle);

// Request a registered sound's stop, then retire its node once playback has ended.
u32 FUN_00140924(s32 id)
{
    u32 retired = 0;
    SoundHandleListViewA* list = &g_asdSoundSystem.handles;
    AsdSndHandleNode* node = list->first;
    for (s32 i = 0; i < list->count && node != NULL; ++i, node = node->next) {
        if (node->id == id) {
            if ((node->value & 0x10) == 0) {
                if (node->handle != 0) {
                    asdSoundObjectStop(node->handle);
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
    }
    return retired;
}
}
