/* NON_MATCHING: the g_frameTex clear now matches; retail returns through a shared `mov r0, #0` (the cleared path branches to it, the `!shown` test straight to the pop), built gives the cleared path its own return. */
#include "common.h"
#include "shard/JobWork.h"
#include "camp/RenderCtx.h"

/* Frame texture fade state (Apocalypse layout). */
struct FrameTexFade {
    /* 0x0000 */ u8 unk0000[0xc];
    /* 0x000c */ u8 enabled;
    /* 0x000d */ u8 unk000d[3];
    /* 0x0010 */ s32 fadeInFrames;
    /* 0x0014 */ s32 fadeOutFrames;
    /* 0x0018 */ s32 frame;
    /* 0x001c */ u8 unk001c[0x13f8];
    /* 0x1414 */ s8 captured;
    /* 0x1415 */ u8 unk1415[2];
    /* 0x1417 */ s8 shown;
    /* 0x1418 */ u8 unk1418;
    /* 0x1419 */ u8 unk1419;
    /* 0x141a */ u8 unk141a[0x32];
    /* 0x144c */ u8 unk144c;
};

/* Frames a fade-out lasts before the frame texture is released. */
#define FRAME_TEX_FADE_OUT_FRAMES 30

extern "C" {
extern FrameTexFade *g_frameTex;
extern RenderCtxA *g_renderCtx;

void FUN_0014b01c(s32 value);

/* Job update: advances the frame texture's fade in or out, clearing it once a fade-out ends. */
u8 FUN_0013e8f8(u32 job)
{
    FrameTexFade *work = (FrameTexFade *)jobGetWork(job);

    if (!work->captured) {
        return 0;
    }
    if (!work->shown) {
        return 0;
    }
    if (work->enabled) {
        FUN_00157558(g_renderCtx);
        if (work->fadeInFrames > 0 || work->fadeOutFrames > 0) {
            work->frame++;
            if (work->fadeOutFrames <= 0) {
                work->fadeInFrames++;
            } else {
                work->fadeOutFrames++;
                if (work->fadeOutFrames > FRAME_TEX_FADE_OUT_FRAMES) {
                    g_frameTex->enabled = 0;
                    g_frameTex->fadeInFrames = 0;
                    g_frameTex->fadeOutFrames = 0;
                    g_frameTex->frame = 0;
                    g_frameTex->captured = 0;
                    g_frameTex->shown = 0;
                    g_frameTex->unk1418 = 0;
                    g_frameTex->unk1419 = 0;
                    g_frameTex->unk144c = 0;
                    return 0;
                }
            }
            FUN_0014b01c(1);
        }
    }
    return 0;
}

} /* extern "C" */
