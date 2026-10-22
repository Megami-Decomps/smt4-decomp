/* Adds `delta` to the s16 counter of item `index` (0-0x500) in the global item table; out-of-range indices are ignored. */
#include "common.h"

extern "C" {

typedef struct Item {
    /* 0x00 */ u8 unk00[0x4E];
    /* 0x4E */ s16 counter;
    /* 0x50 */
} Item; /* 0x50 */

typedef struct ItemTable {
    /* 0x0000 */ u8 unk0000[0x5F0C];
    /* 0x5F0C */ Item items[1];
} ItemTable;

typedef struct ItemTableHolder {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ItemTable *table;
} ItemTableHolder;

extern ItemTableHolder g_gameDataBlocks;

void FUN_0031654c(u32 index, s16 delta)
{
    if (index <= 0x500) {
        ItemTable *table = g_gameDataBlocks.table;
        Item *item = &table->items[index];

        item->counter = item->counter + delta;
    }
}

}
