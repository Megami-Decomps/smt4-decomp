/* NON_MATCHING: event-script state machine; draft shape, fall-through between cases 0/3/6 and the shared tail is written as in the compiler's switch, register allocation not compared */
#include "nn/Result.h"
#include "common.h"
#include "sys/ResultReport.h"

/* The event being played: its resources, state and script process. */
struct EventRequest {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 file;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 state;
    /* 0x10 */ s32 frames;
    /* 0x14 */ u8 unk14[0x30];
    /* 0x44 */ s32 fadeId;
    /* 0x48 */ u8 unk48[8];
    /* 0x50 */ void *messageFile;
    /* 0x54 */ void *modelFile;
    /* 0x58 */ void *scriptProcess;
};

/* The script process object (its state word at +0x108). */
struct ScriptProcessState {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ u32 state;
};

/* The event player's global block at 0x43e310. */
struct EventPlayerState {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 skipScript;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ EventRequest *request;
    /* 0x08 */ s32 unk08;
    /* 0x0C */ s32 scriptEntry;     /* -1: none */
};

enum EventState {
    EVENT_START = 0,
    EVENT_INTRO_DONE = 3,
    EVENT_FADE = 6,
    EVENT_END = 7,
    EVENT_NO_SCRIPT = 9,
    EVENT_SCRIPT = 10
};

extern "C" {
extern EventPlayerState g_saveLoadThread;

s32 FUN_00223898(EventRequest *request, s32 kind);
s32 scrScriptProcessStartEntry(void *process, s32 entry);
ScriptProcessState *FUN_00297060(void);
void scrScriptProcessDestroy(void *process);
void FUN_002c40f8(u32 *result, s32 *request, s32 a, s32 b, s32 c, s32 d);
void asdMemFree(void *block);
void gameDataFlagsClear(s32 flag);
void gameDataFlagsClearAndRefresh(s32 flag);
void gameDataRemoveHomeButtonHold(s32 flag);
void FUN_002e2f14(EventRequest *request);
void FUN_00309a60(u32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 scrRunOpcodesStub(void *process);
u32 FUN_001c0954(u32 id, u32 arg);

/* Steps the event once per frame; returns 1 when it is finished and released. */
u32 FUN_001a1d08(void)
{
    EventRequest *request = g_saveLoadThread.request;
    if (request == NULL)
        return 1;
    if (request->messageFile == NULL || request->modelFile == NULL)
        return 0;

    if (request->scriptProcess == NULL) {
        ScriptProcessState *process = FUN_00297060();
        request->scriptProcess = process;
        process->state = 2;
    }

    u32 next;
    switch (request->state) {
    case EVENT_START:
        if (request->file == 1) {
            u32 sound = FUN_001c0954(0xFF2AE, 0);
            FUN_00309a60(sound, 6, 0xFF2AE, 0, 6, 0);
        }
        /* fall through */
    case EVENT_INTRO_DONE:
        FUN_00223898(request, request->kind);
        next = EVENT_FADE;
        break;
    default:
        request->frames++;
        return 0;
    case EVENT_FADE:
        if (request->fadeId != 0) {
            u32 result;
            s32 id = request->fadeId;
            FUN_002c40f8(&result, &id, 1, 0, 0, 0);
            if ((s32)nnResultIsFailure(result))
                FUN_002c526c(result);
            if ((result & 0x3FF) == 0x3FE) {
                request->frames++;
                return 0;
            }
        }
        FUN_002e2f14(request);
        if (g_saveLoadThread.skipScript == 0) {
            if (g_saveLoadThread.scriptEntry != -1) {
                gameDataRemoveHomeButtonHold(1);
                gameDataFlagsClearAndRefresh(1);
                gameDataFlagsClear(1);
                request->state = EVENT_SCRIPT;
                scrScriptProcessStartEntry(request->scriptProcess, g_saveLoadThread.scriptEntry);
                request->frames++;
                return 0;
            }
            next = EVENT_NO_SCRIPT;
        } else {
            next = EVENT_END;
        }
        break;
    case EVENT_END:
        if (g_saveLoadThread.request->file == 1)
            FUN_00103c9c();
        request = g_saveLoadThread.request;
        if (request->scriptProcess != NULL) {
            scrScriptProcessDestroy(request->scriptProcess);
            request->scriptProcess = NULL;
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
    case EVENT_NO_SCRIPT:
        request->state = EVENT_END;
        request->frames++;
        return 0;
    case EVENT_SCRIPT:
        if (scrRunOpcodesStub(request->scriptProcess) != 2) {
            request->frames++;
            return 0;
        }
        next = EVENT_NO_SCRIPT;
        break;
    }
    request->state = next;
    request->frames++;
    return 0;
}

} /* extern "C" */
