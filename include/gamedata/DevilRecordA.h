#ifndef GAMEDATA_DEVILRECORDA_H
#define GAMEDATA_DEVILRECORDA_H

#include "shard/W6_W6Match8_DevilRecordA.h"
#include <stddef.h>

struct DevilTableRecordA {
    /* 0x00 */ DevilRecordA header;
    /* 0x40 */ u8 unk40[0x5C];
    /* 0x9C */ u16 unk9C;
    /* 0x9E */ u8 unk9E[0x16];
};

typedef char DevilTableRecordASizeCheck[sizeof(DevilTableRecordA) == 0xB4 ? 1 : -1];
typedef char DevilTableRecordAFieldOffsetCheck[
    offsetof(DevilTableRecordA, unk9C) == 0x9C ? 1 : -1];

#endif
