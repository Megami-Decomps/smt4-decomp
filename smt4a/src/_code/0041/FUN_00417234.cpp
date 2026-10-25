/* NON_MATCHING: near (148 rows against 150): the hoisted constants and stm of mode+step now match; retail materialises the nextStep zero with its own `mov r1,#0` (two sites) where ours reuses the hoisted zero, and orders the hoisted zero first in the prologue. */
#include "common.h"
#include "util/FUN_00333dc8.h"
#include "shard/FUN_003a7b74.h"

/* The status-down (cure) menu task (observed fields). */
struct StatusDownTask {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 nextMode;
    /* 0x0C */ u32 step;
    /* 0x10 */ u32 nextStep;
    /* 0x14 */ u8 unk14[8];
    /* 0x1C */ u32 script;
    /* 0x20 */ u8 unk20[0x1A];
    /* 0x3A */ u16 targetEntry;
    /* 0x3C */ s32 targetIndex;
    /* 0x40 */ s8 useAltSe;
};

extern "C" {

void sysPlaySe(u32 id);
s32 scrRunOpcodesStub(u32 script);
void scrScriptProcessStartEntry(u32 script, u32 entry);
void obj04Finish(void);
void statusDownEnterState3(void);
void stateHolderEnterState7(void);
void statusDownEnterStateSeven(void);
void FUN_003b0744(void);
s32 messageMainIsIdle(void);
s32 messageGetChoiceResult(void);
s32 stateHolderCountMinus1(void);
s32 stateHolderStateIs8Or10(void);
u16 stateHolderGetCurrentEntry(void);
s32 stateHolderStateIs0xD(void);
s32 statusDownIsStateEleven(void);

/* Hands control to the next menu `mode` and rewinds this task's step. */
static __inline void statusDownLeave(StatusDownTask *task, u32 mode)
{
    task->nextStep = 0;
    task->nextMode = mode;
    task->step = 0;
}

/* Runs one frame of the status-down menu: pick the target, confirm with a choice, then either apply
 * the cure or fall back to the previous menu. Always returns 0. */
u32 FUN_00417234(StatusDownTask *task)
{
    switch (task->step) {
    case 0:
        statusDownEnterStateSeven();
        task->step = 1;
    case 1:
        scrScriptProcessStartEntry(task->script, 0xF);
        task->targetEntry = 0;
        sysPlaySe(0x69);
        task->step = 2;
    case 2:
        scrRunOpcodesStub(task->script);
        if (stateHolderStateIs8Or10() != 0) {
            task->step = 3;
        } else {
            if (statusDownIsStateEleven() == 0) {
                break;
            }
            task->step = 7;
        }
        obj04Finish();
        sysPlaySe(0x9C);
        break;
    case 3:
        if (messageMainIsIdle() == 0) {
            break;
        }
        if (FUN_003a7b74() == stateHolderCountMinus1()) {
            task->step = 7;
            task->targetIndex = -1;
            break;
        }
        task->targetIndex = FUN_003a7b74();
        task->targetEntry = stateHolderGetCurrentEntry();
        scrScriptProcessStartEntry(task->script, 0x11);
        task->step = 4;
    case 4:
        if (scrRunOpcodesStub(task->script) != 2) {
            break;
        }
        FUN_00333dc8(0);
        if (messageGetChoiceResult() == 0) {
            FUN_003b0744();
            task->step = 5;
        } else {
            stateHolderEnterState7();
            task->step = 1;
        }
        break;
    case 5:
        if (stateHolderStateIs0xD() == 0) {
            break;
        }
        statusDownEnterState3();
        task->step = 6;
    case 6:
        statusDownLeave(task, 5);
        if (task->useAltSe == 0) {
            sysPlaySe(0x67);
        } else {
            sysPlaySe(0x11D);
        }
        break;
    case 7:
        if (messageMainIsIdle() == 0) {
            break;
        }
        task->targetIndex = -1;
        scrScriptProcessStartEntry(task->script, 0x10);
        task->step = 8;
    case 8:
        if (scrRunOpcodesStub(task->script) != 2) {
            break;
        }
        FUN_00333dc8(0);
        if (messageGetChoiceResult() == 0) {
            statusDownLeave(task, 6);
        } else {
            stateHolderEnterState7();
            task->step = 1;
        }
        break;
    default:
        break;
    }
    return 0;
}

} /* extern "C" */
