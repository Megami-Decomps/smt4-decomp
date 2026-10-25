#ifndef SMT4A_BATTLE_BATTLEUNITSLOT_H
#define SMT4A_BATTLE_BATTLEUNITSLOT_H

#include "battle/BattleUnit.h"

/* Slot-relative view: the returned work begins after the slot's header.
 * Keep the larger shared BattleUnit view unchanged for its existing users. */
struct BattleUnitSlotView {
    u32 flags;
    u8 unit[0x1250];
};
typedef char BattleUnitSlotViewLayoutCheck[
    sizeof(BattleUnitSlotView) == 0x1254 && offsetof(BattleUnitSlotView, unit) == 4 ? 1 : -1];

#endif
