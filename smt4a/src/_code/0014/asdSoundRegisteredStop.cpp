/* NON_MATCHING: recovered incoming fade frames and canonical sound owner; with the shared registered-node walk only the zero for the retired node's unk08 differs (here hoisted into r6, retail materialises it at the store), which shifts the branch offsets. */
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
void asdSoundObjectStop(s32 handle, s32 frames);
s32 FUN_0016003c(s32 handle);

// Request a registered sound's stop, then retire its node once playback has ended.
u32 asdSoundRegisteredStop(s32 id, s32 frames)
{
    u32 retired = 0;
    AsdSndHandleNode *node = asdSoundRegisteredFind(id);
    if (node != NULL) {
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
    }
    return retired;
}
}
