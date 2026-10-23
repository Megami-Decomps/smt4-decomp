#ifndef GAMEDATA_PLAYERINITIALIZATION_H
#define GAMEDATA_PLAYERINITIALIZATION_H
#include "common.h"
#include <stddef.h>

struct PlayerInitialRecordIV {
    /* 0x00 */ u16 equipment[7];
    union {
        /* 0x0E */ u8 unk0E[0xE];
        struct {
            /* 0x0E */ u16 baseHp;
            /* 0x10 */ u16 baseMp;
            /* 0x12 */ s16 stats[5];
        } baseStats;
    };
    /* 0x1C */ u16 maximumHp;
    /* 0x1E */ u16 maximumMp;
    union {
        /* 0x20 */ u8 unk20[0xA];
        /* 0x20 */ u16 stats[5];
    };
    /* 0x2A */ u16 hp;
    /* 0x2C */ u16 mp;
    /* 0x2E */ u8 unk2E[0x1E];
    /* 0x4C */ char name[0x12];
    union {
        /* 0x5E */ u8 unk5E[0x16];
        struct {
            /* 0x5E */ u8 unk5E[0x14];
            /* 0x72 */ u16 points;
        } advancement;
    };
    /* 0x74 */ u16 counter;
    /* 0x76 */ u8 enabled;
    /* 0x77 */ u8 unk77[0x15];
};
typedef char PlayerInitialRecordIVLayoutCheck[
    offsetof(PlayerInitialRecordIV, maximumHp) == 0x1C &&
    offsetof(PlayerInitialRecordIV, hp) == 0x2A &&
    offsetof(PlayerInitialRecordIV, name) == 0x4C &&
    offsetof(PlayerInitialRecordIV, counter) == 0x74 &&
    offsetof(PlayerInitialRecordIV, enabled) == 0x76 && sizeof(PlayerInitialRecordIV) == 0x8C ? 1 : -1];
typedef char PlayerInitialStatsOffsetCheck[
    offsetof(PlayerInitialRecordIV, baseStats.baseHp) == 0xE &&
    offsetof(PlayerInitialRecordIV, baseStats.stats) == 0x12 &&
    offsetof(PlayerInitialRecordIV, advancement.points) == 0x72 ? 1 : -1];
typedef char PlayerCurrentStatsOffsetCheck[
    offsetof(PlayerInitialRecordIV, stats) == 0x20 &&
    sizeof(PlayerInitialRecordIV) == 0x8C ? 1 : -1];

struct PlayerInitialGrowthIV {
    /* 0x00 */ s8 stats[5];
    /* 0x05 */ u8 unk05[4];
    /* 0x09 */ u8 kind;
    /* 0x0A */ u8 baseHp;
    /* 0x0B */ u8 baseMp;
    /* 0x0C */ u8 hpGrowth;
    /* 0x0D */ u8 mpGrowth;
};
typedef char PlayerInitialGrowthOffsetsCheck[
    offsetof(PlayerInitialGrowthIV, baseHp) == 0xA &&
    offsetof(PlayerInitialGrowthIV, hpGrowth) == 0xC &&
    sizeof(PlayerInitialGrowthIV) == 0xE ? 1 : -1];
#endif
