#include "common.h"

extern "C" {

typedef struct FloatColor {
    f32 r;
    f32 g;
    f32 b;
    f32 a;
} FloatColor;

typedef struct ColorTarget {
    /* 0x000 */ u8 unk000[0xDC];
    /* 0x0DC */ FloatColor color;
    /* 0x0EC */ u8 unk0EC[0x18];
    /* 0x104 */ u32 picaColor;
} ColorTarget;

typedef struct ColorOwner {
    /* 0x00 */ ColorTarget *target;
} ColorOwner;

extern u32 nw_ut_FloatColor_ToPicaU32(FloatColor *color);

/* Sets the target's color and its packed Pica form. */
void FUN_0025bab8(ColorOwner *owner, FloatColor color)
{
    owner->target->color = color;
    owner->target->picaColor = nw_ut_FloatColor_ToPicaU32(&owner->target->color);
}

} /* extern "C" */
