/* NON_MATCHING: retail loads g_frameTex a second time after taking the pending-flag address; armcc reuses the first load. */
#include "common.h"

/* Frame texture fade state (Apocalypse layout). */
struct FrameTexFade {
    /* 0x0000 */ u8 unk0000[0xc];
    /* 0x000c */ u8 enabled;
    /* 0x000d */ u8 unk000d[3];
    /* 0x0010 */ s32 fadeInFrames;
    /* 0x0014 */ s32 fadeOutFrames;
    /* 0x0018 */ s32 frame;
    /* 0x001c */ u8 unk001c[0x13f8];
    /* 0x1414 */ u8 captured;
    /* 0x1415 */ u8 unk1415[2];
    /* 0x1417 */ u8 shown;
    /* 0x1418 */ u8 unk1418;
    /* 0x1419 */ u8 unk1419;
    /* 0x141a */ u8 unk141a[0x32];
    /* 0x144c */ u8 unk144c;
};

extern "C" {
extern FrameTexFade *g_frameTex;

/* Frame texture fade request: 0 resets, 1 and 4 start a fade-in, 2 starts the fade-out, 3 enables without fading. */
void FUN_002e5924(s32 request)
{
    u8 *pending = &g_frameTex->unk144c;

    if (request == 0) {
        g_frameTex->enabled = 0;
        g_frameTex->fadeInFrames = 0;
        g_frameTex->fadeOutFrames = 0;
        g_frameTex->frame = 0;
        g_frameTex->captured = 0;
        g_frameTex->shown = 0;
        g_frameTex->unk1418 = 0;
        g_frameTex->unk1419 = 0;
        *pending = 0;
    } else if (request == 1) {
        g_frameTex->enabled = 1;
        g_frameTex->fadeInFrames = 1;
        *pending = 0;
    } else if (request == 2) {
        if (g_frameTex->enabled == 0) {
            g_frameTex->fadeInFrames = 0;
            g_frameTex->fadeOutFrames = 0;
            g_frameTex->frame = 0;
        } else {
            g_frameTex->fadeOutFrames = 1;
        }
    } else if (request == 3) {
        g_frameTex->enabled = 1;
        g_frameTex->fadeInFrames = 0;
        g_frameTex->fadeOutFrames = 0;
        g_frameTex->frame = 0;
    } else if (request == 4) {
        g_frameTex->enabled = 1;
        g_frameTex->fadeInFrames = 1;
        *pending = 1;
    }
}

} /* extern "C" */
