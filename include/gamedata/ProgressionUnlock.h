#ifndef GAMEDATA_PROGRESSIONUNLOCK_H
#define GAMEDATA_PROGRESSIONUNLOCK_H
#include "gamedata/DataTable.h"

struct ProgressionUnlockRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 threshold;
    /* 0x04 */ u16 flags[3]; /* raised when the unlock is acknowledged */
    /* 0x0A */ u8 unk0A[2];
};
typedef char ProgressionUnlockRecordSizeCheck[sizeof(ProgressionUnlockRecord) == 0xC ? 1 : -1];

extern "C" ProgressionUnlockRecord *FUN_003de92c(u32 id);

#endif
