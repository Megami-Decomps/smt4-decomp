#include "common.h"
#include "camp/RenderCtxA.h"
#include "gfx/StereoParallax.h"
#include "ui/UiSpriteState.h"
#include <stdlib.h>

/* unit-local: the battle UI's floating numbers and their labels as the draw reads them (the smt4 twin
 * btlDrawFloatingNumbers uses the same view of its scene) */
struct FloatingNumberA {
    /* 0x000 */ UiSpriteState digits[5];
    /* 0x2BC */ u8 unk2BC[0x124];
    /* 0x3E0 */ s8 active;
    /* 0x3E1 */ s8 pass;      /* the stereo pass (eye) it is drawn in */
    /* 0x3E2 */ u8 unk3E2[2];
    /* 0x3E4 */ u32 priority;
    /* 0x3E8 */ u8 unk3E8[0x10];
    /* 0x3F8 */ s32 value;
    /* 0x3FC */ u8 unk3FC[4];
};
struct FloatingLabelA {
    /* 0x00 */ UiSpriteState sprite;
    /* 0x8C */ u8 unk8C[0xC];
    /* 0x98 */ s8 active;
    /* 0x99 */ s8 pass;
    /* 0x9A */ u8 unk9A[6];
};
struct FloatingNumberSceneA {
    /* 0x0000 */ u8 unk0000[0x75B4];
    /* 0x75B4 */ FloatingNumberA numbers[16];
    /* 0xB5B4 */ FloatingLabelA labels[16];
};
typedef char FloatingNumberSceneALayoutCheck[sizeof(FloatingNumberA) == 0x400 && sizeof(FloatingLabelA) == 0xA0 &&
    offsetof(FloatingNumberSceneA, labels) == 0xB5B4 ? 1 : -1];

/* unit-local: the sort key array exists only while this function runs */
struct NumberDrawOrderA {
    s8 index;
    u8 active, priority, reserved;
};

extern "C" {
extern f32 DAT_00573c00;
void effectRenderTransformedInstance(UiSpriteState *sprite, f32 parallax);
s32 btlFloatingNumberComparePriorityDescending(const void *, const void *);

/* Draws the active floating damage numbers and labels of one stereo pass, highest priority first. */
void btlDrawFloatingNumbers(FloatingNumberSceneA *scene, s32 pass)
{
    NumberDrawOrderA order[16];
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    s32 parallax = 0;
    if (pass)
        parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, DAT_00573c00);
    for (s32 i = 0; i < 16; ++i) {
        order[i].index = i;
        order[i].priority = scene->numbers[i].priority;
        order[i].active = scene->numbers[i].active != 0;
    }
    qsort(order, 16, sizeof(NumberDrawOrderA), btlFloatingNumberComparePriorityDescending);
    for (s32 i = 0; i < 16; ++i) {
        s32 slot = order[i].index;
        if (scene->numbers[slot].active && scene->numbers[slot].pass == pass) {
            if (scene->numbers[slot].value >= 10000)
                effectRenderTransformedInstance(&scene->numbers[slot].digits[4], (f32)parallax);
            if (scene->numbers[slot].value >= 1000)
                effectRenderTransformedInstance(&scene->numbers[slot].digits[3], (f32)parallax);
            if (scene->numbers[slot].value >= 100)
                effectRenderTransformedInstance(&scene->numbers[slot].digits[2], (f32)parallax);
            if (scene->numbers[slot].value >= 10)
                effectRenderTransformedInstance(&scene->numbers[slot].digits[1], (f32)parallax);
            effectRenderTransformedInstance(&scene->numbers[slot].digits[0], (f32)parallax);
        }
        if (scene->labels[slot].active && scene->labels[slot].pass == pass)
            effectRenderTransformedInstance(&scene->labels[slot].sprite, (f32)parallax);
    }
}

} /* extern "C" */
