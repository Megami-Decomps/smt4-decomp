/* NON_MATCHING: retail derives the work pointer as texture-base - 24 (one pool word, two ldr); here the struct of globals is read with a post-incremented ldr. Everything else (switch layout, texture table walk, interpolation calls) matches. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct BlinkFadeWork {
    u32 job;
    u32 unk04;
    s32 state;
    s32 position;
    s32 frame;
    f32 alpha;
    u8 visible;
    u8 unk19[3];
};

extern "C" {
/* The event effect's globals: the work block pointer and the two textures it waits for. */
struct EventEffectGlobals {
    BlinkFadeWork *work;
    u8 unk04[0x14];
    u32 textures[6];   /* per texture: table, node, ownership flags */
};
extern EventEffectGlobals g_eventEffect;
s32 lerpIntSplitClamped(s32 start, s32 end, s32 duration, s32 frame);
f32 mathInterpolateTimed(s32 duration, s32 frame, f32 from, f32 to);
s32 FUN_002c1d5c(void);
void FUN_00287728(s32 mode);

/* Update the blink-fade event effect: waits for its textures, then slides and fades for 300 frames. */
s32 FUN_00222520(void)
{
    u32 *textures = g_eventEffect.textures;
    BlinkFadeWork *work = g_eventEffect.work;
    switch (work->state) {
    case 0: {
        s32 loaded = 0;
        for (s32 i = 0; i < 2; i++) {
            if (asdTMTexTableNodeIsLoaded(textures[i * 3], textures[i * 3 + 1]) != 0) {
                loaded++;
            }
        }
        if (loaded == 2) {
            FUN_00287728(0);
            work->state = 1;
            work->visible = 1;
        }
        break;
    }
    case 1:
        if ((u32)(work->frame - 15) <= 120) {
            work->position = lerpIntSplitClamped(40, -180, 120, work->frame - 15);
        }
        if ((u32)(work->frame - 136) <= 6) {
            work->position = lerpIntSplitClamped(-180, 40, 6, work->frame - 136);
        }
        if ((u32)(work->frame - 143) <= 7) {
            work->position = lerpIntSplitClamped(40, -180, 7, work->frame - 143);
        }
        if ((u32)(work->frame - 195) <= 4) {
            work->position = lerpIntSplitClamped(-180, 40, 4, work->frame - 195);
        }
        if ((u32)(work->frame - 200) <= 6) {
            work->position = lerpIntSplitClamped(40, -180, 6, work->frame - 200);
        }
        if ((u32)(work->frame - 207) <= 4) {
            work->position = lerpIntSplitClamped(-180, 40, 4, work->frame - 207);
        }
        if (work->frame >= 212) {
            work->position = lerpIntSplitClamped(40, -180, 45, work->frame - 212);
        }
        if ((u32)(work->frame - 15) <= 187) {
            work->alpha = mathInterpolateTimed(202, work->frame - 15, 1.0f, 0.6f);
        }
        if ((u32)(work->frame - 203) <= 7) {
            work->alpha = mathInterpolateTimed(8, work->frame - 203, 0.6f, 0.7f);
        }
        if (work->frame >= 240) {
            work->alpha = mathInterpolateTimed(60, work->frame - 240, 0.7f, 0.0f);
        }
        work->frame++;
        if (work->frame > 300) {
            work->visible = 0;
            work->state = 2;
        }
        break;
    }
    if (FUN_002c1d5c() != 0) {
        s32 loaded = 0;
        for (s32 i = 0; i < 2; i++) {
            if (asdTMTexTableNodeIsLoaded(textures[i * 3], textures[i * 3 + 1]) != 0) {
                loaded++;
            }
        }
        if (loaded == 2) {
            work->state = 2;
        }
    }
    return 0;
}

}
