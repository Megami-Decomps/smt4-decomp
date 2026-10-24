#include "common.h"

/* An effect parameter block: only the float fields scaled here are named. */
struct Obj0039f758Params {
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
    u8 unkcc[0xc];
    f32 unkd8;
    u8 unkdc[0x4];
    f32 unke0;
    f32 unke4;
};

struct Obj0039f758 {
    u8 unk00[0x20];
    Obj0039f758Params *dst;
    Obj0039f758Params *src;
};

/* Copies the scalable parameters from the source block to the destination block, multiplied by `scale`. */
extern "C" void FUN_0039f758(Obj0039f758 *obj, f32 scale)
{
    Obj0039f758Params *dst = obj->dst;
    Obj0039f758Params *src = obj->src;
    dst->unk64 = src->unk64 * scale;
    dst->unk68 = src->unk68 * scale;
    dst->unk74 = src->unk74 * scale;
    dst->unk7c = src->unk7c * scale;
    dst->unk84 = src->unk84 * scale;
    dst->unkc8 = src->unkc8 * scale;
    dst->unkd8 = src->unkd8 * scale;
    dst->unke0 = src->unke0 * scale;
    dst->unke4 = src->unke4 * scale;
}
