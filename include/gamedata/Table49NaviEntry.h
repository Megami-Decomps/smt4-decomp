#ifndef GAMEDATA_TABLE49NAVIENTRY_H
#define GAMEDATA_TABLE49NAVIENTRY_H

#include "common.h"
#include <stddef.h>

/* Navigation guidance record of data table 0x49 (section 0), 0x4c bytes. */
struct Table49NaviEntry {
    /* 0x00 */ s16 id; // 0 = unused slot
    /* 0x02 */ s16 requiredFlag; // 0 = always
    /* 0x04 */ s16 excludedFlag; // 0 = none
    /* 0x06 */ u8 unk06[0x28];
    /* 0x2e */ s16 mapId;
    /* 0x30 */ s16 areaId;
    /* 0x32 */ s16 x;
    /* 0x34 */ s16 y;
    /* 0x36 */ s16 z;
    /* 0x38 */ u8 unk38[0xc];
    /* 0x44 */ u8 naviFlags[6];
    /* 0x4a */ u8 extraFlags[2];
};
typedef char Table49NaviEntryLayoutCheck[sizeof(Table49NaviEntry) == 0x4c &&
    offsetof(Table49NaviEntry, mapId) == 0x2e && offsetof(Table49NaviEntry, z) == 0x36 &&
    offsetof(Table49NaviEntry, naviFlags) == 0x44 ? 1 : -1];

#endif
