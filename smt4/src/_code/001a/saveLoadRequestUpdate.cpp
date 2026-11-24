#include "nn/Result.h"
#include "common.h"
#include "sys/ResultReport.h"
#include "sys/HandleWait.h"
#include "code/Code001c_Smt4.h"

#include "script/scrScriptProcess.h"
#include "gamedata/SaveLoadThreadRequest.h"
#include "shard/Sys43e310.h"
#include "AsdSDK/AsdMemAlloc.h"

enum EventState {
    EVENT_START = 0,
    EVENT_INTRO_DONE = 3,
    EVENT_FADE = 6,
    EVENT_END = 7,
    EVENT_NO_SCRIPT = 9,
    EVENT_SCRIPT = 10
};

extern "C" {
s32 FUN_00223898(SaveLoadThreadRequest *request, s32 kind);
s32 scrScriptProcessStartEntry(void *process, s32 entry);
void gameDataFlagsClear(s32 flag);
void gameDataFlagsClearAndRefresh(s32 flag);
void gameDataRemoveHomeButtonHold(s32 flag);
void FUN_002e2f14(SaveLoadThreadRequest *request);
nn::Result extSaveDataRecreateOnError(nn::Result result, u64 id, u32 directories, u32 files, const char *iconPath);

/* Steps the event once per frame; returns 1 when it is finished and released. */
u32 saveLoadRequestUpdate(void)
{
    SaveLoadThreadRequest *request = g_saveLoadThread.request;
    if (request == NULL)
        return 1;
    if (request->messageFile == NULL || request->modelFile == NULL)
        return 0;

    if (request->script == NULL) {
        ScriptProcess *process = scrScriptProcessCreate(request->messageFile, request->modelFile);
        request->script = process;
        process->mode = 2;
    }

    switch (request->step) {
    case EVENT_START:
        if (g_saveLoadThread.request->file == 1) {
            nn::Result result = FUN_001c0954(0xFF2AE);
            extSaveDataRecreateOnError(result, 0xFF2AE, 6, 0, g_saveLoadThread.iconPath);
        }
        /* fall through */
    case EVENT_INTRO_DONE:
        FUN_00223898(request, request->kind);
        request->step = EVENT_FADE;
        break;
    case EVENT_FADE: {
        bool fading = false;
        if (request->thread.handle != 0) {
            s32 result = handleWait(request->thread.handle, 0);
            fading = nnResultIsNotTimeout(result) != 1;
        }
        if (fading)
            break;
        FUN_002e2f14(request);
        if (g_saveLoadThread.unk01 != 0) {
            request->step = EVENT_END;
            break;
        }
        if (g_saveLoadThread.scriptEntry != -1) {
            gameDataRemoveHomeButtonHold(1);
            gameDataFlagsClearAndRefresh(1);
            gameDataFlagsClear(1);
            request->step = EVENT_SCRIPT;
            scrScriptProcessStartEntry(request->script, g_saveLoadThread.scriptEntry);
            break;
        }
        request->step = EVENT_NO_SCRIPT;
        break;
    }
    case EVENT_SCRIPT:
        if (scrRunOpcodesStub(request->script) == 2) {
            request->step = EVENT_NO_SCRIPT;
        }
        break;
    case EVENT_NO_SCRIPT:
        request->step = EVENT_END;
        break;
    case EVENT_END:
        if (g_saveLoadThread.request->file == 1)
            FUN_00103c9c();
        request = g_saveLoadThread.request;
        if (request->script != NULL) {
            scrScriptProcessDestroy(request->script);
            request->script = NULL;
        }
        if (request->messageFile != NULL) {
            asdMemFree(request->messageFile);
            request->messageFile = NULL;
        }
        if (request->modelFile != NULL) {
            asdMemFree(request->modelFile);
            request->modelFile = NULL;
        }
        if (g_saveLoadThread.request != NULL)
            asdMemFree(g_saveLoadThread.request);
        g_saveLoadThread.request = NULL;
        return 1;
    }
    request->confirmFrames++;
    return 0;
}

} /* extern "C" */
