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
    /* 0xcc */ f32 valuecc;
    /* 0xd0 */ u8 unkd0[0x4];
    /* 0xd4 */ f32 valued4;
    /* 0xd8 */ u8 unkd8[0xc];
    /* 0xe4 */ f32 valuee4;
    /* 0xe8 */ u8 unke8[0x8];
    /* 0xf0 */ f32 valuef0;
};

struct Blend {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Params *target;
    /* 0x24 */ Params *source;
};

extern "C" {

/* Scales the listed source parameters by the factor into the target. */
void FUN_00375e10(Blend *blend, f32 factor)
{
    Params *target = blend->target;
    Params *source = blend->source;
    target->value64 = source->value64 * factor;
    target->value68 = source->value68 * factor;
    target->value74 = source->value74 * factor;
    target->value7c = source->value7c * factor;
    target->value84 = source->value84 * factor;
    target->valuec8 = source->valuec8 * factor;
    target->valuecc = source->valuecc * factor;
    target->valued4 = source->valued4 * factor;
    target->valuee4 = source->valuee4 * factor;
    target->valuef0 = source->valuef0 * factor;
}

} /* extern "C" */
