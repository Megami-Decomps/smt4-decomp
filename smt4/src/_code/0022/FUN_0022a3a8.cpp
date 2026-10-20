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

int asdListBoxMarkDirty(void *listBox);

void FUN_0022a3a8(void *listBox, u32 id, u32 a, u32 b, u32 c, u8 d)
{
    ListBoxItem *item = asdListBoxFindItem(listBox, id);

    if (item != NULL) {
        item->unk208 = a;
        item->mode = 3;
        item->unk210 = b;
        item->unk214 = c;
        item->unk005 = d;
        asdListBoxMarkDirty(listBox);
    }
}

} /* extern "C" */
