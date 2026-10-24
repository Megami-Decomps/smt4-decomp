#include "common.h"

struct Params {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ f32 value64;
    /* 0x68 */ f32 value68;
    /* 0x6c */ u8 unk6c[0x8];
    /* 0x74 */ f32 value74;
    /* 0x78 */ u8 unk78[0x4];
    /* 0x7c */ f32 value7c;
    /* 0x80 */ u8 unk80[0x4];
    /* 0x84 */ f32 value84;
    /* 0x88 */ u8 unk88[0x40];
    /* 0xc8 */ f32 valuec8;
    /* 0xcc */ u8 unkcc[0x4];
    /* 0xd0 */ f32 valued0;
    /* 0xd4 */ u8 unkd4[0x4];
    /* 0xd8 */ f32 valued8;
    /* 0xdc */ f32 valuedc;
};

struct Blend {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Params *target;
    /* 0x24 */ Params *source;
};

extern "C" {

/* Scales the listed source parameters by the factor into the target. */
void FUN_002e5c18(Blend *blend, f32 factor)
{
    Params *target = blend->target;
    Params *source = blend->source;
    target->value64 = source->value64 * factor;
    target->value68 = source->value68 * factor;
    target->value74 = source->value74 * factor;
    target->value7c = source->value7c * factor;
    target->value84 = source->value84 * factor;
    target->valuec8 = source->valuec8 * factor;
    target->valued0 = source->valued0 * factor;
    target->valued8 = source->valued8 * factor;
    target->valuedc = source->valuedc * factor;
}

} /* extern "C" */
