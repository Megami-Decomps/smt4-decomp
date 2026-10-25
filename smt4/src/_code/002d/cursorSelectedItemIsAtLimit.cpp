#include "common.h"

extern "C" {

typedef struct Item {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ f32 current;
    /* 0x3C */ u8 unk3C[0xC];
    /* 0x48 */ f32 limit;
} Item;

typedef struct Grid {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ Item **items;
    /* 0x20 */ u8 unk20[8];
    /* 0x28 */ s32 width;
} Grid;

typedef struct Cursor {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ Grid *grid;
    /* 0x02C */ u8 unk02C[0x124];
    /* 0x150 */ s32 active;
    /* 0x154 */ s32 row;
} Cursor;

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ Cursor *cursor;
    /* 0x30 */ u8 unk30[0x38];
    /* 0x68 */ s32 count;
} Owner;

static Item *gridItem(Grid *grid, s32 row, s32 column)
{
    return grid->items[row * grid->width + column];
}

static __inline Item *cursorItem(Cursor *cursor, s32 column)
{
    if (cursor->active == 0)
        return NULL;
    return gridItem(cursor->grid, cursor->row, column);
}

/* Returns whether the item the owner's cursor selects has reached its limit (1 when there is none). */
u32 cursorSelectedItemIsAtLimit(Owner *owner)
{
    if (owner->count > 0) {
        Item *item = cursorItem(owner->cursor, 0);
        if (item != NULL)
            return item->current >= item->limit;
    }
    return 1;
}

} /* extern "C" */
