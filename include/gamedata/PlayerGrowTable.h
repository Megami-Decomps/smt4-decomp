/* The hero's growth: data table 9, battle/PlayerGrow.tbb, in both games (the table ids follow the
 * game's data-file list, NKMBaseTable.tbb = 0). Section 0 is the hero's single growth record
 * (PlayerGrowRecord), section 1 the experience needed per level (u32), section 2 the experience
 * percentages for levels above a demon's base level (u16, gamedata/LevelTable.h), section 3 a
 * clamped u16 curve (dataTable09Sub3GetRecord); Apocalypse's section 4 holds the level ranges
 * (LevelEntry, shard/W6_W6Match8_StatGrowth.h). The record's accessor, playerGrowthDefaults, is in
 * gamedata/PlayerGrowthDefaults.h (this header is included by shared headers and stays free of the
 * data-table declarations). */
#ifndef GAMEDATA_PLAYERGROWTABLE_H
#define GAMEDATA_PLAYERGROWTABLE_H

#include "common.h"
#include <stddef.h>

/* The hero's growth record: the one 0x0E-byte row of PlayerGrow.tbb table 0 (data table 9,
 * section 0). */
struct PlayerGrowRecord {
    /* 0x00 */ s8 initialStats[5];        /* starting strength, dexterity, magic, agility, luck */
    /* 0x05 */ u8 growth[5];              /* growth weights of the five stats */
    /* 0x0A */ u8 baseHp;
    /* 0x0B */ u8 baseMp;
    /* 0x0C */ u8 hpGrowth;
    /* 0x0D */ u8 mpGrowth;
};

typedef char PlayerGrowRecordLayoutCheck[
    sizeof(PlayerGrowRecord) == 0x0E &&
    offsetof(PlayerGrowRecord, growth) == 0x05 &&
    offsetof(PlayerGrowRecord, baseHp) == 0x0A &&
    offsetof(PlayerGrowRecord, hpGrowth) == 0x0C ? 1 : -1];

#endif
