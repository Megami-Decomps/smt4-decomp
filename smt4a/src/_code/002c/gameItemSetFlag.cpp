#include "common.h"

extern "C" {

/* 0x50-byte item record; bit 1 of the halfword at 0x36 is the flag being set. */
typedef struct {
    u8 unk00[0x36];
    u16 flags;          /* 0x36 */
    u8 unk38[0x18];
} Item;

typedef struct {
    u8 unk00[0x5f0c];
    Item items[0x501];  /* 0x5f0c */
} GameData;

typedef struct {
    u8 unk00[4];
    GameData *data;     /* 0x04 */
} GameGlobals;

extern GameGlobals g_gameDataBlocks;

/* Stores `value` into flag bit 1 of item `index`; returns whether the index was valid. */
u8 gameItemSetFlag(u32 index, s16 value)
{
    if (index <= 0x500) {
        GameData *data = g_gameDataBlocks.data;
        Item *item = &data->items[index];

        item->flags = (item->flags & ~2) | (value << 1);
    }
    return index <= 0x500;
}

} /* extern "C" */
