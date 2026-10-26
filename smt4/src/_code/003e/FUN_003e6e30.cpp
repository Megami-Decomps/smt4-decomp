/* NON_MATCHING: retail emits the early return before the push (cmp; moveq r0, #0; bxeq lr; push {r4, lr}); the build pushes first. */
#include "common.h"

struct StreamInfoHolder {
    u8 unk00[4];
    u32 present;
    u32 *infoBlockBody;
};

extern "C" {
u32 *nw_snd_internal_StreamSoundFile_InfoBlockBody_GetChannelInfoTable(u32 *infoBlockBody);

u32 FUN_003e6e30(StreamInfoHolder *holder)
{
    if (holder->present != 0) {
        return *nw_snd_internal_StreamSoundFile_InfoBlockBody_GetChannelInfoTable(holder->infoBlockBody);
    }
    return 0;
}
}
