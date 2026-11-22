/* The shop category menu's texts: data table 0x17/0 in both games. */
#ifndef SHOP_SHOPMENUTEXT_H
#define SHOP_SHOPMENUTEXT_H

#include "common.h"

/* A row of data table 0x17/0 (0x80 bytes). The top menu's four rows come first, then the page menus'
 * categories. */
struct ShopMenuTextRecord {
    /* 0x00 */ s8 name[0x40];   /* the menu row (shopSelectEntryStart, Apocalypse's shopSelectEntryStart) */
    /* 0x40 */ s8 help[0x40];   /* the button help shown while the row is selected */
};

typedef char ShopMenuTextRecordSizeCheck[sizeof(ShopMenuTextRecord) == 0x80 ? 1 : -1];

#endif
