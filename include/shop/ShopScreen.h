/* The shop screen's work block (Shin Megami Tensei IV layout); only the fields the readable code touches are named. */
#ifndef SHOP_SHOPSCREEN_H
#define SHOP_SHOPSCREEN_H

#include "common.h"
#include <stddef.h>

/* The panel object the shop screen owns; slot 4 refreshes it. */
class ShopPanel {
public:
    virtual void unk00();
    virtual void unk04();
    virtual void unk08();
    virtual void unk0c();
    virtual void refresh(u32 color);
};

/* A category's list: the scroll/limit state read through the shop list helpers (0x74 bytes). */
struct ShopCategoryList {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 limit;
    /* 0x0C */ u8 unk0C[0x68];
};

/* One entry of a category's slot table. */
struct ShopSlot {
    u16 id;
    u16 value;
};

/* A category's slot table: the slots and, after them, how many are in use (0x1002 bytes). */
struct ShopSlotTable {
    /* 0x0000 */ ShopSlot slots[0x400];
    /* 0x1000 */ u16 count;
};

struct ShopScreen {
    /* 0x0000 */ u8 unk0000[4];
    /* 0x0004 */ s32 mode;
    /* 0x0008 */ s32 substep;
    /* 0x000C */ u8 unk000C[4];
    /* 0x0010 */ s32 variant;
    /* 0x0014 */ u8 unk0014[0x368];
    /* 0x037C */ u32 color;
    /* 0x0380 */ u8 header[0x4DC];
    /* 0x085C */ ShopPanel *panel;
    /* 0x0860 */ s32 category;
    /* 0x0864 */ s32 tab;
    /* 0x0868 */ u8 unk0868[0x18];
    /* 0x0880 */ ShopCategoryList lists[9];
    /* 0x0C94 */ ShopSlotTable tables[9];
};
typedef char ShopScreenOffsets[
    offsetof(ShopScreen, mode) == 4 && offsetof(ShopScreen, variant) == 0x10 &&
    offsetof(ShopScreen, header) == 0x380 && offsetof(ShopScreen, panel) == 0x85C &&
    offsetof(ShopScreen, lists) == 0x880 && offsetof(ShopScreen, tables) == 0xC94 &&
    sizeof(ShopSlotTable) == 0x1002 && sizeof(ShopCategoryList) == 0x74 ? 1 : -1];

#endif
