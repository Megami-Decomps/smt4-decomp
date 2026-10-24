/* NON_MATCHING: steps the lazily started event script task (start, wait for the script, branch to the next entry, finish); written from the decompilation, the state switch and its fall-through are not compared with retail */
#include "common.h"

#define LAZY_STATE_START 0
#define LAZY_STATE_RUN_ENTRY 1
#define LAZY_STATE_WAIT 2
#define LAZY_STATE_BRANCH 3
#define LAZY_STATE_AFTER_BRANCH 6
#define LAZY_STATE_FINISH 7
#define LAZY_STATE_NEXT_ENTRY 9
#define LAZY_STATE_WAIT_ENTRY 10
#define LAZY_KIND_CHAINED 5
#define LAZY_NO_ENTRY -1

struct LazyScriptTask {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 chained;
    /* 0x08 */ s32 mode;
    /* 0x0C */ s32 state;
    /* 0x10 */ s32 frame;
    /* 0x14 */ u8 unk14[0xC];
    /* 0x20 */ s32 entry;
    /* 0x24 */ u8 unk24[0x2C];
    /* 0x50 */ s32 handled;
    /* 0x54 */ u8 scriptRunning;
    /* 0x55 */ u8 unk55[3];
    /* 0x58 */ s32 pendingEntry;
    /* 0x5C */ u8 pendingRunning;
    /* 0x5D */ u8 closing;
};

extern "C" {
extern s8 DAT_0057f6c9;
extern s8 DAT_0057f6ca;
extern LazyScriptTask *DAT_0057f6d0;
extern s32 DAT_0057f6d8;
extern s32 g_lazyScriptState;
extern s32 DAT_005e210c;
extern s32 DAT_005e2110;

void FUN_00275bc8(void);
s32 scrRunOpcodesStub(s32 process);
void scrScriptProcessStartEntry(s32 process, s32 entry);
void scrScriptProcessDestroy(void);
void obj04Finish(void);
void FUN_0031ed60(LazyScriptTask *task, s32 value);
s32 FUN_0035d83c(LazyScriptTask *task);
void FUN_0035d7bc(LazyScriptTask *task);
void FUN_001386b4(void);
void gameDataBlocksReleaseHold(s32 mask);
void gameDataFlagsClearBits(s32 mask);
void gameDataBlocksMaskClearBits(s32 mask);
void asdMemFree(void);

/* Returns 1 when the task has finished (or none exists), otherwise 0. */
u32 FUN_00229c9c(u32 unused, s32 enabled)
{
    LazyScriptTask *task = DAT_0057f6d0;
    if (task == NULL)
        return 1;
    if (g_lazyScriptState != 0)
        enabled = DAT_005e210c;
    if (g_lazyScriptState == 0 || enabled == 0)
        return 0;

    if (DAT_005e2110 == 0) {
        s32 process = g_lazyScriptState;
        FUN_00275bc8();
        DAT_005e2110 = process;
        *(s32 *)(process + 0x108) = 2;
    }

    if (task->pendingRunning != 0) {
        if (scrRunOpcodesStub(DAT_005e2110) != 2)
            return 0;
        task->pendingRunning = 0;
        task->pendingEntry = LAZY_NO_ENTRY;
        return 0;
    }
    if (task->pendingEntry != LAZY_NO_ENTRY) {
        task->entry = task->pendingEntry;
        scrScriptProcessStartEntry(DAT_005e2110, task->entry);
        task->pendingRunning = 1;
        task->scriptRunning = 0;
        obj04Finish();
        return 0;
    }

    s32 next;
    switch (task->state) {
    case LAZY_STATE_START:
        task->handled = 0;
        if (task->chained != 0 && (task->kind != LAZY_KIND_CHAINED || task->mode == 1)) {
            task->state = LAZY_STATE_RUN_ENTRY;
            task->frame++;
            return 0;
        }
        next = LAZY_STATE_BRANCH;
        break;
    case LAZY_STATE_RUN_ENTRY:
        FUN_0031ed60(task, 4);
        next = LAZY_STATE_WAIT;
        task->scriptRunning = 0;
        break;
    case LAZY_STATE_WAIT:
        if (FUN_0035d83c(task) != 0) {
            FUN_0035d7bc(task);
            if (DAT_0057f6c9 != 0) {
                task->closing = 1;
                task->state = LAZY_STATE_BRANCH;
            } else if (DAT_0057f6ca != 0 && task->handled == 0) {
                task->handled = 1;
                task->state = LAZY_STATE_RUN_ENTRY;
            } else {
                task->state = LAZY_STATE_NEXT_ENTRY;
                task->closing = 0;
                if (task->kind == LAZY_KIND_CHAINED)
                    task->state = LAZY_STATE_BRANCH;
            }
            task->scriptRunning = 0;
        } else if (task->scriptRunning != 0) {
            scrRunOpcodesStub(DAT_005e2110);
        }
        task->frame++;
        return 0;
    case LAZY_STATE_BRANCH:
        FUN_0031ed60(task, task->kind);
        next = LAZY_STATE_AFTER_BRANCH;
        break;
    case LAZY_STATE_AFTER_BRANCH:
        if (FUN_0035d83c(task) == 0) {
            task->frame++;
            return 0;
        }
        FUN_0035d7bc(task);
        if (DAT_0057f6c9 == 0 && DAT_0057f6d8 != LAZY_NO_ENTRY) {
            gameDataBlocksReleaseHold(1);
            gameDataFlagsClearBits(1);
            gameDataBlocksMaskClearBits(1);
            task->state = LAZY_STATE_WAIT_ENTRY;
            scrScriptProcessStartEntry(DAT_005e2110, DAT_0057f6d8);
            task->frame++;
            return 0;
        }
        next = DAT_0057f6c9 == 0 ? LAZY_STATE_NEXT_ENTRY : LAZY_STATE_FINISH;
        break;
    case LAZY_STATE_NEXT_ENTRY:
        next = LAZY_STATE_FINISH;
        break;
    case LAZY_STATE_FINISH:
        if (DAT_0057f6d0->chained == 1 && (task->kind != LAZY_KIND_CHAINED || task->mode == 4))
            FUN_001386b4();
        if (DAT_005e2110 != 0) {
            scrScriptProcessDestroy();
            DAT_005e2110 = 0;
        }
        if (DAT_0057f6d0 != NULL)
            asdMemFree();
        DAT_0057f6d0 = NULL;
        return 1;
    case LAZY_STATE_WAIT_ENTRY:
        if (scrRunOpcodesStub(DAT_005e2110) != 2) {
            task->frame++;
            return 0;
        }
        next = LAZY_STATE_NEXT_ENTRY;
        break;
    default:
        task->frame++;
        return 0;
    }
    task->state = next;
    task->frame++;
    return 0;
}

} /* extern "C" */
