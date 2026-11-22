/* Apocalypse: the bookkeeping calls a battle unit's hit steps make (battle/btlAction, btlDebug, btlReflect). */
#ifndef SMT4A_BATTLE_BTLUNITACTIONS_H
#define SMT4A_BATTLE_BTLUNITACTIONS_H

#include "common.h"
#include "battle/btlMain.h"
#include "battle/BtlUnitWork.h"
#include "battle/btlReflect.h"
#include "battle/BattleInteractionSelections.h"

struct BattleRosterRecordA;

extern "C" {

/* The survival tier the target's skills give it against the current action (0 = none). */
u32 btlSelectActionTier(u32 unitId);
void battleRecordUnitMaskHistoryEvents(u32 unitId);
ReflectAction *btlReflectCreateKind19(s32 id, u32 options, u32 first, u32 second);

/* Adds `change` to the HP the unit (`values`) tracks for target `index`; whether that would take it below 0. */
u8 FUN_004e5f2c(BtlMainStateA **owner, void *values, s32 index, s32 change);
/* Whether the unit's tracked HP of the target (or of the combatant it redirects to) is 0 while the combatant is
 * still targetable. */
u32 btlActionTargetSlotScore(BtlMainGlobalsA *owner, BtlUnitA *unit, s32 listedId);
void battleApplyInteractionSelection(BtlMainGlobalsA *owner, BattleInteractionSelections *selections, s32 unit,
                                     u32 unused, s32 alternate);

} /* extern "C" */

#endif
