#ifndef GAMEDATA_SUPPORTUNITRECORD_H
#define GAMEDATA_SUPPORTUNITRECORD_H

#include "common.h"

struct SupportUnitRecord {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 flags;
    /* 0x0C */ u8 unk0C[0x50];
};

typedef char SupportUnitRecordSizeCheck[sizeof(SupportUnitRecord) == 0x5C ? 1 : -1];

#endif
