#include "common.h"

extern "C" {

int nodeTreeReleaseItem(void *item);

typedef struct Item {
    /* 0x000 */ u8 unk000[0x384];
    /* 0x384 */ u32 *unk384;
} Item;

void nodeTreeReleaseItemClearOwner(Item *item)
{
    if (item == NULL) {
        return;
    }
    if (item->unk384 != NULL) {
        *item->unk384 = 0;
    }
    nodeTreeReleaseItem(item);
}

} /* extern "C" */
