#ifndef GAMEDATA_DEVILRECORD_H
#define GAMEDATA_DEVILRECORD_H

#include "shard/W6_W6Match5_DevilSort.h"
#include <stddef.h>

struct DevilChanceData {
    /* 0x00, bits 0-6 */ u32 unk00 : 7;
    /* 0x00, bits 7-13 */ u32 baseChance : 7;
    /* 0x01, bits 14-31 */ u32 unk01 : 18;
};

// Table 00's full retail record, with the common ID/race/level prefix.
struct DevilRecord {
    /* 0x00 */ DevilSortRecord header;
    /* 0x04 */ u8 unk04[0x28];
    /* 0x2C */ DevilChanceData chance;
    /* 0x30 */ u8 unk30[0x60];
    /* 0x90 */ u16 model;
    /* 0x92 */ u8 unk92[2];
};

typedef char DevilRecordSizeCheck[sizeof(DevilRecord) == 0x94 ? 1 : -1];
typedef char DevilRecordChanceLayoutCheck[sizeof(DevilChanceData) == 4 &&
    offsetof(DevilRecord, chance) == 0x2C && offsetof(DevilRecord, model) == 0x90 ? 1 : -1];

#endif
