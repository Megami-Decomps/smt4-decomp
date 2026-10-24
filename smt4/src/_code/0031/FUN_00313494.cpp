#include "common.h"

/* An effect parameter block: only the float fields scaled here are named. */
struct Obj00313494Params {
    u8 unk00[0x64];
    f32 unk64;
    f32 unk68;
    u8 unk6c[0x8];
    f32 unk74;
    u8 unk78[0x4];
    f32 unk7c;
    u8 unk80[0x4];
    f32 unk84;
    u8 unk88[0x40];
    f32 unkc8;
    f32 unkcc;
    u8 unkd0[0x4];
    f32 unkd4;
    f32 unkd8;
    u8 unkdc[0x4];
    f32 unke0;
};

struct Obj00313494 {
    u8 unk00[0x20];
    Obj00313494Params *dst;
    Obj00313494Params *src;
};

/* Copies the scalable parameters from the source block to the destination block, multiplied by `scale`. */
extern "C" void FUN_00313494(Obj00313494 *obj, f32 scale)
{
    Obj00313494Params *dst = obj->dst;
    Obj00313494Params *src = obj->src;
    dst->unk64 = src->unk64 * scale;
    dst->unk68 = src->unk68 * scale;
    dst->unk74 = src->unk74 * scale;
    dst->unk7c = src->unk7c * scale;
    dst->unk84 = src->unk84 * scale;
    dst->unkc8 = src->unkc8 * scale;
    dst->unkcc = src->unkcc * scale;
    dst->unkd4 = src->unkd4 * scale;
    dst->unkd8 = src->unkd8 * scale;
    dst->unke0 = src->unke0 * scale;
}
