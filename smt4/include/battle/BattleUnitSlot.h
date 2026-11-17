#ifndef SMT4_BATTLE_BATTLEUNITSLOT_H
#define SMT4_BATTLE_BATTLEUNITSLOT_H

#include "common.h"
#include "battle/BtlUnitWork.h"

struct BtlMainState;

/* The battle unit the script context `*reference` selects, NULL when it selects none. */
extern "C" BtlUnit *btlUnitGet(BtlMainState *const *reference);

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_002080e8(void);

#ifdef __cplusplus
}
#endif

#endif
