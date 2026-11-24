#ifndef SMT4_BATTLE_BTLGAMEOVERTRANSITION_H
#define SMT4_BATTLE_BTLGAMEOVERTRANSITION_H

#include "battle/btlGameOver.h"

extern "C" {
/* Steps the game-over state machine and its three later phases. */
s32 btlTransitionStep(BtlGameOver *work);
s32 FUN_003357c0(BtlGameOver *work);
s32 FUN_0023f194(BtlGameOver *work);
u32 FUN_0023f074(BtlGameOver *work);
s32 FUN_0023ed64(BtlGameOver *work);
} /* extern "C" */

#endif
