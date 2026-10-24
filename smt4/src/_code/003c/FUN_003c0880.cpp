/* NON_MATCHING: readable rewrite of the battle-event step machine; retail keeps the stage-1 load sequence as fallthrough with the step in r4/DAT_00435d18 in r5 and shares one state-store exit, which the build schedules with different registers. */
#include "common.h"

// One 0x288-byte battle actor slot; only the status word is read here.
struct BattleActorSlot {
    u32 status;      // bit0: active, bit6: hidden
    u8 unk04[0x284];
};

struct BattleStepContext {
    u8 unk0000[0x1fc0];
    BattleActorSlot *actors;     // 0x1fc0
    u8 unk1fc4[0x298];
    s32 resultA;                 // 0x225c
    s32 resultB;                 // 0x2260
    s32 resultC;                 // 0x2264
    u8 unk2268[0x2238];
    u32 flags;                   // 0x44a0
};

struct ScriptProcess {
    u8 unk00[0x108];
    u32 state;                   // 0x108
};

// The battle event step that loads a script, runs it and hands its results to the battle context.
struct BattleEventStep {
    /* 0x00 */ BattleStepContext *context;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ void *tableData;
    /* 0x0c */ void *modelData;
    /* 0x10 */ ScriptProcess *process;
    /* 0x14 */ void *script;
    /* 0x18 */ s32 state;
    /* 0x1c */ u8 unk1c[0x9c];
    /* 0xb8 */ s32 resultA;
    /* 0xbc */ s32 resultB;
    /* 0xc0 */ s32 resultC;
    /* 0xc4 */ s8 loadStage;
};

extern "C" {
extern void *DAT_00435d18;
extern void *g_btlActionReflect;
extern void *g_btlUiBlock;

void FUN_00242914(void *block, s32 flag);
void FUN_00246454(s32 slot);
void battleSelectButtonHelpPreset(s32 preset);
void scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
ScriptProcess *FUN_00297060(void);
void buttonHelpSetPreset(s32 preset);
void FUN_003c06ac(BattleEventStep *step);
void FUN_003dbe68(void *state);
s32 btlEventAreResourcesReady(void *state);
s32 FUN_003dcc34(void *state);
s32 scrRunOpcodesStub(ScriptProcess *process);
s32 nodeListCountActiveById(void *reflect, s32 id);

// Steps the state machine: 0 starts the load, 1 waits for the resources and starts the script, 2 runs it and copies its
// results into the battle context, 3 hands a late script to the running process, 4 waits for the effects to finish and
// clears the pending flag, 5 reports completion (-1).
s32 FUN_003c0880(BattleEventStep *step)
{
    s32 next;
    switch (step->state) {
    case 0:
        FUN_003c06ac(step);
        return 0;
    case 1:
        if (step->loadStage == 0) {
            if (btlEventAreResourcesReady(DAT_00435d18) == 0) {
                return 0;
            }
            FUN_003dbe68(DAT_00435d18);
            step->loadStage = 1;
        }
        if (step->loadStage == 1) {
            if (FUN_003dcc34(DAT_00435d18) == 0) {
                return 0;
            }
            step->loadStage = 2;
        }
        if (step->tableData == NULL || step->modelData == NULL || step->script == NULL) {
            return 0;
        }
        step->process = FUN_00297060();
        step->process->state = 1;
        scrScriptProcessStartEntry(step->process, 0);
        buttonHelpSetPreset(0x3c);
        next = 2;
        break;
    case 2:
        if (scrRunOpcodesStub(step->process) != 2) {
            return 0;
        }
        battleSelectButtonHelpPreset(0);
        step->context->resultA = step->resultA;
        step->context->resultB = step->resultB;
        step->context->resultC = step->resultC;
        if (step->resultA == 2) {
            for (s32 slot = 4; slot < 0x36; slot++) {
                BattleActorSlot *actor = &step->context->actors[slot];
                if ((actor->status & 1) != 0 && (actor->status & 0x40) == 0 && actor != NULL) {
                    FUN_00246454(0);
                }
            }
        }
        next = 4;
        break;
    case 3:
        if (step->script == NULL) {
            return 0;
        }
        *reinterpret_cast<void **>(reinterpret_cast<u8 *>(step->process) + 0xc0) = step->script;
        next = 2;
        break;
    case 4:
        if (nodeListCountActiveById(g_btlActionReflect, 0) > 0) {
            return 0;
        }
        if ((step->context->flags & 0x20000000) != 0) {
            FUN_00242914(g_btlUiBlock, 0);
            step->context->flags &= ~0x20000000;
        }
        next = 5;
        break;
    case 5:
        return -1;
    default:
        return 0;
    }
    step->state = next;
    return 0;
}
}
