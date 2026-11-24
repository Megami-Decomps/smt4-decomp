#ifndef BATTLE_BTLUIITEMDESCRIPTIONS_H
#define BATTLE_BTLUIITEMDESCRIPTIONS_H

#include "battle/btlUI.h"

/* Item description records follow the twelve row sprites in Apocalypse's battle UI. */
struct BtlUiItemDescriptionRow {
    /* 0x00 */ s16 label;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ s32 effect;
    /* 0x08 */ s32 category;
};

struct BtlUiItemDescriptions {
    /* 0x000 */ s32 count;
    /* 0x004 */ UiSpriteState animations[12];
    /* 0x694 */ BtlUiItemDescriptionRow rows[12];
};

enum { BTL_UI_ITEM_DESCRIPTIONS = 0x128A8 };
typedef char BtlUiItemDescriptionOffsetsCheck[sizeof(BtlUiItemDescriptionRow) == 0xC &&
    offsetof(BtlUiItemDescriptions, animations) == 0x4 && offsetof(BtlUiItemDescriptions, rows) == 0x694 &&
    BTL_UI_ITEM_DESCRIPTIONS + sizeof(BtlUiItemDescriptions) == offsetof(BtlUiA, unk12FCC) ? 1 : -1];

/* The row drawing loop and the per-row animator both access this block in the UI's trailing storage. */
static __inline BtlUiItemDescriptions &btlUiItemDescriptions(BtlUiA *ui)
{
    return *(BtlUiItemDescriptions *)((u8 *)ui + BTL_UI_ITEM_DESCRIPTIONS);
}

extern "C" {

void btlDrawLayeredHud(BtlUiA *context, s32 x, s32 y, u32 value, f32 speed);
void uiDrawAnimatedItemDescriptionRow(BtlUiA *context, s32 rowIndex,
                                      const BtlUiItemDescriptionRow *entry, s32 placementIndex);

} /* extern "C" */

#endif
