#ifndef BATTLE_BATTLE_ACTION_HISTORY_H
#define BATTLE_BATTLE_ACTION_HISTORY_H

#include "common.h"
#include <stddef.h>

struct BattleActionHistoryEntry {
    /* 0x00 */ s16 combatant;
    /* 0x02 */ s16 member;
    /* 0x04 */ u16 group;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u32 identity;
    /* 0x0C */ u32 value;
    /* 0x10 */ u8 unk10[8];
};
struct BattleActionHistoryCombatant {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ s16 members[50];
    /* 0x06C */ u8 unk06C[2];
    /* 0x06E */ s16 index;
    /* 0x070 */ u8 unk070[0x5E];
    /* 0x0CE */ u16 group;
    /* 0x0D0 */ u8 unk0D0[8];
    /* 0x0D8 */ u32 identity;
    /* 0x0DC */ u8 unk0DC[0x1AC];
};
struct BattleActionHistoryState {
    /* 0x0000 */ u8 unk0000[0x1E98];
    /* 0x1E98 */ struct BtlActionRecord *actions;
    union {
        /* 0x1E9C */ u8 unk1E9C[0x120];
        /* 0x1E9C */ u8 groupCount;
    };
    /* 0x1FBC */ BattleActionHistoryEntry *history;
    /* 0x1FC0 */ BattleActionHistoryCombatant *combatants;
};
typedef char BattleActionHistoryLayoutCheck[
    sizeof(BattleActionHistoryEntry) == 0x18 &&
    sizeof(BattleActionHistoryCombatant) == 0x288 &&
    offsetof(BattleActionHistoryCombatant, index) == 0x6E &&
    offsetof(BattleActionHistoryCombatant, group) == 0xCE &&
    offsetof(BattleActionHistoryCombatant, identity) == 0xD8 &&
    offsetof(BattleActionHistoryState, history) == 0x1FBC &&
    offsetof(BattleActionHistoryState, combatants) == 0x1FC0 ? 1 : -1];
typedef char BattleActionHistoryGroupCountOffsetCheck[
    offsetof(BattleActionHistoryState, groupCount) == 0x1E9C &&
    sizeof(BattleActionHistoryState) == 0x1FC4 ? 1 : -1];

#endif
