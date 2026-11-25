/* NON_MATCHING: 80 raw / 36 shape lines. What remains: retail keeps its own copy of the no-target command store
 * after the empty-selection test (the build shares the other arm's `strb`), reads `selected` there and in the
 * scan loop as two words (`ldr [sp, #4]; ldr [sp]` and `ldm sp, {r1, r2}`; the build: `ldrd`), and predicates
 * the scan loop's `continue` for a usable item (`movne r4, #1; bne`; the build: `beq; mov; b`). */
#include "battle/BtlGlobals.h"
#include "battle/BtlUiGlobal.h"
#include "battle/BattleEntrySummary.h"
#include "mapnavi/naviMain.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/ConsumableRecordA.h"

enum {
    UNIT_COMMAND_RETRY = 1,      /* BtlUnitA::command: ask for the command again */
    UNIT_COMMAND_NO_TARGET = 29, /* an action of kind 10 without a target */
    ACTION_KIND_ITEM = 8,
    SKILL_CATEGORY_REVIVAL = 7
};

extern "C" {

s32 btlFindSelectionIndexByLookupKey(const BtlMainStateA *state, s32 key);
void btlEntryBuildSummary(BattleEntrySummaryA *summary, BtlMainStateA *battle, BtlCombatantEntryA *entry);
void btlUIClearWorkTables(BtlUiA *ui); // declcheck: local (callers pass the UI block; the definition ignores it)
void FUN_004e980c(BtlMainStateA **context, BtlUnitA *unit);
void FUN_004eb838(BtlMainStateA **context, BtlUnitA *unit);

/* Requests the next command of the unit that is acting. */
static __inline void setScriptState(BtlMainStateA **context, s32 command)
{
    BtlActionSlotA &slot = g_btlAction.slots[(*context)->unitRecord.currentSlot];
    slot.unit.command = command;
}

/* Waits for the target panel and turns its answer into the unit's target flags. Returns 1 when the
 * unit's next command was requested, 0 while the panel is still open. */
u32 btlUnitTargetPanelStep(BtlMainStateA **context, BtlUnitA *unit)
{
    u64 state = (*context)->stateFlags64.bits;
    if (g_btlAction.cameraExcludedMask & state) {
        if ((unit->flags & 0x80) == 0) {
            unit->flags |= 0x880;
            setScriptState(context, UNIT_COMMAND_RETRY);
            return 1;
        }
    } else if ((g_btlAction.cameraExcludedMaskB & state) && (unit->flags & 0x1000) == 0) {
        unit->flags |= 0x1800;
        setScriptState(context, UNIT_COMMAND_RETRY);
        return 1;
    }
    if (!FUN_004aba9c(g_btlUiBlock)) {
        return 0;
    }

    /* The panel's answer, in the order it is reported (retail's frame: the flag at sp+28, the masks at sp
     * and sp+8). */
    u8 confirmed = 0;
    u64 selected = 0;
    u64 extra = 0;
    btlUiCopyStatePairs(g_btlUiBlock, &confirmed, &selected, &extra);

    bool revives = false;     /* the action is a revival skill */
    bool fromReserve = false; /* which revives a unit of the reserve */
    if (!confirmed) {
        if (unit->data->actionKind != 10) {
            unit->flags |= 0x800;
            setScriptState(context, UNIT_COMMAND_RETRY);
        } else {
            setScriptState(context, UNIT_COMMAND_NO_TARGET);
        }
        return 1;
    }

    /* Actions of kind 9, 10 and 13 take the reported targets as they are. */
    bool direct = false;
    if (unit->data->actionKind == 9) {
        direct = true;
    } else if (unit->data->actionKind == 10) {
        if (selected == 0) {
            setScriptState(context, UNIT_COMMAND_NO_TARGET);
            return 1;
        }
        direct = true;
    } else if (unit->data->actionKind == 13) {
        direct = true;
    }
    if (direct) {
        for (s32 i = 0; i < 64; i++) {
            if (selected & (1 << i)) {
                unit->targets[i] = 1;
            }
        }
        (*context)->commandEntry.extraTargets = extra;
    } else {
        if (unit->data->actionKind == 2 || unit->data->actionKind == 3) {
            SkillDataRecordA *skill = skillDataFindById(unit->data->actionArg);
            if (skill != NULL) {
                if (skill->sort.category == SKILL_CATEGORY_REVIVAL) {
                    revives = true;
                }
                if (skill->usability.flags & 4) {
                    fromReserve = true;
                }
            }
        } else if (unit->data->actionKind == ACTION_KIND_ITEM) {
            ConsumableRecordA *item = itemTableGetItemRecord(unit->data->actionArg);
            if (item->skillId != 0) {
                SkillDataRecordA *skill = skillDataFindById(item->skillId);
                if (skill != NULL) {
                    if (skill->sort.category == SKILL_CATEGORY_REVIVAL) {
                        revives = true;
                    }
                    if (skill->usability.flags & 4) {
                        fromReserve = true;
                    }
                }
            }
        }
        if (revives) {
            if (fromReserve) {
                FUN_004e980c(context, unit);
                unit->flags |= 0x4000;
                if (unit->entry->flags & g_btlAction.buttons.confirmAlt) {
                    unit->flags |= 4;
                }
            } else {
                for (s32 i = 0; i < 64; i++) {
                    if (selected & (1 << i)) {
                        unit->targets[i] = 1;
                    }
                }
                (*context)->commandEntry.extraTargets = extra;
            }
        } else {
            for (s32 i = 0; i < 64; i++) {
                if (selected & (1 << i)) {
                    if (i != 0) {
                        s32 key = i - 1;
                        s32 index = btlFindSelectionIndexByLookupKey(*context, key);
                        if (index < 0) {
                            index = key + 109;
                        }
                        unit->targets[index] = 1;
                    } else {
                        unit->targets[0] = 1;
                        if (playerHasFlagBit(1)) {
                            BattleEntrySummaryA summary;
                            btlEntryBuildSummary(&summary, *context, unit->entry);
                            if (summary.base.category == 3) {
                                if (summary.base.ailmentGroup == 24 || summary.base.ailmentGroup == 27 ||
                                    summary.base.ailmentGroup == 1) {
                                    continue;
                                }
                                ConsumableRecordA *item = itemTableGetItemRecord(summary.base.itemId);
                                if (item != NULL && (item->flags & 4)) {
                                    continue;
                                }
                            }
                            unit->targets[0] = 0;
                        }
                    }
                }
            }
        }
    }
    btlUIClearWorkTables(g_btlUiBlock);
    FUN_004eb838(context, unit);
    return 1;
}

} /* extern "C" */
