#include "common.h"

extern "C" {

/* 0x34-byte item record; bit 1 of the halfword at 0x2e is the flag being set. */
typedef struct {
    u8 unk00[0x2e];
    u16 flags;          /* 0x2e */
    u8 unk30[4];
} Item;

typedef struct {
    u8 unk00[0xc1f8];
    Item items[0x501];  /* 0xc1f8 */
} GameData;

typedef struct {
    u8 unk00[4];
    GameData *data;     /* 0x04 */
} GameGlobals;

extern GameGlobals g_gameDataBlocks;

/* Stores `value` into flag bit 1 of item `index`; returns whether the index was valid. */
u8 FUN_0020341c(u32 index, s16 value)
{
    if (index <= 0x500) {
        GameData *data = g_gameDataBlocks.data;
        Item *item = &data->items[index];

        item->flags = (item->flags & ~2) | (value << 1);
    }
    return index <= 0x500;
}

} /* extern "C" */
