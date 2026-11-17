/* Starts the intro animation: resets the banner's intro bytes and queues animation 0x13 on its intro sprite, playing at normal speed; returns 1. */
#include "ui/MessageMainA.h"

extern "C" {

extern void uiSpriteStateInitFromSource(void *player, s32 animId, s32 loops, void *data, s32 count, f32 speed);

u32 messageStartIntroAnimation(void)
{
    MessageWindowA *banner = g_messageMain.banner;

    banner->introMode = 2;
    banner->introStep = 0;
    banner->introFlag = 0;
    uiSpriteStateInitFromSource(&banner->sprites[41], 0x13, -1, &banner->parameters, 11, 1.0f);
    return 1;
}

}
