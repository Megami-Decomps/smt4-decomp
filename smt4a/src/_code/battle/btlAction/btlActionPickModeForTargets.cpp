/* NON_MATCHING: 213 lines (161 by shape), rewritten from the raw draft on the shared battle types after its sibling
 * FUN_004e9bd0. The target loop matches; what remains: retail's frame is 16 bytes larger (gaps after the mode index,
 * the second mode and the usable flag; the summary at sp+52, the out byte at sp+108), so most rows differ only in
 * stack offsets; retail does not hoist the common `modeCount = 1` out of the first if/else and reads the first mask
 * from the g_btlAction base it shares with the final marking loop (same-TU data, as in FUN_004e9bd0). */
#include "common.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlUnitWork.h"
#include "battle/BattleEntrySummary.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/EquipmentRecordA.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "code/Code003e_Smt4a.h"

extern "C" {
extern u64 g_btlTargetableMask;

void btlEntryBuildSummary(BattleEntrySummaryA *summary, BtlMainStateA *battle, BtlCombatantEntryA *entry);
s32 itemIsCollectedWithRelated(u16 recordId);
s32 FUN_004c4604(u32 id, s32 a, s32 b, s32 casterSlot, s32 targetSlot, s32 c, u32 d, u8 *out);
s32 FUN_004bfcfc(u32 id, s32 a, s32 b, s32 casterSlot, s32 targetSlot, u32 c, u32 d);

/* Picks the unit's action mode for the candidate `targets` (`count` of them): tries each mode the unit can use
 * (its equipment adds a second), stops at a blocking summary kind, and marks the first usable target (or all
 * targetable ones for a revive-kind action). Returns 1 when a mode applies. */
u32 btlActionPickModeForTargets(BtlMainStateA **owner, BtlUnitA *unit, BtlCombatantEntryA **targets, u32 count, s32 anyTarget)
{
    s32 modes[2];
    s32 modeCount;
    if ((g_btlAction.buttons.confirm & unit->entry->flags) != 0) {
        modeCount = 1;
        modes[0] = 1;
        if (itemTableGetEquipmentRecord(gameGetPlayerData()->equipment[1]) != NULL) {
            modeCount = 2;
            modes[1] = 2;
        }
    } else {
        modeCount = 1;
        modes[0] = 0;
    }
    for (s32 mode = 0; mode < modeCount; mode++) {
        s32 reviveKind = 0;
        unit->data->actionKind = 1;
        unit->data->actionArg = modes[mode];
        BattleEntrySummaryA summary;
        btlEntryBuildSummary(&summary, *owner, unit->entry);
        switch (summary.base.targeting) {
        case 0:
        case 5:
            break;
        case 1:
        case 6:
            reviveKind = 1;
            break;
        case 2:
        case 3:
        case 4:
        case 7:
        case 8:
            return 0;
        }
        s32 usable = 0;
        u8 out = 0;
        for (u32 i = 0; i < count; i++) {
            s32 blocked = 0;

            if ((targets[i]->flags & g_btlTargetableMask) == 0) {
                continue;
            }
            if (itemIsCollectedWithRelated(targets[i]->data.id) == 0) {
                u32 id = targets[i]->data.id;

                if (((*owner)->encounterSelection.id < 0 || ((*owner)->encounter.controlFlags & 0x80) == 0) &&
                    id != 0x493 && id != 0x494 && id != 0x495 && id != 0x496 &&
                    (gameProgressIsAdvanced() == 0 || valueAtF0IsReady(reinterpret_cast<ValueAtF0 *>(*owner)) != 0)) {
                    continue;
                }
            }
            s32 result = FUN_004c4604(0, 0, 1, unit->record->combatant.parameterIndex, targets[i]->ids[0], 0, 1, &out);

            if (result == 1 || result == 2 || result == 3) {
                blocked = 1;
            }
            if ((blocked & reviveKind) != 0) {
                return 0;
            }
            if ((blocked & ~reviveKind) == 0) {
                s32 check = FUN_004bfcfc(0, 0, 0, unit->record->combatant.parameterIndex, targets[i]->ids[0], 1, 1);

                if (anyTarget == 0 || check == 2) {
                    usable = 1;
                    if (reviveKind == 0) {
                        unit->data->actionKind = 1;
                        unit->data->actionArg = modes[mode];
                        unit->targets[targets[i]->selectionIndex] = 1;
                        return 1;
                    }
                }
            }
        }
        if ((usable & reviveKind) != 0) {
            unit->data->actionKind = 1;
            unit->data->actionArg = modes[mode];
            for (s32 i = 0; i < count; i++) {
                if ((targets[i]->flags & g_btlAction.clearedFlags.mask) != 0) {
                    unit->targets[targets[i]->selectionIndex] = 1;
                }
            }
            return 1;
        }
    }
    return 0;
}

}
