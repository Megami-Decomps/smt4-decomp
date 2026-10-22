#ifndef GAMEDATA_APPPURCHASERECORD_H
#define GAMEDATA_APPPURCHASERECORD_H

#include "common.h"

struct AppPurchaseSortRecord {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u16 tieBreakKey;
    /* 0x26 */ u16 primaryKey;
};

#endif
