#ifndef GFX_EFFECTPRIMITIVEWORK_H
#define GFX_EFFECTPRIMITIVEWORK_H
#include "common.h"
#include "shard/W6_W6Match3_EffectColor.h"
#include <stddef.h>

struct EffectPrimitive {
    /* 0x00 */ u16 flags;
    /* 0x02 */ u8 unk02[0x4E];
    /* 0x50 */ u32 color;
};
struct EffectPrimitiveHandle {
    u32 unk00;
    EffectPrimitive *primitive;
};
struct EffectPrimitiveEmitter {
    /* 0x00 */ u8 colorCurve[0x24];
    /* 0x24 */ u32 color;
    /* 0x28 */ u32 renderFlags;
    /* 0x2C */ u8 unk2C[8];
    /* 0x34 */ u32 duration;
    /* 0x38 */ u8 unk38[0x1E];
    /* 0x56 */ u8 enabled;
};
struct EffectPrimitiveWork {
    /* 0x00 */ f32 translation[4];
    /* 0x10 */ f32 rotation[4];
    /* 0x20 */ f32 scale[4];
    /* 0x30 */ u32 color;
    /* 0x34 */ u32 frame;
    /* 0x38 */ u32 unk38;
    /* 0x3C */ EffectPrimitiveHandle *handle;
    /* 0x40 */ EffectPrimitiveEmitter *emitter;
};
typedef char EffectPrimitiveWorkOffsets[(offsetof(EffectPrimitive, color) == 0x50 && offsetof(EffectPrimitiveEmitter, enabled) == 0x56 && offsetof(EffectPrimitiveWork, emitter) == 0x40) ? 1 : -1];
#endif
