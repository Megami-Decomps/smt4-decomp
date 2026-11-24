/* IV's per-target battle unit state. */
#ifndef SMT4_BATTLE_BTLUNITTARGET_H
#define SMT4_BATTLE_BTLUNITTARGET_H

#include "common.h"

struct BtlMainState;
struct BtlUnit;

extern "C" {

void btlEntryValuesCopy(BtlMainState **state, BtlUnit *unit);
u32 btlUnitIsDeadAndUncopied(BtlMainState **state, BtlUnit *unit, s32 listedId);

}

#endif
