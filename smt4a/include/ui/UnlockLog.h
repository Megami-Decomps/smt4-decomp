#ifndef UI_UNLOCK_LOG_H
#define UI_UNLOCK_LOG_H

#include "ui/UiSpriteApi.h"
#include <stddef.h>

/* The unlock log menu's work (unlockLogMenuUpdate's process work; unlockLogHandleSelectionInput handles its selection input). */
struct UnlockLogWork {
    /* 0x000 */ u8 unk000[0x10];
    /* 0x010 */ u32 owner;
    /* 0x014 */ u32 state;
    /* 0x018 */ u32 nextState;
    /* 0x01C */ s32 stage;
    /* 0x020 */ u8 unk020[8];
    /* 0x028 */ void *resource;
    /* 0x02C */ u8 unk02c[8];
    /* 0x034 */ void *script;
    /* 0x038 */ u32 unk038;
    /* 0x03C */ s32 entry;
    /* 0x040 */ u8 unk040[0x10];
    /* 0x050 */ s32 selected;
    /* 0x054 */ u8 unk054[0x68];
    /* 0x0BC */ u8 cursor[0x64];
    /* 0x120 */ u8 confirmed;
    /* 0x121 */ u8 unk121[3];
    /* 0x124 */ s32 counter;
    /* 0x128 */ u8 unk128[0x44];
    /* 0x16C */ UiSpriteState first;
    /* 0x1F8 */ UiSpriteState backSprite;
    /* 0x284 */ UiSpriteState buttonSprite;
    /* 0x310 */ u8 unk310[0x118];
    /* 0x428 */ UiSpriteState titleSprite;
    /* 0x4B4 */ u8 unk4b4[0x8c];
    /* 0x540 */ UiSpriteState listSprite;
    /* 0x5CC */ u8 unk5cc[8];
    /* 0x5D4 */ u8 visible;
    /* 0x5D5 */ u8 unk5d5[0xf];
    /* 0x5E4 */ u8 firstPressed;
    /* 0x5E5 */ u8 secondPressed;
};
typedef char UnlockLogWorkOffsetCheck[offsetof(UnlockLogWork, cursor) == 0xBC &&
    offsetof(UnlockLogWork, counter) == 0x124 && offsetof(UnlockLogWork, buttonSprite) == 0x284 &&
    offsetof(UnlockLogWork, listSprite) == 0x540 && offsetof(UnlockLogWork, firstPressed) == 0x5E4 ? 1 : -1];

/* Poses the log's choice button: variants 0/1 rest and 2/3 use the pressed image. */
static __inline void unlockLogPoseButton(UnlockLogWork *work, s32 variant)
{
    s32 key = 0;
    s32 image = 0;
    switch (variant) {
    case 0:
        key = 0;
        break;
    case 1:
        key = 1;
        break;
    case 2:
        key = 2;
        image = 1;
        break;
    case 3:
        key = 3;
        image = 1;
        break;
    }
    uiSpriteSetKeyframe(&work->buttonSprite, key, 0);
    uiSpriteSetImageKeyframe(&work->buttonSprite, image, 0);
}

#endif
