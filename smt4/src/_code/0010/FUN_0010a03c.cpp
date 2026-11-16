/* NON_MATCHING: the capture flags are now reached through base+0xf00 as in retail; armcc still chains the captured/shown tests with conditional loads (retail branches on each) and places the counter update's return block differently (retail falls into FUN_001137fc's call and returns from the end). */
#include "common.h"
#include "camp/RenderCtx.h"
#include "shard/JobWork.h"

/* The capture flags of the frame texture work (at 0xf00). */
struct FrameTexCaptureState {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u8 captured;
    /* 0x61 */ u8 unk61[2];
    /* 0x63 */ u8 shown;
    /* 0x64 */ u8 unk64;
    /* 0x65 */ u8 unk65;
    /* 0x66 */ u8 unk66[0x32];
    /* 0x98 */ u8 unk98;
};

/* Frame texture fade state (Shin Megami Tensei IV layout). */
struct FrameTexFade {
    /* 0x000 */ u8 unk000[0xc];
    /* 0x00c */ u8 enabled;
    /* 0x00d */ u8 unk00d[3];
    /* 0x010 */ s32 fadeInFrames;
    /* 0x014 */ s32 fadeOutFrames;
    /* 0x018 */ s32 frame;
    /* 0x01c */ u8 unk01c[0xee4];
    /* 0xf00 */ FrameTexCaptureState capture;
};

/* Frames a fade-out lasts before the frame texture is released. */
#define FRAME_TEX_FADE_OUT_FRAMES 30

extern "C" {
extern FrameTexFade *g_frameTex;
extern u32 g_titleScene;

void FUN_001137fc(s32 mode);

/* Job update of the frame texture fade: advances the fade-in or fade-out counter, and clears the state once a fade-out ends. */
u8 FUN_0010a03c(u32 job)
{
    FrameTexFade *tex = (FrameTexFade *)jobGetWork(job);
    FrameTexCaptureState *capture = &tex->capture;

    if (capture->captured == 0 || capture->shown == 0) {
        return 0;
    }
    if (tex->enabled == 0) {
        return 0;
    }
    renderCtxSelectStereoLayout(reinterpret_cast<RenderCtx *>(g_titleScene));
    if (tex->fadeInFrames <= 0 && tex->fadeOutFrames <= 0) {
        return 0;
    }
    tex->frame++;
    if (tex->fadeOutFrames <= 0) {
        tex->fadeInFrames++;
    } else if (++tex->fadeOutFrames > FRAME_TEX_FADE_OUT_FRAMES) {
        FrameTexFade *global = g_frameTex;
        global->enabled = 0;
        global->fadeInFrames = 0;
        global->fadeOutFrames = 0;
        global->frame = 0;
        global->capture.captured = 0;
        global->capture.shown = 0;
        global->capture.unk64 = 0;
        global->capture.unk65 = 0;
        global->capture.unk98 = 0;
        return 0;
    }
    FUN_001137fc(1);
    return 0;
}

} /* extern "C" */
