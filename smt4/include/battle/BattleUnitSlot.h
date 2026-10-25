#ifndef SMT4_BATTLE_BATTLEUNITSLOT_H
#define SMT4_BATTLE_BATTLEUNITSLOT_H

#include "common.h"

struct BtlMainState;
struct BattleActionUnit;

extern "C" BattleActionUnit *btlUnitGet(BtlMainState *const *reference);

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_002080e8(void);

#ifdef __cplusplus
}
#endif

#endif
