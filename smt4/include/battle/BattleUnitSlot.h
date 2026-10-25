#ifndef SMT4_BATTLE_BATTLEUNITSLOT_H
#define SMT4_BATTLE_BATTLEUNITSLOT_H

#include "common.h"

struct BtlState;
struct BattleActionUnit;

extern "C" BattleActionUnit *btlUnitGet(BtlState *const *reference);

#endif
