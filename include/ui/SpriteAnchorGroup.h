#ifndef UI_SPRITE_ANCHOR_GROUP_H
#define UI_SPRITE_ANCHOR_GROUP_H
#include "common.h"
#include "script/scrScriptProcess.h"
#include <stddef.h>

struct SpriteAnchor {
    f32 x, y;
};
struct SpriteAnchorGroupWork {
    u32 unk00;
    s32 state;
    u32 frame;
    u8 padding0C[0x15];
    u8 mode;
    u8 padding22[0x27A];
    /* 0x29C */ SpriteAnchor rest[32];
    /* 0x39C */ SpriteAnchor optional[32];
    /* 0x49C */ SpriteAnchor current[32];
    u8 padding59C[4];
    /* 0x5A0 */ void *firstBuffer;
    /* 0x5A4 */ void *firstArguments;
    /* 0x5A8 */ ScriptRunState *firstProcess;
    /* 0x5AC */ void *secondBuffer;
    /* 0x5B0 */ void *secondArguments;
    /* 0x5B4 */ ScriptRunState *secondProcess;
};
typedef char SpriteAnchorGroupLayoutCheck[
    sizeof(SpriteAnchor) == 8 && sizeof(SpriteAnchorGroupWork) == 0x5B8 &&
    offsetof(SpriteAnchorGroupWork, state) == 4 &&
    offsetof(SpriteAnchorGroupWork, frame) == 8 &&
    offsetof(SpriteAnchorGroupWork, mode) == 0x21 &&
    offsetof(SpriteAnchorGroupWork, rest) == 0x29C &&
    offsetof(SpriteAnchorGroupWork, optional) == 0x39C &&
    offsetof(SpriteAnchorGroupWork, current) == 0x49C &&
    offsetof(SpriteAnchorGroupWork, firstBuffer) == 0x5A0 &&
    offsetof(SpriteAnchorGroupWork, firstArguments) == 0x5A4 &&
    offsetof(SpriteAnchorGroupWork, firstProcess) == 0x5A8 &&
    offsetof(SpriteAnchorGroupWork, secondBuffer) == 0x5AC &&
    offsetof(SpriteAnchorGroupWork, secondArguments) == 0x5B0 &&
    offsetof(SpriteAnchorGroupWork, secondProcess) == 0x5B4 ? 1 : -1];
#endif
