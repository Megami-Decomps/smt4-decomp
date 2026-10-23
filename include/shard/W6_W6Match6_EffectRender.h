#ifndef SHARD_W6_W6MATCH6_EFFECT_RENDER_H
#define SHARD_W6_W6MATCH6_EFFECT_RENDER_H

#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/W6_W6Match4_EffectEditorSnapshot.h"
#include <stddef.h>

struct EffectRenderVector { f32 x, y, z, w; };
struct EffectRenderSource {
    EffectRenderVector origin;
    u8 unk10[0x40];
    EffectRenderVector position;
    u8 unk60[0x14];
    f32 scale;
};
struct EffectRenderControls {
    union {
        EffectEditorSnapshot snapshot;
        struct {
            u8 unk00[0x20];
            EffectRenderVector tint;
            u8 unk30[0x20];
            EffectEditorWords fallback;
            f32 scale;
            u32 value, flags;
            u8 unk6c[0x14];
        } parameters;
    };
};
struct EffectRenderSettings {
    EffectRenderVector initial;
    u8 unk10[0x80];
    EffectRenderControls controls; // 0x90
};
struct EffectRenderGlobals {
    EffectEditorGlobalState base;
    u8 unkf0[0x10];
    EffectRenderVector current; // 0x100
    union { EffectEditorWords words; EffectRenderVector vector; };
};
struct EffectHandlerRequest { u32 unk00; u16 index, unk06; u32 argument; };

struct EffectPositionControl {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ EffectRenderVector position;
    /* 0x50 */ u8 unk50[0x18];
    /* 0x68 */ u32 flags;
};
struct EffectPositionDefaults {
    /* 0x00 */ u8 unk00[0xD0];
    /* 0xD0 */ EffectRenderVector position;
};
typedef char EffectPositionControlOffsets[
    offsetof(EffectPositionControl, position) == 0x40 &&
    offsetof(EffectPositionControl, flags) == 0x68 &&
    sizeof(EffectPositionControl) == 0x6C &&
    offsetof(EffectPositionDefaults, position) == 0xD0 &&
    sizeof(EffectPositionDefaults) == 0xE0 ? 1 : -1];

struct EffectParameterBlock {
    /* 0x00 */ f32 values[6];
};

typedef char EffectParameterBlockSizeCheck[sizeof(EffectParameterBlock) == 0x18 ? 1 : -1];

static __inline const EffectRenderSource *effectRenderSource()
{
    return (const EffectRenderSource *)g_effectEditor.selection.list;
}

#endif
