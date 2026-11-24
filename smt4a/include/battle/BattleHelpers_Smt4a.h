#pragma once
#include "common.h"

/* BattleHelpers (declarations migrated from callers). */
struct BtlMainStateA;
struct BtlCombatantEntryA;
struct BtlTalkA;
struct BtlStageWork;
extern "C" {

s32 btlGetPropertyMaximum(u32 property);

/* Tests the combatant's current action(s) for the given skill or action category. */
u32 btlCombatantHasSkillAction(const BtlCombatantEntryA *entry, s32 skill);
u32 btlCombatantMatchesCategory(BtlCombatantEntryA *entry, u32 category);

void btlQueueDuplicateSuppressedAction(s32 id, s32 target, u32 value);

void btlActionMarkRandomStatusTarget(BtlMainStateA **context, u32 status);

void *btlTalkGetTableSection0(BtlTalkA *talk);

void btlStageResetAndClearCameraFlag(BtlStageWork *work);

void btlUIClearWorkTables(void);

} /* extern "C" */
