/* NON_MATCHING: 155 lines (shape 111), 323 vs 324 rows; rewritten from retail's blocks on the shared unit types
 * after its sibling FUN_004e5c10. What remains is which constants armcc keeps in registers across the
 * else branch: retail holds 0 (the cleared `marked`, fp) and the 0x50 roster offset (sl) there and builds 2
 * at each use; the build holds 2 and 0 and builds 0x50 before each roster loop. The same choice makes retail
 * set `marked` from a register holding 1 (`mov r0, #1; movne fp, r0`), build the slot command 29 after the
 * slot multiply, and load the entry's flag words with `ldm` where the build has `ldrd`. Retail reaches the
 * attack block from both the roll and the failed skill pick; a flag gives that flow without a goto. */
#include "common.h"
#include "shard/W6_W6Match3_BattleTiming.h"
#include "util/Random.h"
#include "battle/BtlUiGlobal.h"
#include "battle/btlUnit.h"
#include "battle/btlAction.h"
#include "battle/BtlGlobals.h"
#include "battle/BattleEntrySummary.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/SkillDataLookup.h"
#include "battle/BattleHelpers_Smt4a.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

/* The ailment kinds (SkillDataRecordA.flags, low 7 bits) whose skills pick their target by status. */
enum {
    AILMENT_KIND_MASK = 0x7f,
    AILMENT_KIND_STATUS_TARGET = 4,
    AILMENT_KIND_22 = 22,
    AILMENT_KIND_28 = 28,
    AILMENT_KIND_31 = 31
};

extern "C" {
void FUN_004e8454(BtlMainStateA **owner);
u32 FUN_004e8b54(BtlMainStateA **owner, BtlUnitA *unit);
void FUN_004e7c04(BtlMainStateA **owner, s32 marked);
BattleEntrySummaryA btlEntryBuildSummary(BtlMainStateA *battle, BtlCombatantEntryA *entry);
void btlActionClassifyTargetSide(BtlMainStateA **owner, BtlCombatantEntryA *entry, u32 skillId, s32 *side, s32 *scope);
void btlUnitMarkTargetCandidates(BtlMainStateA **owner, s32 marked, s32 set);
void btlActionMarkRandomTargetableUnit(BtlMainStateA **owner);
void FUN_004e6880(BtlMainStateA **owner, u32 status);
void FUN_004eb838(BtlMainStateA **owner, BtlUnitA *unit);
void FUN_004c9160(s32 effect, BtlCombatantEntryA *entry, s32 a, s32 b);
void FUN_004fd508(s32 weight, BtlUnitA *unit, s32 a, BattleRosterRecordA *record, s32 b);
void FUN_004a9308(BtlUiA *block, u16 id, s32 a, s32 b);

/* Sets the command of the owner's action slot (FUN_004eb838's setScriptState). */
static __inline void setScriptState(BtlMainStateA **owner, u8 command)
{
    BtlActionSlotA &slot = g_btlAction.slots[(*owner)->unitRecord.currentSlot];
    slot.unit.command = command;
}

/* Clears the two selection bits of every roster record. */
static __inline void clearRosterSelection(BtlMainStateA **owner)
{
    s32 i;

    for (i = 0; i < 109; i++) {
        (*owner)->roster[i].liveFlags.unk50 &= ~4;
        (*owner)->roster[i].liveFlags.unk50 &= ~8;
    }
}

/* Queues the default command (the unit's record decides the animation window). */
static __inline void queueDefaultCommand(BtlMainStateA **owner, BtlUnitA *unit)
{
    s32 weight = (unit->flags & 0x1080) == 0 ? 50 : 0;

    FUN_004c9160(41, unit->entry, 0, 1);
    FUN_004fd508(weight, unit, 0, unit->record, 1);
    btlCommandExtendAnimationWindow((BtlActorRef *)owner, (BtlCommand *)unit,
                                    unit->record->combatant.parameterIndex, 0, 30, 30);
    setScriptState(owner, 29);
}

/* Chooses the unit's command from a roll: below 10 it queues the default command; below 70 it uses the
 * skill FUN_004e8b54 picks (without one, the default command one time in four); otherwise, and when
 * neither happened, it attacks the targets its summary selects. The UI shows the command unless the
 * unit's flags hold a required or reach mask bit. */
void btlAiChooseSkillOrAttack(BtlMainStateA **owner, BtlUnitA *unit)
{
    s32 roll = lcgRandomRange(99);

    if (roll < 10) {
        queueDefaultCommand(owner, unit);
    } else {
        bool attack = true;

        if (roll < 70) {
            u32 skillId = FUN_004e8b54(owner, unit);

            if (skillId != 0) {
                s32 side;
                s32 scope;
                BtlUnitDataA *data;

                FUN_004e8454(owner);
                side = 0;
                scope = 0;
                btlActionClassifyTargetSide(owner, unit->entry, skillId, &side, &scope);
                if (side == 1)
                    side = 0;
                else if (side == 0)
                    side = 1;
                FUN_004e7c04(owner, side);
                data = unit->data;
                data->actionKind = 2;
                data->actionArg = skillId;
                btlEntryBuildSummary(*owner, unit->entry);
                switch (scope) {
                case 0: {
                    SkillDataRecordA *skill = skillDataFindById(skillId);

                    if ((skill->flags & AILMENT_KIND_MASK) != 0) {
                        switch (skill->flags & AILMENT_KIND_MASK) {
                        default:
                            btlActionMarkRandomTargetableUnit(owner);
                            break;
                        case AILMENT_KIND_22:
                            FUN_004e6880(owner, AILMENT_KIND_22);
                            break;
                        case AILMENT_KIND_28:
                            FUN_004e6880(owner, AILMENT_KIND_28);
                            break;
                        case AILMENT_KIND_31:
                            FUN_004e6880(owner, AILMENT_KIND_31);
                            break;
                        case AILMENT_KIND_STATUS_TARGET:
                            btlActionMarkRandomStatusTarget(owner, AILMENT_KIND_STATUS_TARGET);
                            break;
                        }
                    } else {
                        btlActionMarkRandomTargetableUnit(owner);
                    }
                    break;
                }
                case 1:
                case 2:
                    btlUnitMarkTargetCandidates(owner, side, scope);
                    break;
                }
                clearRosterSelection(owner);
                btlCommandExtendAnimationWindow((BtlActorRef *)owner, (BtlCommand *)unit,
                                                unit->record->combatant.parameterIndex, 0, 30, 30);
                FUN_004eb838(owner, unit);
                unit->uiMode = 1;
                FUN_004c9160(40, unit->entry, 0, 1);
                attack = false;
            } else if ((s32)randRange(99) < 25) {
                queueDefaultCommand(owner, unit);
                attack = false;
            }
        }
        if (attack) {
            s32 marked = 0;
            BtlUnitDataA *data;

            FUN_004e8454(owner);
            if (g_btlAction.interaction.requiredMask & unit->entry->flags)
                marked = 1;
            FUN_004e7c04(owner, marked);
            data = unit->data;
            data->actionKind = 1;
            BattleEntrySummaryA summary = btlEntryBuildSummary(*owner, unit->entry);
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
            clearRosterSelection(owner);
            btlCommandExtendAnimationWindow((BtlActorRef *)owner, (BtlCommand *)unit,
                                            unit->record->combatant.parameterIndex, 0, 30, 30);
            FUN_004eb838(owner, unit);
            unit->uiMode = 1;
            FUN_004c9160(39, unit->entry, 0, 1);
        }
    }
    if (((g_btlAction.interaction.requiredMask | g_btlAction.interaction.reachMask) & unit->entry->flags) == 0)
        FUN_004a9308(g_btlUiBlock, unit->id, 0, 0);
}

} /* extern "C" */
