#ifndef GFX_SCALAREFFECTKEYS_H
#define GFX_SCALAREFFECTKEYS_H
#include "common.h"
#include <stddef.h>
struct ScalarEffectKey {
    /* 0x00 */ s32 frame;
    /* 0x04 */ u8 unk04[0x18];
    /* 0x1C */ s16 value;
    /* 0x1E */ u16 unk1E;
    /* 0x20 */ s32 randomRange;
    /* 0x24 */ u8 unk24[0x20];
};
struct ScalarEffectKeys {
    /* 0x000 */ u8 unk000[0x30];
    /* 0x030 */ ScalarEffectKey keys[4];
    /* 0x140 */ u8 unk140[0xF8];
    /* 0x238 */ f32 step;
    /* 0x23C */ u8 unk23C[0x28];
    /* 0x264 */ f32 target;
    /* 0x268 */ u8 unk268[0x81];
    /* 0x2E9 */ s8 nextKey;
    /* 0x2EA */ u8 unk2EA[0x4A];
    /* 0x334 */ s32 duration;
};
typedef char ScalarEffectKeyLayoutCheck[(sizeof(ScalarEffectKey) == 0x44 && offsetof(ScalarEffectKeys, nextKey) == 0x2E9 && offsetof(ScalarEffectKeys, duration) == 0x334) ? 1 : -1];
#endif
