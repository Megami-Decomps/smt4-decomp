/* NON_MATCHING: steps the save/load confirmation script task (start script by mode, run it, request the save, finish); written from the decompilation, switch layout and state write-back not compared with retail */
#include "classes/WindowStatus.h"
#include "sys/ResultReport.h"

#define SAVELOAD_STATE_START 0
#define SAVELOAD_STATE_PROMPT 4
#define SAVELOAD_STATE_WAIT_ANSWER 5
#define SAVELOAD_STATE_RUN 6
#define SAVELOAD_STATE_DONE_A 7
#define SAVELOAD_STATE_DONE_B 8
#define SAVELOAD_STATE_CANCEL 9
#define SAVELOAD_STATE_RESTART 0xC

struct SaveLoadTask {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 state;
    /* 0x10 */ u8 unk10[0x34];
    /* 0x44 */ s32 request;
    /* 0x48 */ u8 unk48[8];
    /* 0x50 */ s32 enabledSource;
    /* 0x54 */ s32 enabled;
    /* 0x58 */ s32 script;
};

extern "C" {
extern u8 g_saveLoadThread;
extern s8 DAT_0043e311;   /* confirmed */
extern u8 DAT_0043e312;   /* a message window was opened */
extern s8 DAT_0043e313;   /* prompt already shown */
extern SaveLoadTask *DAT_0043e314;

s32 scrRunOpcodesStub(s32 script);
void scrScriptProcessStartEntry(s32 script, s32 entry);
void FUN_00297060(void);
s32 FUN_002103dc(u32 id, u32 flag);
void FUN_00223898(SaveLoadTask *task, s32 flag);
void gameDataFlagsSet(s32 mask);
void gameDataFlagsSetBits(s32 mask);
void gameDataBlocksAddFlags(u32 flags);
void gameDataFlagsClearAndRefresh(s32 mask);
void gameDataRemoveHomeButtonHold(s32 mask);
void FUN_00289880(void);
void FUN_002898e4(void);
void messageMainFinishWindow(void);
s32 messageMainIsWindowActive(void);
void buttonHelpSetPreset(s32 preset);
WindowStatusResult FUN_002c40f8(s32 *request, s32 a, s32 b, s32 c, s32 d);
void FUN_002e2f14(SaveLoadTask *task);

/* Releases the home-button hold and clears the transient game data flags. */
static __inline void saveLoadClearFlags(void)
{
    gameDataRemoveHomeButtonHold(1);
    gameDataFlagsClearAndRefresh(1);
    gameDataFlagsClear(1);
}

/* Returns 1 when the task has finished. */
u32 FUN_001edcf0(u32 unused, s32 enabled)
{
    SaveLoadTask *task = DAT_0043e314;
    s32 source = task->enabledSource;
    if (source != 0)
        enabled = task->enabled;
    if (source == 0 || enabled == 0)
        return 0;
    if (task->script == 0) {
        FUN_00297060();
        task->script = source;
        *(u32 *)(source + 0x108) = 2;
    }

    s32 next;
    switch (task->state) {
    case SAVELOAD_STATE_START: {
        s32 mode = FUN_002103dc(6, 0);
        if (mode == 0) {
            g_saveLoadThread = 0;
            scrScriptProcessStartEntry(task->script, 4);
            next = SAVELOAD_STATE_CANCEL;
        } else if (mode == 3) {
            g_saveLoadThread = 1;
            scrScriptProcessStartEntry(task->script, 0);
            next = SAVELOAD_STATE_PROMPT;
        } else if (mode == 4) {
            g_saveLoadThread = 1;
            scrScriptProcessStartEntry(task->script, 3);
            next = SAVELOAD_STATE_PROMPT;
        } else {
            g_saveLoadThread = 1;
            next = SAVELOAD_STATE_DONE_B;
        }
        break;
    }
    case SAVELOAD_STATE_PROMPT:
        saveLoadClearFlags();
        buttonHelpSetPreset(0xE6);
        if (DAT_0043e313 == 0) {
            FUN_002898e4();
            FUN_00289880();
            DAT_0043e313 = 1;
        }
        if (scrRunOpcodesStub(task->script) != 2)
            return 0;
        gameDataBlocksAddFlags(1);
        gameDataFlagsSetBits(1);
        gameDataFlagsSet(1);
        scrScriptProcessStartEntry(task->script, 1);
        next = SAVELOAD_STATE_WAIT_ANSWER;
        break;
    case SAVELOAD_STATE_WAIT_ANSWER:
        buttonHelpSetPreset(0xE7);
        scrRunOpcodesStub(task->script);
        FUN_00223898(task, 1);
        next = SAVELOAD_STATE_RUN;
        break;
    case SAVELOAD_STATE_RUN:
        scrRunOpcodesStub(task->script);
        if (messageMainIsWindowActive() != 0)
            DAT_0043e312 = 1;
        if (task->request != 0) {
            s32 request = task->request;
            WindowStatusResult result = FUN_002c40f8(&request, 1, 0, 0, 0);
            if ((s32)result.code < 0)
                FUN_002c526c(result.code);
            if ((result.code & 0x3FF) == 0x3FE)
                return 0;
        }
        FUN_002e2f14(task);
        buttonHelpSetPreset(0xE6);
        saveLoadClearFlags();
        messageMainFinishWindow();
        DAT_0043e312 = 0;
        if (DAT_0043e311 != 0) {
            scrScriptProcessStartEntry(task->script, 2);
            next = SAVELOAD_STATE_DONE_A;
        } else {
            scrScriptProcessStartEntry(task->script, 5);
            next = SAVELOAD_STATE_CANCEL;
        }
        break;
    case SAVELOAD_STATE_DONE_A:
        if (scrRunOpcodesStub(task->script) != 2)
            return 0;
        return 1;
    case SAVELOAD_STATE_DONE_B:
        return 1;
    case SAVELOAD_STATE_CANCEL:
        saveLoadClearFlags();
        if (scrRunOpcodesStub(task->script) != 2)
            return 0;
        return 1;
    case SAVELOAD_STATE_RESTART:
        task->state = SAVELOAD_STATE_RUN;
        return 0;
    default:
        return 0;
    }
    task->state = next;
    return 0;
}

} /* extern "C" */
