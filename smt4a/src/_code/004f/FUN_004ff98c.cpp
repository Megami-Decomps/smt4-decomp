#include "common.h"

extern "C" {

typedef struct Item {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u32 valid;
    /* 0x10 */ u8 unk10[0x20];
} Item; /* 0x30 */

typedef struct ItemList {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 current;
    /* 0x20 */ u8 unk20[4];
    /* 0x24 */ Item items[1];
} ItemList;

/* The id of the current item, or 0xFFFF when the item is not valid. */
u32 FUN_004ff98c(ItemList *list)
{
    Item *item = &list->items[list->current];

    if (item->valid == 0) {
        return 0xFFFF;
    }
    return item->id;
}

} /* extern "C" */
