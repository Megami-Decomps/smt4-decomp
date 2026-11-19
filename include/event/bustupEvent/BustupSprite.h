#ifndef EVENT_BUSTUPEVENT_BUSTUPSPRITE_H
#define EVENT_BUSTUPEVENT_BUSTUPSPRITE_H

#include "common.h"
#include <stddef.h>

struct BustupSpritePosition {
    f32 x, y, z;
};

/* A bust-up sprite job and its transition state. */
struct BustupSprite {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *request;
    /* 0x08 */ s32 slot;
    /* 0x0C */ s32 unk0c;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ s32 textureIndex;
    /* 0x18 */ u8 unk18[0xC];
    /* 0x24 */ s32 operation;
    /* 0x28 */ f32 progress;
    /* 0x2C */ f32 progressEnd;
    /* 0x30 */ s8 hidden;
    /* 0x31 */ u8 unk31[3];
    /* 0x34 */ BustupSpritePosition position;
    /* 0x40 */ BustupSpritePosition moveStart;
    /* 0x4C */ BustupSpritePosition moveEnd;
    /* 0x58 */ f32 offset;
    /* 0x5C */ f32 moveStartOffset;
    /* 0x60 */ f32 moveEndOffset;
    /* 0x64 */ u32 moveOwner;
    /* 0x68 */ f32 moveDuration;
    /* 0x6C */ f32 moveElapsed;
    /* 0x70 */ f32 moveProgress;
    /* 0x74 */ f32 duration;
    /* 0x78 */ s32 state;
    /* 0x7C */ u8 unk7C[0xC];
    /* 0x88 */ f32 fade;
    /* 0x8C */ u8 unk8c;
    /* 0x8D */ u8 fading;
};

typedef char BustupSpriteLayoutCheck[
    offsetof(BustupSprite, position) == 0x34 && offsetof(BustupSprite, offset) == 0x58 &&
    offsetof(BustupSprite, moveOwner) == 0x64 && offsetof(BustupSprite, state) == 0x78 &&
    offsetof(BustupSprite, fading) == 0x8D && sizeof(BustupSprite) == 0x90 ? 1 : -1];

extern "C" void bustupSpriteStartTransition(BustupSprite *sprite, u32 operation, s32 duration);

#endif
