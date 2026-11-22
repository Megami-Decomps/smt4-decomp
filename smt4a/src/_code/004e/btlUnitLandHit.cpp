#include "common.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlUnitActions.h"
#include "battle/btlDebug.h"
#include "battle/BattleHelpers_VariantB.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "shard/W6_W6Match3_BattleTiming.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {

/* The action queue calls, typed as their definitions take them (the unit and its roster record travel as words).
 * Queues an HP change of `record`'s combatant (`damage`, or the script's `adjustment`; -1: none) with its display
 * options. `extraDelay` (-1: none) queues an extra action that many frames in, carrying `extraValue`;
 * `followDelay` (-1: none) delays the follow-up. */
void btlAdjustPropertyAndQueueAction(s32 frame, u32 unit, s32 arg2, s32 record, s32 arg4, s32 damage, s32 adjustment,
                                     u32 arg7, u32 hp, u32 maxHp, s32 arg10, u32 arg11, s32 defeated, s32 arg13,
                                     s32 arg14, s32 arg15, s32 duration, s32 arg17, s32 extraDelay, s32 followDelay,
                                     s32 extraValue, s16 arg21, s32 arg22, s32 arg23, s32 arg24, s32 arg25);
/* Queues a recovery of `record`'s combatant by a percentage of its maximum (the same three options). */
void btlRecoverHpMpByPercent(s32 frame, u32 unit, s32 arg2, s32 record, u32 arg4, s32 percent, s32 arg6, u32 arg7,
                             u32 arg8, s32 extraDelay, s32 followDelay, s32 extraValue, u32 arg12, u32 arg13,
                             s32 arg14);
void btlQueueActionMessage(s32 actor, u32 options, void *payload, s32 initializeValue, s32 suppressDuplicate,
                           u32 parameterBits, s32 firstId);

/* The HP the unit's current target is left with. */
static __inline s32 unitTargetHp(BtlUnitA *unit)
{
    return unit->targetStates[unit->record->combatant.parameterIndex].hp;
}

/* Lands a hit of `damage` HP on the unit's current target: queues the HP change and its message, lets a
 * survival skill of the target answer a blow that would defeat it, and extends the target's animation window.
 * Returns whether the target was defeated. */
u8 btlUnitLandHit(BtlMainGlobalsA *owner, BtlUnitA *unit, s32 damage)
{
    s32 frame = 10;
    s32 recoveryPercent = -1;
    s32 extraDelay = -1;  /* the queued change's extra action and its value: only for a unit without the */
    s32 extraValue = -1;  /* interaction flags */
    u8 defeated = 0;
    s32 followDelay = -1; /* its follow-up: only while the script unit lacks its flags */

    if ((unit->entry->flags & g_btlAction.interaction.requiredMask) == 0) {
        extraDelay = 0;
        extraValue = 11;
    }
    if (btlScriptUnitHasFlags(owner->state) == 0) {
        followDelay = 0;
    }
    if (gameFlagIsSet(0x591) && (unit->entry->flags & g_btlAction.interaction.requiredMask) == 0 && damage > 0) {
        btlAdjustPropertyAndQueueAction(10, (u32)unit, 0, (s32)unit->record, 0, damage, -1, -1, unitTargetHp(unit),
                                        unit->data->maxHp, 0, 0, 0, 0, 1, 0, 30, 0, extraDelay, followDelay,
                                        extraValue, -1, 1, 0, 1, 1);
        btlQueueActionMessage(10, (u32)unit, (void *)0x1000223, 0, 0, 0, 0);
        if (gameFlagIsSet(0x591) && (unit->flags & 0x20000) != 0) {
            FUN_004fbeac(30, (u32)unit, 0, 0x45, 1);
            unit->flags |= 0x20000;
        }
        return 0;
    }
    unit->entry->targetDelay = 0;
    s32 tier = btlSelectActionTier(unit->record->combatant.parameterIndex);
    if (tier > 0 && damage > 0 && damage >= unitTargetHp(unit)) {
        if (tier == 2) {
            if ((unit->entry->data.statusFlags & 8) == 0) {
                recoveryPercent = unit->targetStates[unit->record->combatant.parameterIndex].recoveryPercent;
            } else {
                recoveryPercent = 1;
            }
        } else if (tier == 1 || tier == 3) {
            recoveryPercent = 1;
        }
        btlReflectCreateKind19(30, (u32)unit, unit->entry->selectionIndex, tier);
        battleRecordUnitMaskHistoryEvents(unit->record->combatant.parameterIndex);
    }
    FUN_004e5f2c(&owner->state, unit, unit->record->combatant.parameterIndex, -damage);
    if (btlActionTargetSlotScore(owner, unit, unit->record->combatant.parameterIndex) != 0) {
        defeated = 1;
    }
    if (recoveryPercent > 0) {
        defeated = 0;
    } else if (defeated && (unit->entry->flags & g_btlAction.interaction.requiredMask) != 0) {
        BtlMainStateA *state = owner->state;
        if (state->commandFilter.unk00E4 == 1) {
            state->commandFilter.mode = 13;
        }
    }
    btlAdjustPropertyAndQueueAction(frame, (u32)unit, 0, (s32)unit->record, 0, damage, -1, -1, unitTargetHp(unit),
                                    unit->data->maxHp, 0, 0, defeated, 0, 1, 0, 30, 0, extraDelay, followDelay,
                                    extraValue, -1, 1, 0, 1, 1);
    btlQueueActionMessage(frame, (u32)unit, (void *)0x1000223, 0, 0, 0, 0);
    if (recoveryPercent >= 0) {
        btlRecoverHpMpByPercent(30, (u32)unit, 0, (s32)unit->record, 0, recoveryPercent, -1, -1, 0, extraDelay, followDelay,
                                extraValue, 0, 1, 1);
        btlQueueActionMessage(30, (u32)unit, (void *)0x1000267, 0, 1, 0, 0);
    }
    if (defeated) {
        BattleRosterRecordA *record = unit->record;
        if ((record->liveFlags.unk50 & 0x400) != 0) {
            btlCommandExtendAnimationWindow((BtlActorRef *)owner, (BtlCommand *)unit,
                                            record->combatant.parameterIndex, frame, 60, 60);
            battleApplyInteractionSelection(owner, (BattleInteractionSelections *)unit, unit->record->combatant.parameterIndex, 70, 0);
        } else {
            btlCommandExtendAnimationWindow((BtlActorRef *)owner, (BtlCommand *)unit,
                                            record->combatant.parameterIndex, frame, 30, 30);
            battleApplyInteractionSelection(owner, (BattleInteractionSelections *)unit, unit->record->combatant.parameterIndex, 40, 0);
        }
    } else {
        btlCommandExtendAnimationWindow((BtlActorRef *)owner, (BtlCommand *)unit,
                                        unit->record->combatant.parameterIndex, frame, 30, 30);
    }
    return defeated;
}

} /* extern "C" */
