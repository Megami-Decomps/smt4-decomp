/* NON_MATCHING: retail tests the three flags with separate branches (reaching 0xf60/0xf63 through a base+0xf00 register) and keeps the fade-in test unconditional; armcc chains them with conditional loads. */
#include "common.h"
#include "camp/RenderCtx.h"
#include "shard/JobWork.h"

/* Frame texture fade state (Shin Megami Tensei IV layout). */
struct FrameTexFade {
    /* 0x000 */ u8 unk000[0xc];
    /* 0x00c */ u8 enabled;
    /* 0x00d */ u8 unk00d[3];
    /* 0x010 */ s32 fadeInFrames;
    /* 0x014 */ s32 fadeOutFrames;
    /* 0x018 */ s32 frame;
    /* 0x01c */ u8 unk01c[0xf44];
    /* 0xf60 */ u8 captured;
    /* 0xf61 */ u8 unkf61[2];
    /* 0xf63 */ u8 shown;
    /* 0xf64 */ u8 unkf64;
    /* 0xf65 */ u8 unkf65;
    /* 0xf66 */ u8 unkf66[0x32];
    /* 0xf98 */ u8 unkf98;
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

    if (tex->captured != 0 && tex->shown != 0 && tex->enabled != 0) {
        renderCtxSelectStereoLayout(reinterpret_cast<RenderCtx *>(g_titleScene));
        if (tex->fadeInFrames > 0 || tex->fadeOutFrames > 0) {
            tex->frame++;
            if (tex->fadeOutFrames <= 0) {
                tex->fadeInFrames++;
            } else if (++tex->fadeOutFrames > FRAME_TEX_FADE_OUT_FRAMES) {
                FrameTexFade *global = g_frameTex;
                global->enabled = 0;
                global->fadeInFrames = 0;
                global->fadeOutFrames = 0;
                global->frame = 0;
                global->captured = 0;
                global->shown = 0;
                global->unkf64 = 0;
                global->unkf65 = 0;
                global->unkf98 = 0;
                return 0;
            }
            FUN_001137fc(1);
        }
    }
    return 0;
}

} /* extern "C" */
