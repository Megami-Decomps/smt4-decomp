#ifndef GAMEDATA_PROGRESSIONUNLOCK_H
#define GAMEDATA_PROGRESSIONUNLOCK_H
#include "gamedata/DataTable.h"

struct ProgressionUnlockRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 threshold;
    /* 0x04 */ u8 unk04[8];
};
typedef char ProgressionUnlockRecordSizeCheck[sizeof(ProgressionUnlockRecord) == 0xC ? 1 : -1];

#endif
