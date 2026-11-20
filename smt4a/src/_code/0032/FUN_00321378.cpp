/* NON_MATCHING: retail keeps the marker sequence in a register and outlines the deferred preset call; opening- and closing-loop setup also differs. */
#include "ui/UiSpriteApi.h"
#include "sys/RuntimeObjects.h"

struct RowTransitionSprites {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ UiSpriteState primary[10];
    /* 0x0598 */ UiSpriteState secondary[10];
    /* 0x0B10 */ UiSpriteState tertiary[10];
    /* 0x1088 */ UiSpriteState quaternary[10];
    /* 0x1600 */ u8 unk1600[0xB7C];
    /* 0x217C */ UiSpriteState heading;
    /* 0x2208 */ UiSpriteState markers[4];
    /* 0x2438 */ u8 unk2438[8];
    /* 0x2440 */ u32 immediate;
    /* 0x2444 */ u8 unk2444[4];
    /* 0x2448 */ s16 rowCount;
    /* 0x244A */ s16 closingCount;
};

extern "C" {
s32 btlIsDefeatSuppressed(void);
}

/* Selects opening and closing animations for the active rows and their markers. */
extern "C" void FUN_00321378(RowTransitionSprites* sprites, s16 addedRows, s16 closingRows)
{
    if (sprites == NULL) {
        return;
    }
    sprites->rowCount += addedRows;
    sprites->closingCount += closingRows;
    enum { LAST_MARKER = 3, IMMEDIATE_PRESET = 1, DEFEAT_PRESET = 0xFB0 };
    for (s32 index = 0; index < sprites->rowCount; ++index) {
        UiSpriteState *face = &sprites->primary[index];
        uiSpriteSelectAnim(&sprites->tertiary[index], 6);
        uiSpriteSelectAnim(&sprites->quaternary[index], 4);
        uiSpriteSelectAnim(&sprites->secondary[index], 0);
        uiSpriteSelectAnim(face, 2);
        if (index <= LAST_MARKER) {
            if (index == 0) {
                uiSpriteSelectAnim(&sprites->heading, 12);
            }
            uiSpriteSelectAnim(&sprites->markers[index], 12);
        }
        u32 preset = sprites->immediate ? IMMEDIATE_PRESET : (btlIsDefeatSuppressed() ? DEFEAT_PRESET : 0);
        pairSetFirstResetSecond(face, preset);
    }
    for (s32 index = 0; index < sprites->closingCount; ++index) {
        s32 row = sprites->rowCount - index - 1;
        pairSetFirstResetSecond(&sprites->secondary[row], 6);
        uiSpriteSelectAnim(&sprites->secondary[row], 1);
        uiSpriteSelectAnim(&sprites->tertiary[row], 6);
        uiSpriteSelectAnim(&sprites->quaternary[row], 4);
    }
}
