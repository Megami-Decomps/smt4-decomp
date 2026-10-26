#ifndef BATTLE_BATTLEBALANCEROW_H
#define BATTLE_BATTLEBALANCEROW_H

#include "common.h"
#include <stddef.h>

/* One row (0x24 bytes) of the battle balance table: nine floats that tune damage scaling, hit
 * chances, the escape rate and amount scaling. */
struct BattleBalanceRow {
    /* 0x00 */ f32 scale0;
    /* 0x04 */ f32 unk04;
    /* 0x08 */ f32 scale2;
    /* 0x0C */ f32 unk0C;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 partyMultiplier;  /* chance multiplier when the party acts */
    /* 0x18 */ f32 enemyMultiplier;  /* chance multiplier when the enemy acts */
    /* 0x1C */ f32 escapeRate;
    /* 0x20 */ f32 amountMultiplier;
};
typedef char BattleBalanceRowLayoutCheck[sizeof(BattleBalanceRow) == 0x24 &&
    offsetof(BattleBalanceRow, scale2) == 8 && offsetof(BattleBalanceRow, partyMultiplier) == 0x14 &&
    offsetof(BattleBalanceRow, escapeRate) == 0x1C && offsetof(BattleBalanceRow, amountMultiplier) == 0x20 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* The row of the battle balance table selected by the current difficulty. */
BattleBalanceRow *FUN_0023ea94(void);
#ifdef __cplusplus
}
#endif

#endif
