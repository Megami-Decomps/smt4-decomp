#ifndef UI_SPRITEWINDOW_H
#define UI_SPRITEWINDOW_H

#include "shard/W5_W5Match1_RecordKeys.h"
#include <stddef.h>

/* The sprite window state (g_sWin, 0x57f57c); its sprite is at +0x48 (its state byte is at +0x85 of the sprite). */
struct SpriteWindow {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 state;
    /* 0x0C */ s32 phase;
    /* 0x10 */ s32 frames;
    /* 0x14 */ s32 textureId;
    /* 0x18 */ s32 holdTextureId;
    /* 0x1C */ s32 holdTimer;
    /* 0x20 */ s32 holdLimit;
    /* 0x24 */ u8 unk24[0x24];
    /* 0x48 */ ByteStateWork sprite;
};
typedef char SpriteWindowLayoutCheck[offsetof(SpriteWindow, state) == 8 &&
    offsetof(SpriteWindow, holdLimit) == 0x20 && offsetof(SpriteWindow, sprite) == 0x48 ? 1 : -1];

#endif
