#ifndef BATTLE_BATTLEMESSAGEMASKS_H
#define BATTLE_BATTLEMESSAGEMASKS_H
#include "common.h"
#include <stddef.h>

struct BattleMessageFlagMasks {
    u8 prefix[8];
    /* 0x08 */ u64 required;
    u8 padding10[8];
    /* 0x18 */ u64 secondRequired;
    u8 padding20[8];
    /* 0x28 */ u64 excluded;
};
typedef char BattleMessageFlagMasksOffsetsCheck[
    offsetof(BattleMessageFlagMasks, required) == 8 && offsetof(BattleMessageFlagMasks, secondRequired) == 0x18 &&
    offsetof(BattleMessageFlagMasks, excluded) == 0x28 && sizeof(BattleMessageFlagMasks) == 0x30 ? 1 : -1];
#endif
