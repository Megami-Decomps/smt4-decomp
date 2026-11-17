#ifndef GAMEDATA_PLAYERINITIALIZATION_H
#define GAMEDATA_PLAYERINITIALIZATION_H
#include "common.h"
#include "gamedata/GameSaveData.h"
#include <stddef.h>

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
