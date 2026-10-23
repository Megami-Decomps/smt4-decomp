#ifndef UI_SPRITE_TRANSITION_H
#define UI_SPRITE_TRANSITION_H
#include "shard/S1Mover.h"
#include <stddef.h>

struct SpriteTransitionWork {
    /* 0x00 */ u32 job;
    /* 0x04 */ void *textureSource;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 textureHandle;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ s32 textureIndex;
    /* 0x18 */ u8 unk18[0xC];
    /* 0x24 */ s32 mode;
    /* 0x28 */ f32 progress;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ s8 initialized;
    /* 0x31 */ u8 unk31[0xF];
    /* 0x40 */ Vec3f target;
    /* 0x4C */ Vec3f start;
    /* 0x58 */ Vec3f velocity;
    /* 0x64 */ u32 interpolation;
    /* 0x68 */ f32 duration;
    /* 0x6C */ f32 elapsed;
    /* 0x70 */ f32 delay;
    /* 0x74 */ f32 remaining;
    /* 0x78 */ u32 state;
};
struct SpriteTextureEntry { u16 unk00; u16 id; };
typedef char SpriteTransitionWorkOffsets[
    offsetof(SpriteTransitionWork, initialized) == 0x30 &&
    offsetof(SpriteTransitionWork, target) == 0x40 &&
    offsetof(SpriteTransitionWork, start) == 0x4C &&
    offsetof(SpriteTransitionWork, velocity) == 0x58 &&
    offsetof(SpriteTransitionWork, duration) == 0x68 &&
    offsetof(SpriteTransitionWork, remaining) == 0x74 &&
    sizeof(SpriteTransitionWork) == 0x7C ? 1 : -1];
#endif
