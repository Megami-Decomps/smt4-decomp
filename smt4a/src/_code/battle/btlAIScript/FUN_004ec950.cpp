/* NON_MATCHING: 10 lines, one schedule: the final command store loads the constant 4 after the slot multiply
 * (retail before it, in r1, with the battle in r0). A `static __inline void set(BtlMainStateA *battle, s32 command)`
 * that reaches the slot through a reference (`BtlActionSlotA &slot = g_btlAction.slots[battle->...currentSlot];
 * slot.unit.command = command;`, the operation FUN_004eb838 and FUN_004eb740 repeat) compiles that store exactly
 * as retail, but the menu-mask and target-mask tests then load their halves through other registers (14 lines at
 * best over both operand orders of the four tests), so the closer form is kept.
 * `cmd` is the unit (BtlUnitA: entry 0x20, data 0x28, targets 0x38) and `record` its data block; with
 * BtlUnitDataA's signed actionKind/actionArg the function is 82 lines off, so the unsigned view stays here. */
#include "battle/BattleUnitRecordState.h"
#include "gamedata/GameFlags.h"
#include "battle/BtlUiGlobal.h"
#include "battle/BtlGlobals.h"

/* unit-local: what btlEntryBuildSummary reports about the unit's pending command; Apocalypse's summary has
 * no shared layout yet (IV's is battle/BattleEntrySummary.h: element 0x02, scope 0x1C). */
struct BtlAiCommandInfo {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 kind;
    /* 0x04 */ u8 unk04[0x18];
    /* 0x1c */ u8 targetMode;   /* 0: no target, 1/2: candidate set to mark */
    /* 0x1d */ u8 unk1d[0x13];
};

/* unit-local: the unit's data block (BtlUnitDataA) as this function reads and writes it, the action kind and
 * argument as unsigned halfwords (see the note above). */
struct BtlAiRecord {
    /* 0x000 */ u8 unk000[0x1be];
    /* 0x1be */ u16 state;
    /* 0x1c0 */ u16 param;
};

/* unit-local: the unit (BtlUnitA) with that view of its data block. */
struct BtlAiCommand {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 commandId;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ BtlAiRecord *record;
    /* 0x2c */ u8 unk2c[0xc];
    /* 0x38 */ u8 scratch[0x85];
};

static __inline void beginCommand(BtlAiCommand *cmd, u16 param)
{
    cmd->record->state = 2;
    cmd->record->param = param;
}

/* The unit in one of the action module's slots (btlUnitGet without its range checks). */
static __inline BtlUnitA *slotUnit(s32 index)
{
    BtlActionSlotA &slot = g_btlAction.slots[index];
    return &slot.unit;
}

extern "C" {

s32 btlScriptUnitHasFlags(BtlMainStateA *battle);
s32 FUN_004c87e0(void);
s32 stateAtCIs4(u32 aiScript);
s32 jobIsValid(u32 job);
s32 gameFlagIsSet(u32 id);

void sysMemClear(void *buffer, s32 size);
BtlAiCommandInfo btlEntryBuildSummary(BtlMainStateA *battle, u32 commandId);
void FUN_004e7c04(BattleUnitRecordState *units, s32 a);
void btlActionMarkRandomTargetableUnit(BattleUnitRecordState *units);
void FUN_004e8454(BattleUnitRecordState *units);
void btlUnitMarkTargetCandidates(BattleUnitRecordState *units, s32 a, s32 set);
void btlUnitSetParam(BattleUnitRecordState *units, s32 param, s32 a, s32 b);
u16 FUN_003f0bd8(BtlMainStateA *battle, s32 a);
u16 FUN_003f1a9c(BtlMainStateA *battle, s32 a);
s32 FUN_003efb18(BtlMainStateA *battle);
u16 FUN_003f217c(BtlMainStateA *battle);
s32 btlScriptGetSelectedSkillDemonId(BtlMainStateA *battle);
s32 FUN_003f23fc(BtlMainStateA *battle);
s32 FUN_003e84fc(BtlMainStateA *battle);
s32 FUN_003f25e8(BtlMainStateA *battle);
s32 btlStateHasSelectionGateFlag(BtlMainStateA *battle);
void btlUiQueueMenuAction(BtlUiA *uiBlock, s32 action, s32 a);
void FUN_004eb838(BattleUnitRecordState *units, BtlAiCommand *cmd);

extern u32 g_btlAiScript;

/* Drive one AI command for the active unit; returns 0 when the AI should not act. */
u32 FUN_004ec950(BattleUnitRecordState *units, BtlAiCommand *cmd)
{
    if ((btlScriptUnitHasFlags(units->battle) != 0 || FUN_004c87e0() == 0) &&
        stateAtCIs4(g_btlAiScript) != 0 && jobIsValid(units->battle->uiJobs.menuJob) == 0) {
        if ((units->battle->stateFlags64.bits & g_btlAction.aiActMask) != 0 &&
            (units->battle->stateFlags64.bits & g_btlAction.aiTargetMask) == 0) {
            BtlAiRecord *record = cmd->record;

            if (record->state == 0 && record->param == 0) {
                record->state = 1;
                BtlAiCommandInfo info = btlEntryBuildSummary(units->battle, cmd->commandId);
                if (info.kind == 1) {
                    record->param = 2;
                } else {
                    record->param = 1;
                }
                FUN_004e7c04(units, 0);
                switch (info.targetMode) {
                case 0:
                    btlActionMarkRandomTargetableUnit(units);
                    break;
                case 1:
                    btlUnitMarkTargetCandidates(units, 0, 1);
                    break;
                case 2:
                    btlUnitMarkTargetCandidates(units, 0, 2);
                    break;
                }
            }
            if (gameFlagIsSet(0x596) != 0) {
                cmd->record->state = 2;
                cmd->record->param = 0x9b;
                FUN_004e8454(units);
                sysMemClear(cmd->scratch, 0x85);
                btlUnitSetParam(units, 2, 0, 1);
                gameFlagSetValue(0x596, 0, 1);
            }
            if (units->battle->completion.pending[0] == 0 && units->battle->completion.pending[1] == 0) {
                cmd->record->state = 0x10;
                cmd->record->param = 0;
                sysMemClear(cmd->scratch, 0x85);
            }
        }
        if ((g_btlAction.aiMenuMask & units->battle->stateFlags64.bits) != 0) {
            sysMemClear(cmd->scratch, 0x85);
            FUN_004e8454(units);
            beginCommand(cmd, FUN_003f0bd8(units->battle, 0));
            btlUnitSetParam(units, 1, 0, 1);
        }
        if ((units->battle->stateFlags64.bits & g_btlAction.aiTargetMask) != 0) {
            sysMemClear(cmd->scratch, 0x85);
            FUN_004e8454(units);
            beginCommand(cmd, FUN_003f1a9c(units->battle, 0));
            btlUnitSetParam(units, 1, 0, 1);
        }
        if (FUN_003efb18(units->battle) != 0) {
            cmd->record->state = 2;
            cmd->record->param = FUN_003f217c(units->battle);
            btlUnitSetParam(units, 1, 0, 1);
        }
        {
            s32 action = btlScriptGetSelectedSkillDemonId(units->battle);

            if ((FUN_003f23fc(units->battle) != 0 || FUN_003e84fc(units->battle) != 0 ||
                 FUN_003f25e8(units->battle) != 0) &&
                btlScriptUnitHasFlags(units->battle) == 0 && btlStateHasSelectionGateFlag(units->battle) == 0 && action != 0) {
                btlUiQueueMenuAction(g_btlUiBlock, (s16)action, 1);
                slotUnit(units->battle->unitRecord.currentSlot)->command = 4;
            } else {
                FUN_004eb838(units, cmd);
            }
        }
        return 1;
    }
    return 0;
}

} /* extern "C" */
