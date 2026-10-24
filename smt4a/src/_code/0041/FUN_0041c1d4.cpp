/* NON_MATCHING: one instruction: the render-stack push computes the new slot address into ip before the load of the old top; retail does it after the load into r3. */
#include "camp/RenderCtx.h"

struct SlotSprite {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

/* A rotating marker ring: the animation phase and the highlighted slot. */
struct MarkerRing {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 image;
    /* 0x10 */ s32 phase;
    /* 0x14 */ s32 slot;
};

extern "C" {
extern RenderCtxA *g_renderCtx;
s32 FUN_001692ac(s32 first, s32 second);
void efctSetSpeed(f32 speed);
void FUN_00183bb0(void);
SlotSprite *FUN_001834a4(u32 group, u32 image);
void FUN_00164b5c(s32 layer, s32 group, s32 image, s32 x, s32 y, s32 priority);
void FUN_001835b4(s32 layer, s32 group, s32 image, s32 x, s32 y, s32 priority);

// Draw the marker ring: nine slot sprites, then the highlight pairs that rotate around it.
void FUN_0041c1d4(MarkerRing *ring)
{
    f32 positions[9][2];
    renderCtxPushA(g_renderCtx, FUN_001692ac(1, 0));
    efctSetSpeed(1.0f);
    FUN_00183bb0();
    FUN_001834a4(43, ring->image);
    FUN_00164b5c(2, 43, ring->image, 0, 0, 211);
    for (s32 i = 0; i < 9; i++) {
        SlotSprite *slot = FUN_001834a4(43, i + 98);
        positions[i][0] = slot->x;
        positions[i][1] = slot->y;
        FUN_001835b4(2, 43, 95, slot->x, slot->y, 211);
    }
    ring->phase = (ring->phase + 1) % 4;
    if (ring->phase <= 0) {
        ring->slot++;
    }
    ring->slot = ring->slot % 8;
    s32 first = ring->slot;
    s32 second = (first + 1) & 7;
    s32 third = (first + 4) & 7;
    s32 fourth = (third + 1) & 7;
    FUN_001835b4(2, 43, 97, (s32)positions[first][0], (s32)positions[first][1], 211);
    FUN_001835b4(2, 43, 96, (s32)positions[second][0], (s32)positions[second][1], 211);
    FUN_001835b4(2, 43, 97, (s32)positions[third][0], (s32)positions[third][1], 211);
    FUN_001835b4(2, 43, 96, (s32)positions[fourth][0], (s32)positions[fourth][1], 211);
    renderStackPop(&g_renderCtx->stackA);
    efctSetSpeed(1.0f);
}
}
