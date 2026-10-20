#include "common.h"

extern "C" {

typedef struct ListBoxItem {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u8 mode;
    /* 0x005 */ u8 unk005;
    /* 0x006 */ u8 unk006[0x202];
    /* 0x208 */ u32 unk208;
    /* 0x20C */ u8 unk20C[4];
    /* 0x210 */ u32 unk210;
    /* 0x214 */ u32 unk214;
} ListBoxItem;

extern ListBoxItem *asdListBoxFindItem(void *listBox, u32 id);

/* Address of the item's field at +0x208, or 0 when the item isn't found. */
u32 *FUN_0022a464(void *listBox, u32 id)
{
    ListBoxItem *item = asdListBoxFindItem(listBox, id);

    if (item != NULL) {
        return &item->unk208;
    }
    return NULL;
}

} /* extern "C" */
