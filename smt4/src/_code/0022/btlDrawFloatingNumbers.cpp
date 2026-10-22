/* NON_MATCHING: number/label bases are hoisted and member address generation differs; -O2 candidate. */
#include "common.h"

struct NumberSprite { u8 data[0x8c]; };
struct FloatingNumber {
    NumberSprite digits[5];
    NumberSprite symbolA, symbolB;
    u8 unk3d4[0xc];
    u8 active;
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
    u8 active;
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
extern void *g_titleScene;
extern f32 DAT_00435e20;
void FUN_002c39a4(void *);
f32 FUN_002ba12c(void *, f32);
void effectRenderTransformedInstance(NumberSprite *, f32);
s32 FUN_0019d734(const void *, const void *);
void FUN_002b7bca(void *, u32, u32, s32 (*)(const void *, const void *));

void btlDrawFloatingNumbers(FloatingNumberScene *scene, s32 pass)
{
    NumberDrawOrder order[16];
    FUN_002c39a4(g_titleScene);
    s32 parallax = 0;
    if (pass)
        parallax = (s32)FUN_002ba12c(g_titleScene, DAT_00435e20);
    for (s32 i = 0; i < 16; ++i) {
        order[i].index = i;
        order[i].priority = scene->numbers[i].priority;
        order[i].active = scene->numbers[i].active != 0;
    }
    FUN_002b7bca(order, 16, sizeof(NumberDrawOrder), FUN_0019d734);
    for (s32 i = 0; i < 16; ++i) {
        s32 slot = order[i].index;
        FloatingNumber *number = &scene->numbers[slot];
        if (number->active && number->pass == pass) {
            if (number->value >= 10000)
                effectRenderTransformedInstance(&number->digits[4], (f32)parallax);
            if (number->value >= 1000)
                effectRenderTransformedInstance(&number->digits[3], (f32)parallax);
            if (number->value >= 100)
                effectRenderTransformedInstance(&number->digits[2], (f32)parallax);
            if (number->value >= 10)
                effectRenderTransformedInstance(&number->digits[1], (f32)parallax);
            effectRenderTransformedInstance(&number->digits[0], (f32)parallax);
            effectRenderTransformedInstance(&number->symbolA, (f32)parallax);
            effectRenderTransformedInstance(&number->symbolB, (f32)parallax);
        }
        FloatingLabel *label = &scene->labels[slot];
        if (label->active && label->pass == pass)
            effectRenderTransformedInstance(&label->sprite, (f32)parallax);
    }
}
}
