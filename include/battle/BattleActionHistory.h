#ifndef BATTLE_BATTLE_ACTION_HISTORY_H
#define BATTLE_BATTLE_ACTION_HISTORY_H

#include "common.h"
#include <stddef.h>

/* One recorded action of the battle state's history (BtlMainState.history). */
struct BattleActionHistoryEntry {
    /* 0x00 */ s16 combatant;
    /* 0x02 */ s16 member;
    /* 0x04 */ u16 group;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u32 identity;
    /* 0x0C */ u32 value;
    /* 0x10 */ u8 unk10[8];
};
typedef char BattleActionHistoryEntrySizeCheck[sizeof(BattleActionHistoryEntry) == 0x18 ? 1 : -1];

#endif
