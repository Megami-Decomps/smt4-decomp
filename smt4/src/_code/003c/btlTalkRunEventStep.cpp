/* NON_MATCHING: armcc hoists the constant 2 (both state = 2 stores and loadStage = 2) into r6, where retail rematerialises it and cross-jumps every state store into one shared store-state exit; the result-copy scratch registers also differ. */
#include "script/scrScriptProcess.h"
#include "script/ScriptVm.h"
#include "code/Code0024.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BtlUiGlobal.h"
#include "script/ScriptEntry.h"

struct BattleStepContext {
    u8 unk0000[0x1fc0];
    BtlEntry *actors;        // 0x1fc0
    u8 unk1fc4[0x298];
    s32 resultA;                 // 0x225c
    s32 resultB;                 // 0x2260
    s32 resultC;                 // 0x2264
    u8 unk2268[0x2238];
    u32 flags;                   // 0x44a0
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
extern void *g_btlAux;
extern void *g_btlActionReflect;


u32 btlReflectQueueSelectionMarks(s32 actor, u32 options, BtlEntry *unit);
void battleSelectButtonHelpPreset(s32 preset);
void buttonHelpSetPreset(s32 preset);
void btlTalkStartLoadingAssets(BattleEventStep *step);
void FUN_003dbe68(void *state);
s32 btlEventAreResourcesReady(void *state);
s32 FUN_003dcc34(void *state);
s32 nodeListCountActiveById(void *reflect, s32 id);

// Steps the state machine: 0 starts the load, 1 waits for the resources and starts the script, 2 runs it and copies its
// results into the battle context, 3 hands a late script to the running process, 4 waits for the effects to finish and
// clears the pending flag, 5 reports completion (-1).
s32 btlTalkRunEventStep(BattleEventStep *step)
{
    switch (step->state) {
    case 0:
        btlTalkStartLoadingAssets(step);
        break;
    case 1:
        switch (step->loadStage) {
        case 0:
            if (btlEventAreResourcesReady(g_btlAux) == 0) {
                return 0;
            }
            FUN_003dbe68(g_btlAux);
            step->loadStage = 1;
            // Continue polling the next loading stage immediately.
        case 1:
            if (FUN_003dcc34(g_btlAux) == 0) {
                return 0;
            }
            step->loadStage = 2;
            break;
        }
        if (step->tableData == NULL || step->modelData == NULL || step->script == NULL) {
            return 0;
        }
        step->process = scrScriptProcessCreate(step->modelData, step->script);
        scriptProcessSetMode(step->process, 1);
        scrScriptProcessStartEntry(step->process, 0);
        buttonHelpSetPreset(0x3c);
        step->state = 2;
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
                BtlEntry *actor = &step->context->actors[slot];
                if ((actor->flags & 1) != 0 && (actor->flags & 0x40) == 0 && actor != NULL) {
                    btlReflectQueueSelectionMarks(0, 0, actor);
                }
            }
        }
        step->state = 4;
        break;
    case 3:
        if (step->script == NULL) {
            return 0;
        }
        step->process->commandOwner = (u32)step->script;
        step->state = 2;
        break;
    case 4:
        if (nodeListCountActiveById(g_btlActionReflect, 0) > 0) {
            return 0;
        }
        if ((step->context->flags & 0x20000000) != 0) {
            btlUiObjCSetActive(g_btlUiBlock, 0);
            step->context->flags &= ~0x20000000;
        }
        step->state = 5;
        break;
    case 5:
        return -1;
    default:
        return 0;
    }
    return 0;
}
}
