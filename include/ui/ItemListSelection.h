#ifndef UI_ITEMLISTSELECTION_H
#define UI_ITEMLISTSELECTION_H
#include "common.h"
#include <stddef.h>

/* Recovered prefixes used by the item-list selection updater. */
struct ItemListSelectionEntry {
    u16 value;
};
struct ItemListSelectionOwner {
    u8 unk000[0x864];
    ItemListSelectionEntry selection;
};
typedef char ItemListSelectionOwnerOffsetCheck[
    offsetof(ItemListSelectionOwner, selection) == 0x864 &&
    sizeof(ItemListSelectionEntry) == 2 ? 1 : -1];
#endif
