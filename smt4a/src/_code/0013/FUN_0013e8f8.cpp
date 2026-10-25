/* NON_MATCHING: addressing of the 0x14xx flag bytes: retail uses base+0x1400 loads and a pooled 0x1414 register offset for the clears; this source gets add/add pairs. */
#include "common.h"
#include "shard/JobWork.h"

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

/* Frames a fade-out lasts before the frame texture is released. */
#define FRAME_TEX_FADE_OUT_FRAMES 30

extern "C" {
extern FrameTexFade *g_frameTex;
extern u32 g_renderCtx;

void FUN_00157558(u32 renderCtx);
void FUN_0014b01c(s32 value);

/* Job update: advances the frame texture's fade in or out, clearing it once a fade-out ends. */
u8 FUN_0013e8f8(u32 job)
{
    FrameTexFade *work = (FrameTexFade *)jobGetWork(job);

    if (work->captured && work->shown && work->enabled) {
        FUN_00157558(g_renderCtx);
        if (work->fadeInFrames > 0 || work->fadeOutFrames > 0) {
            work->frame++;
            if (work->fadeOutFrames <= 0) {
                work->fadeInFrames++;
            } else {
                work->fadeOutFrames++;
                if (work->fadeOutFrames > FRAME_TEX_FADE_OUT_FRAMES) {
                    FrameTexFade *tex = g_frameTex;
                    tex->enabled = 0;
                    tex->fadeInFrames = 0;
                    tex->fadeOutFrames = 0;
                    tex->frame = 0;
                    tex->captured = 0;
                    tex->shown = 0;
                    tex->unk1418 = 0;
                    tex->unk1419 = 0;
                    tex->unk144c = 0;
                    return 0;
                }
            }
            FUN_0014b01c(1);
        }
    }
    return 0;
}

} /* extern "C" */
