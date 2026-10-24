#include "common.h"

struct Params {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ f32 a;
    /* 0x68 */ f32 b;
    /* 0x6c */ u8 unk6c[8];
    /* 0x74 */ f32 c;
    /* 0x78 */ u8 unk78[4];
    /* 0x7c */ f32 d;
    /* 0x80 */ u8 unk80[4];
    /* 0x84 */ f32 e;
};

struct Blend {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Params *target;
    /* 0x24 */ Params *source;
};

extern "C" {

/* Scales five of the source parameters by the factor into the target. */
void FUN_00375c30(Blend *blend, f32 factor)
{
    Params *target = blend->target;
    Params *source = blend->source;
    target->a = source->a * factor;
    target->b = source->b * factor;
    target->c = source->c * factor;
    target->d = source->d * factor;
    target->e = source->e * factor;
}

} /* extern "C" */
