/* NON_MATCHING: retail loads the first act mask as two words (hi then lo) before the flags ldrd; otherwise identical */
#include "battle/BattleUnitRecordState.h"
#include "gamedata/GameFlags.h"

/* What FUN_003e8bb0 reports about the unit's pending command. */
struct BtlAiCommandInfo {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 kind;
    /* 0x04 */ u8 unk04[0x18];
    /* 0x1c */ u8 targetMode;   /* 0: no target, 1/2: candidate set to mark */
    /* 0x1d */ u8 unk1d[0x13];
};

/* The AI's per-unit scratch record (cmd->record). */
struct BtlAiRecord {
    /* 0x000 */ u8 unk000[0x1be];
    /* 0x1be */ u16 state;
    /* 0x1c0 */ u16 param;
};

/* The AI command being executed for a unit. */
struct BtlAiCommand {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 commandId;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ BtlAiRecord *record;
    /* 0x2c */ u8 unk2c[0xc];
    /* 0x38 */ u8 scratch[0x85];
};

/* One unit's AI slot (0x1254 bytes each). */
struct BtlAiUnitSlot {
    /* 0x000 */ u8 unk000[9];
    /* 0x009 */ u8 aiState;
    /* 0x00a */ u8 unk00a[0x124a];
};

/* g_btlAction beyond its published prefix: the unit-record block and the state masks the AI tests. */
struct BtlActionAiView {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ BtlAiUnitSlot *slots;
    /* 0x008 */ u8 unk008[0xd0];
    /* 0x0d8 */ u64 actMask;
    /* 0x0e0 */ u8 unk0e0[0xa0];
    /* 0x180 */ u64 menuMask;
    /* 0x188 */ u64 targetMask;
};

typedef char BtlActionAiViewLayoutCheck[offsetof(BtlActionAiView, actMask) == 0xd8 &&
    offsetof(BtlActionAiView, menuMask) == 0x180 && offsetof(BtlActionAiView, targetMask) == 0x188 ? 1 : -1];

extern "C" {

s32 btlScriptUnitHasFlags(BtlMainStateA *battle);
s32 FUN_004c87e0(void);
s32 stateAtCIs4(u32 aiScript);
s32 jobIsValid(u32 job);
s32 gameFlagIsSet(u32 id);

void sysMemClear(void *buffer, s32 size);
BtlAiCommandInfo FUN_003e8bb0(BtlMainStateA *battle, u32 commandId);
void FUN_004e7c04(BattleUnitRecordState *units, s32 a);
void FUN_004e5b5c(BattleUnitRecordState *units);
void FUN_004e8454(BattleUnitRecordState *units);
void btlUnitMarkTargetCandidates(BattleUnitRecordState *units, s32 a, s32 set);
void btlUnitSetParam(BattleUnitRecordState *units, s32 param, s32 a, s32 b);
u16 FUN_003f0bd8(BtlMainStateA *battle, s32 a);
u16 FUN_003f1a9c(BtlMainStateA *battle, s32 a);
s32 FUN_003efb18(BtlMainStateA *battle);
u16 FUN_003f217c(BtlMainStateA *battle);
s32 FUN_003ef738(BtlMainStateA *battle);
s32 FUN_003f23fc(BtlMainStateA *battle);
s32 FUN_003e84fc(BtlMainStateA *battle);
s32 FUN_003f25e8(BtlMainStateA *battle);
s32 FUN_003eb1cc(BtlMainStateA *battle);
void btlUiQueueMenuAction(u32 uiBlock, s32 action, s32 a);
void FUN_004eb838(BattleUnitRecordState *units, BtlAiCommand *cmd);

extern u32 g_btlAiScript;
extern BtlActionAiView g_btlAction;
extern u32 g_btlUiBlock;

/* Drive one AI command for the active unit; returns 0 when the AI should not act. */
u32 FUN_004ec950(BattleUnitRecordState *units, BtlAiCommand *cmd)
{
    if ((btlScriptUnitHasFlags(units->battle) != 0 || FUN_004c87e0() == 0) &&
        stateAtCIs4(g_btlAiScript) != 0 && jobIsValid(units->battle->uiJobs.menuJob) == 0) {
        u64 flags = units->battle->stateFlags64.bits;

        if ((g_btlAction.actMask & flags) != 0 && (flags & g_btlAction.targetMask) == 0) {
            BtlAiRecord *record = cmd->record;

            if (record->state == 0 && record->param == 0) {
                record->state = 1;
                BtlAiCommandInfo info = FUN_003e8bb0(units->battle, cmd->commandId);
                if (info.kind == 1) {
                    record->param = 2;
                } else {
                    record->param = 1;
                }
                FUN_004e7c04(units, 0);
                switch (info.targetMode) {
                case 0:
                    FUN_004e5b5c(units);
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
        if ((g_btlAction.menuMask & units->battle->stateFlags64.bits) != 0) {
            sysMemClear(cmd->scratch, 0x85);
            FUN_004e8454(units);
            cmd->record->state = 2;
            cmd->record->param = FUN_003f0bd8(units->battle, 0);
            btlUnitSetParam(units, 1, 0, 1);
        }
        if ((g_btlAction.targetMask & units->battle->stateFlags64.bits) != 0) {
            sysMemClear(cmd->scratch, 0x85);
            FUN_004e8454(units);
            cmd->record->state = 2;
            cmd->record->param = FUN_003f1a9c(units->battle, 0);
            btlUnitSetParam(units, 1, 0, 1);
        }
        if (FUN_003efb18(units->battle) != 0) {
            cmd->record->state = 2;
            cmd->record->param = FUN_003f217c(units->battle);
            btlUnitSetParam(units, 1, 0, 1);
        }
        {
            s32 action = FUN_003ef738(units->battle);

            if ((FUN_003f23fc(units->battle) != 0 || FUN_003e84fc(units->battle) != 0 ||
                 FUN_003f25e8(units->battle) != 0) &&
                btlScriptUnitHasFlags(units->battle) == 0 && FUN_003eb1cc(units->battle) == 0 && action != 0) {
                btlUiQueueMenuAction(g_btlUiBlock, (s16)action, 1);
                g_btlAction.slots[units->battle->unitRecord.currentSlot].aiState = 4;
            } else {
                FUN_004eb838(units, cmd);
            }
        }
        return 1;
    }
    return 0;
}

} /* extern "C" */
