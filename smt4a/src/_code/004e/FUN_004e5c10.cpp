/* NON_MATCHING: 114 lines, rewritten from retail's blocks on the shared unit types (BtlMainStateA **, BtlUnitA, the 0x34-byte summary, setScriptState as in FUN_004eb838). What remains is allocation: retail keeps g_btlAction in r8, 30 in r7, 1 in r9 and the marked flag in sl (here r9, r8, sl, r7), and loads the 64-bit masks and flags with ldm where the build uses ldrd. */
#include "common.h"
#include "shard/W6_W6Match3_BattleTiming.h"
#include "util/Random.h"
#include "battle/BtlUiGlobal.h"
#include "battle/btlUnit.h"
#include "battle/btlAction.h"
#include "battle/BtlGlobals.h"
#include "battle/BattleEntrySummary.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
void FUN_004e8454(BtlMainStateA **owner);
s32 FUN_004e933c(BtlMainStateA **owner, BtlUnitA *unit);
void FUN_004e7c04(BtlMainStateA **owner, s32 marked);
void btlEntryBuildSummary(BattleEntrySummaryA *summary, BtlMainStateA *battle, BtlCombatantEntryA *entry);
void btlUnitMarkTargetCandidates(BtlMainStateA **owner, s32 marked, s32 set);
void btlActionMarkRandomTargetableUnit(BtlMainStateA **owner);
void FUN_004eb838(BtlMainStateA **owner, BtlUnitA *unit);
void FUN_004c9220(u32 first, const void *snapshotA, const void *snapshotB, u8 mode);
void FUN_004c9160(s32 effect, BtlCombatantEntryA *entry, s32 a, s32 b);
void FUN_004fd508(s32 weight, BtlUnitA *unit, s32 a, BattleRosterRecordA *record, s32 b);
void FUN_004a9308(BtlUiA *block, u16 id, s32 a, s32 b);

/* Sets the command of the owner's action slot (FUN_004eb838's setScriptState). */
static __inline void setScriptState(BtlMainStateA **owner, u8 command)
{
    BtlActionSlotA &slot = g_btlAction.slots[(*owner)->unitRecord.currentSlot];
    slot.unit.command = command;
}

/* Chooses the unit's command from a roll: below 10 the special command is tried first, below 40 the
 * unit attacks the targets its summary selects, otherwise it queues the default command. The UI
 * shows the command unless the unit's flags hold a required or reach mask bit. */
void FUN_004e5c10(BtlMainStateA **owner, BtlUnitA *unit)
{
    s32 roll = lcgRandomRange(99);
    FUN_004e8454(owner);
    if (roll >= 10 || FUN_004e933c(owner, unit) == 0) {
        if (roll < 40) {
            s32 marked = 1;
            if ((unit->entry->flags & g_btlAction.interaction.requiredMask) == 0)
                marked = 0;
            FUN_004e7c04(owner, marked);
            BtlUnitDataA *data = unit->data;
            data->actionKind = 1;
            BattleEntrySummaryA summary;
            btlEntryBuildSummary(&summary, *owner, unit->entry);
            if (summary.base.element == 1)
                data->actionArg = 2;
            else
                data->actionArg = 1;
            switch (summary.base.scope) {
            case 0:
                btlActionMarkRandomTargetableUnit(owner);
                break;
            case 1:
                btlUnitMarkTargetCandidates(owner, marked, 1);
                break;
            case 2:
                btlUnitMarkTargetCandidates(owner, marked, 2);
                break;
            }
            for (s32 i = 0; i < 109; i++) {
                (*owner)->roster[i].liveFlags.unk50 &= ~4;
                (*owner)->roster[i].liveFlags.unk50 &= ~8;
            }
            btlCommandExtendAnimationWindow((BtlActorRef *)owner, (BtlCommand *)unit,
                                            unit->record->combatant.parameterIndex, 0, 30, 30);
            FUN_004eb838(owner, unit);
            unit->uiMode = 1;
            if (summary.base.scope == 0) {
                BtlCombatantEntryA *target = NULL;
                bool self = false;
                for (s32 i = 0; i < 109; i++) {
                    if (unit->targets[i] != 0) {
                        target = &(*owner)->entries[i];
                        self = unit->entry == target;
                        break;
                    }
                }
                if (self)
                    FUN_004c9160(43, unit->entry, 0, 1);
                else
                    FUN_004c9220(42, unit->entry, target, 1);
            } else {
                FUN_004c9160(44, unit->entry, 0, 1);
            }
        } else {
            s32 weight = (unit->flags & 0x1080) == 0 ? 50 : 0;
            FUN_004c9160(9, unit->entry, 0, 1);
            FUN_004fd508(weight, unit, 0, unit->record, 1);
            btlCommandExtendAnimationWindow((BtlActorRef *)owner, (BtlCommand *)unit,
                                            unit->record->combatant.parameterIndex, 0, 30, 30);
            setScriptState(owner, 29);
        }
    }
    if (((g_btlAction.interaction.requiredMask | g_btlAction.interaction.reachMask) & unit->entry->flags) == 0)
        FUN_004a9308(g_btlUiBlock, unit->id, 0, 0);
}

} /* extern "C" */
