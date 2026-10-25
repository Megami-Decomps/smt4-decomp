#ifndef SHARD_W6_W6MATCH6_EFFECT_RENDER_H
#define SHARD_W6_W6MATCH6_EFFECT_RENDER_H

#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/W6_W6Match4_EffectEditorSnapshot.h"
#include <stddef.h>

struct EffectRenderSource {
    EffMenuPosition origin;
    u8 unk10[0x40];
    EffMenuPosition position;
    u8 unk60[0x14];
    f32 scale;
};
struct EffectRenderGlobals {
    EffectEditorGlobalState base;
    u8 unkf0[0x10];
    EffMenuPosition current; // 0x100
    union { EffectEditorWords words; EffMenuPosition vector; };
};
struct EffectHandlerRequest { u32 unk00; u16 index, unk06; u32 argument; };

struct EffectPositionControl {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ EffMenuPosition position;
    /* 0x50 */ u8 unk50[0x18];
    /* 0x68 */ u32 flags;
};
typedef char EffectPositionControlOffsets[
    offsetof(EffectPositionControl, position) == 0x40 &&
    offsetof(EffectPositionControl, flags) == 0x68 &&
    sizeof(EffectPositionControl) == 0x6C ? 1 : -1];

struct EffectParameterBlock {
    /* 0x00 */ f32 values[6];
};

typedef char EffectParameterBlockSizeCheck[sizeof(EffectParameterBlock) == 0x18 ? 1 : -1];

static __inline const EffectRenderSource *effectRenderSource()
{
    return (const EffectRenderSource *)g_effectEditor.selection.list;
}

#endif
