#include "common.h"

struct Values {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ f32 value64;
    /* 0x68 */ f32 value68;
    /* 0x6C */ u8 unk6C[0x8];
    /* 0x74 */ f32 value74;
    /* 0x78 */ u8 unk78[0x4];
    /* 0x7C */ f32 value7C;
    /* 0x80 */ u8 unk80[0x4];
    /* 0x84 */ f32 value84;
    /* 0x88 */ u8 unk88[0x40];
    /* 0xC8 */ f32 valueC8;
    /* 0xCC */ u8 unkCC[0x4];
    /* 0xD0 */ f32 valueD0;
    /* 0xD4 */ u8 unkD4[0x4];
    /* 0xD8 */ f32 valueD8;
    /* 0xDC */ f32 valueDC;
};

struct Object {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Values *dest;
    /* 0x24 */ const Values *source;
};

/* Scales the listed values of the source into the destination. */
extern "C" void FUN_00313514(Object *object, f32 scale)
{
    Values *dest = object->dest;
    const Values *source = object->source;

    dest->value64 = source->value64 * scale;
    dest->value68 = source->value68 * scale;
    dest->value74 = source->value74 * scale;
    dest->value7C = source->value7C * scale;
    dest->value84 = source->value84 * scale;
    dest->valueC8 = source->valueC8 * scale;
    dest->valueD0 = source->valueD0 * scale;
    dest->valueD8 = source->valueD8 * scale;
    dest->valueDC = source->valueDC * scale;
}
