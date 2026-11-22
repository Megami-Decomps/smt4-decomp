/* The slot neighbour table of the shop's equipment pages (both games). */
#ifndef SHOP_SHOPSLOTNEIGHBORS_H
#define SHOP_SHOPSLOTNEIGHBORS_H

#include "common.h"

/* Slot 7, the item page, has no neighbours and no preview model. */
enum { SHOP_SLOT_ITEMS = 7 };

/* The slots the right and left buttons lead to from one slot. */
struct ShopSlotStep {
    /* 0x00 */ s32 next;
    /* 0x04 */ s32 previous;
};

/* For each equipment slot, the slot the right and left buttons lead to (Apocalypse: g_shopTabNeighbors, 0x588f28; IV: 0x44dfd0);
 * slots 0 and 3 have other neighbours while the scene is restricted. */
struct ShopSlotNeighbors {
    /* 0x00 */ ShopSlotStep slot[8];
    /* 0x40 */ s32 restricted0Next;
    /* 0x44 */ s32 restricted0Previous;
    /* 0x48 */ s32 restricted3Next;
    /* 0x4C */ s32 restricted3Previous;
};
typedef char ShopSlotNeighborsSizeCheck[sizeof(ShopSlotNeighbors) == 0x50 ? 1 : -1];

#endif
