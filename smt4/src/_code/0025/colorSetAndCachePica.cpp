#include "common.h"

extern "C" {

typedef struct FloatColor {
    f32 r;
    f32 g;
    f32 b;
    f32 a;
} FloatColor;

typedef struct ColorTarget {
    /* 0x000 */ u8 unk000[0xcc];
    /* 0x0cc */ FloatColor color;
    /* 0x0dc */ u8 unk0dc[0x24];
    /* 0x100 */ u32 pica;
} ColorTarget;

typedef struct ColorOwner {
    /* 0x00 */ ColorTarget *target;
} ColorOwner;

u32 nw_ut_FloatColor_ToPicaU32(FloatColor *color);

/* Sets the target's float color and caches its packed PICA form. */
void colorSetAndCachePica(ColorOwner *owner, FloatColor color)
{
    owner->target->color = color;
    owner->target->pica = nw_ut_FloatColor_ToPicaU32(&owner->target->color);
}

} /* extern "C" */
