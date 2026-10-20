#include "common.h"

extern "C" {

typedef struct ListBoxItem {
    /* 0x000 */ u8 unk000[0x208];
    /* 0x208 */ void *owner;
} ListBoxItem;

extern ListBoxItem *asdListBoxFindItem(void);

/* True when the found list box item exists and has an owner. */
s32 listBoxItemHasOwner(void)
{
    ListBoxItem *item = asdListBoxFindItem();

    if (item == NULL) {
        return 0;
    }
    return item->owner != NULL;
}

} /* extern "C" */
