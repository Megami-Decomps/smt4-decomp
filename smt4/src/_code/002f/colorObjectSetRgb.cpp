#include "common.h"

extern "C" {

typedef struct FloatColor {
    f32 r;
    f32 g;
    f32 b;
    f32 a;
} FloatColor;

typedef struct ColorObject {
    /* 0x00 */ u8 unk00[0xB8];
    /* 0xB8 */ FloatColor color;
    /* 0xC8 */ u32 picaColor;
} ColorObject;

typedef struct ColorOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ColorObject *object;
} ColorOwner;

extern u32 nw_ut_FloatColor_ToPicaU32(FloatColor *color);

/* Sets the object's color to (r, g, b, 1) and caches its packed PICA value. */
void colorObjectSetRgb(ColorOwner *owner, f32 r, f32 g, f32 b)
{
    ColorObject *object = owner->object;

    object->color.r = r;
    object->color.g = g;
    object->color.b = b;
    object->color.a = 1.0f;
    owner->object->picaColor = nw_ut_FloatColor_ToPicaU32(&owner->object->color);
}

} /* extern "C" */
