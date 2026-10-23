#ifndef GAMEDATA_MAPUNLOCKRECORD_H
#define GAMEDATA_MAPUNLOCKRECORD_H
#include "common.h"
#include <stddef.h>
struct MapUnlockRecord {
    u8 prefix[0x20];
    s16 map;
    s16 flag;
};
typedef char MapUnlockRecordLayoutCheck[offsetof(MapUnlockRecord, map) == 0x20 && sizeof(MapUnlockRecord) == 0x24 ? 1 : -1];
#endif
