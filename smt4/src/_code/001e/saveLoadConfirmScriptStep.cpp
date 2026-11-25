/* NON_MATCHING: 77 lines: the step stores of every case cross-jump into the store after the content-state switch in retail (here into the prompt case's), and retail materialises the wait's not-timed-out flag (movne/moveq, teq #1) where armcc branches on the compare. The cases are written in retail's block order (12, 9, 7 after the run step). */
#include "common.h"
#include "gamedata/SaveLoadThreadRequest.h"
#include "gamedata/GameDataAccess_Smt4.h"
#include "script/scrScriptProcess.h"
#include "script/ScriptVm.h"
#include "shard/Sys43e310.h"
#include "sys/HandleWait.h"
#include "nn/fnd/TimeSpan.h"
#include "classes/WindowStatus.h"
#include "shard/GameDataBlocks.h"
#include "script/ScriptEntry.h"

/* SaveLoadThreadRequest.step */
enum {
    SAVELOAD_STEP_START = 0,     /* pick the script entry by the content state */
    SAVELOAD_STEP_PROMPT = 4,
    SAVELOAD_STEP_ANSWER = 5,
    SAVELOAD_STEP_RUN = 6,
    SAVELOAD_STEP_RESULT = 7,    /* the result script (entry 2) runs until it ends */
    SAVELOAD_STEP_SKIP = 8,      /* nothing to confirm */
    SAVELOAD_STEP_CLOSE = 9,     /* the closing script (entry 4 or 5) runs until it ends */
    SAVELOAD_STEP_RESTART = 12
};

extern "C" {
s32 FUN_002103dc(s32 query, s32 first, s32 second);
void FUN_00223898(SaveLoadThreadRequest *request, s32 kind);
void FUN_002e2f14(SaveLoadThreadRequest *request);
void gameDataFlagsSet(u32 mask);
void gameDataRemoveHomeButtonHold(u32 mask);
void commonBgStopChildAndBeginTransition(void);
void commonBgAcquire(void);
void messageMainFinishWindow(void);
s32 messageMainIsWindowActive(void);
void buttonHelpSetPreset(s32 preset);

/* Releases the home-button hold and clears the transient game data flags. */
static __inline void saveLoadClearFlags(void)
{
    gameDataRemoveHomeButtonHold(1);
    gameDataFlagsClearAndRefresh(1);
    gameDataFlagsClear(1);
}

/* nn::os::WaitObject::WaitOne, the SDK's header inline: waits up to `timeout` on the handle (a failed wait
 * is reported); false when the wait timed out. */
static __inline bool waitObjectWaitOne(u32 handle, nn::fnd::TimeSpan timeout)
{
    return nnResultIsNotTimeout(handleWait(handle, timeout.nanoseconds));
}

/* Steps the save confirmation script of the running save request (start the script by the content
 * state, show the prompt, run the save thread, finish); returns 1 when it has finished. */
u32 saveLoadConfirmScriptStep(void)
{
    SaveLoadThreadRequest *request = g_saveLoadThread.request;
    if (request->messageFile == NULL || request->modelFile == NULL)
        return 0;
    if (request->script == NULL) {
        request->script = scrScriptProcessCreate(request->messageFile, request->modelFile);
        request->script->mode = 2;
    }
    switch (request->step) {
    case SAVELOAD_STEP_START:
        switch (FUN_002103dc(6, 0, 0)) {
        case 0:
            g_saveLoadThread.unk00 = 0;
            scrScriptProcessStartEntry(request->script, 4);
            request->step = SAVELOAD_STEP_CLOSE;
            break;
        case 3:
            g_saveLoadThread.unk00 = 1;
            scrScriptProcessStartEntry(request->script, 0);
            request->step = SAVELOAD_STEP_PROMPT;
            break;
        case 4:
            g_saveLoadThread.unk00 = 1;
            scrScriptProcessStartEntry(request->script, 3);
            request->step = SAVELOAD_STEP_PROMPT;
            break;
        default:
            g_saveLoadThread.unk00 = 1;
            request->step = SAVELOAD_STEP_SKIP;
            break;
        }
        break;
    case SAVELOAD_STEP_PROMPT:
        saveLoadClearFlags();
        buttonHelpSetPreset(230);
        if (g_saveLoadThread.unk03 == 0) {
            commonBgAcquire();
            commonBgStopChildAndBeginTransition();
            g_saveLoadThread.unk03 = 1;
        }
        if (scrRunOpcodesStub(request->script) != 2)
            break;
        gameDataBlocksAddFlags(1);
        gameDataFlagsSetBits(1);
        gameDataFlagsSet(1);
        scrScriptProcessStartEntry(request->script, 1);
        request->step = SAVELOAD_STEP_ANSWER;
        break;
    case SAVELOAD_STEP_ANSWER:
        buttonHelpSetPreset(231);
        scrRunOpcodesStub(request->script);
        FUN_00223898(request, 1);
        request->step = SAVELOAD_STEP_RUN;
        break;
    case SAVELOAD_STEP_RUN:
        scrRunOpcodesStub(request->script);
        if (messageMainIsWindowActive() != 0)
            g_saveLoadThread.unk02 = 1;
        if (request->thread.handle != 0 && !waitObjectWaitOne(request->thread.handle, nn::fnd::TimeSpan(0)))
            break;
        FUN_002e2f14(request);
        buttonHelpSetPreset(230);
        if (g_saveLoadThread.unk01 != 0) {
            saveLoadClearFlags();
            messageMainFinishWindow();
            g_saveLoadThread.unk02 = 0;
            scrScriptProcessStartEntry(request->script, 2);
            request->step = SAVELOAD_STEP_RESULT;
        } else {
            saveLoadClearFlags();
            messageMainFinishWindow();
            g_saveLoadThread.unk02 = 0;
            scrScriptProcessStartEntry(request->script, 5);
            request->step = SAVELOAD_STEP_CLOSE;
        }
        break;
    case SAVELOAD_STEP_RESTART:
        request->step = SAVELOAD_STEP_RUN;
        break;
    case SAVELOAD_STEP_CLOSE:
        saveLoadClearFlags();
        if (scrRunOpcodesStub(request->script) == 2)
            return 1;
        break;
    case SAVELOAD_STEP_RESULT:
        if (scrRunOpcodesStub(request->script) == 2)
            return 1;
        break;
    case SAVELOAD_STEP_SKIP:
        return 1;
    }
    return 0;
}

} /* extern "C" */
