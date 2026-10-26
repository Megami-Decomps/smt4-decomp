#include "common.h"
#include "code/Code0018_Smt4a.h"

extern "C" {

typedef struct Item {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 flags;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u32 handle;
} Item;

typedef struct ItemList {
    /* 0x00 */ s32 count;
    /* 0x04 */ Item **items;
} ItemList;

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ ItemList list;
} Owner;

void resOwnerRunNodeHandlers(u32 handle);

/* Releases the handle of every item in the list that has bit 1 set. */
void FUN_001882fc(Owner *owner)
{
    Item *item;
    ItemList *list;
    s32 i;

    list = &owner->list;
    i = 0;
    if (i < list->count) {
        do {
            item = list->items[i];
            if ((item->flags & 2) != 0) {
                resOwnerRunNodeHandlers(item->handle);
            }
            i = i + 1;
        } while (i < list->count);
    }
}

} /* extern "C" */
