#include "common.h"
#include "camp/RenderCtx.h"
#include "gfx/StereoParallax.h"
#include "camp/RenderCtxTitle.h"

struct NumberSprite { u8 data[0x8c]; };
struct FloatingNumber {
    NumberSprite digits[5];
    NumberSprite symbolA, symbolB;
    u8 unk3d4[0xc];
    s8 active;
    s8 pass;
    u8 unk3e2[2];
    u32 priority;
    u8 unk3e8[0x10];
    s32 value;
    u32 unk3fc;
};
struct FloatingLabel {
    NumberSprite sprite;
    u8 unk8c[0xc];
    s8 active;
    s8 pass;
    u8 unk9a[6];
};
struct FloatingNumberScene {
    u8 unk0000[0x7f4c];
    FloatingNumber numbers[16];
    FloatingLabel labels[16];
};
struct NumberDrawOrder {
    s8 index;
    u8 active, priority, reserved;
};
extern "C" {
extern f32 DAT_00435e20;
void effectRenderTransformedInstance(NumberSprite *, f32);
s32 btlFloatingNumberComparePriorityDescending(const void *, const void *);
void qsort(void *, u32, u32, s32 (*)(const void *, const void *));

/* Draws the active floating damage numbers and labels of one stereo pass, highest priority first. */
void btlDrawFloatingNumbers(FloatingNumberScene *scene, s32 pass)
{
    NumberDrawOrder order[16];
    renderCtxSelectStereoLayout(reinterpret_cast<RenderCtx *>(g_titleScene));
    s32 parallax = 0;
    if (pass)
        parallax = (s32)renderCtxCalculateStereoParallax(g_titleScene, DAT_00435e20);
    for (s32 i = 0; i < 16; ++i) {
        order[i].index = i;
        order[i].priority = scene->numbers[i].priority;
        order[i].active = scene->numbers[i].active != 0;
    }
    qsort(order, 16, sizeof(NumberDrawOrder), btlFloatingNumberComparePriorityDescending);
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
            effectRenderTransformedInstance(&scene->numbers[slot].symbolA, (f32)parallax);
            effectRenderTransformedInstance(&scene->numbers[slot].symbolB, (f32)parallax);
        }
        if (scene->labels[slot].active && scene->labels[slot].pass == pass)
            effectRenderTransformedInstance(&scene->labels[slot].sprite, (f32)parallax);
    }
}
}
