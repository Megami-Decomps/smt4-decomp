#ifndef SMT4_BATTLE_ACTION_POSITION_H
#define SMT4_BATTLE_ACTION_POSITION_H

#include "shard/W5_W5Match4_BattleVectorTransition.h"

struct BtlMainState;
extern "C" {
BattleVector3 FUN_0023cd08(BtlMainState *state, s32 index, s32 forceEnemy);
u32 FUN_003ae418(u32 request, u32 *ownerFlags, f32 x, f32 y, f32 z);
}

#endif
