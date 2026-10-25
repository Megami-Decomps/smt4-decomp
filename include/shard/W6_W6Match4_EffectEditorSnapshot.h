#ifndef SHARD_W6_W6MATCH4_EFFECTEDITORSNAPSHOT_H
#define SHARD_W6_W6MATCH4_EFFECTEDITORSNAPSHOT_H

#include "common.h"

#include "AsdSDK/Source/Gfx/Effect/effMenuMatrix.h"
struct EffectEditorWords {
    u32 words[4];
};
struct EffectEditorSnapshot {
    union {
        u8 data[0x80];
        EffectEditorWords initial;
        f32 initialValues[4];
        EffMenuPosition initialPosition;
        struct {
            u8 unk00[0x40];
            EffectEditorWords saved; // 0x40
            u8 unk50[0x30];
        } payload;
        struct {
            u8 unk00[0x20];
            EffMenuPosition tint; // 0x20
            u8 unk30[0x10];
            EffMenuPosition position; // 0x40
            union {
                EffMenuPosition rotation; // 0x50
                EffectEditorWords fallback;
            };
            f32 scale; // 0x60
            u32 value; // 0x64
            u32 flags; // 0x68
            u8 unk6c[0x14];
        } parameters;
    };
};
typedef char EffectEditorSnapshotLayoutCheck[
    sizeof(EffMenuPosition) == 0x10 &&
    sizeof(EffectEditorWords) == 0x10 &&
    __INTADDR__(&((EffectEditorSnapshot *)0)->initial) == 0 &&
    __INTADDR__(&((EffectEditorSnapshot *)0)->payload.saved) == 0x40 &&
    __INTADDR__(&((EffectEditorSnapshot *)0)->parameters.tint) == 0x20 &&
    __INTADDR__(&((EffectEditorSnapshot *)0)->parameters.position) == 0x40 &&
    __INTADDR__(&((EffectEditorSnapshot *)0)->parameters.rotation) == 0x50 &&
    __INTADDR__(&((EffectEditorSnapshot *)0)->parameters.scale) == 0x60 &&
    __INTADDR__(&((EffectEditorSnapshot *)0)->parameters.value) == 0x64 &&
    __INTADDR__(&((EffectEditorSnapshot *)0)->parameters.flags) == 0x68 &&
    sizeof(EffectEditorSnapshot) == 0x80 ? 1 : -1];
struct EffectEditorGlobalState {
    u8 unk00[0xe0];
    EffectEditorWords words; // 0xe0
};

#endif
