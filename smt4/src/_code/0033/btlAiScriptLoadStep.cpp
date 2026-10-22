#include "common.h"

extern "C" {

/* The content system as the AI script loader sees it: a queued add-on script overrides the file. */
typedef struct AocScriptOverride {
    /* 0x000 */ u8 unk000[0x444];
    /* 0x444 */ s32 pendingScript; // -1 when none
} AocScriptOverride;

typedef struct BtlAiScriptLoader {
    /* 0x00 */ void *file;
    /* 0x04 */ void *process;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ s32 step;
    /* 0x10 */ u8 request[1];
} BtlAiScriptLoader;

typedef struct ScriptProcess {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ s32 running;
} ScriptProcess;

extern AocScriptOverride *g_aocSystem;

void aocQueueType1d(AocScriptOverride *system, s32 script, BtlAiScriptLoader *loader, u8 *request);
void asdLoadFileAsyncSimple(u8 *request, BtlAiScriptLoader *loader, s32 flags);
ScriptProcess *FUN_00297060(void *file, s32 arg);
void scrScriptProcessStartEntry(void *process, s32 index);
s32 scrRunOpcodesStub(void *process);
void scrScriptProcessDestroy(void *process);
void asdMemFree(void *block);

/* Steps the battle AI script: load the file (or the queued add-on script), start it, run it, free it. */
s32 btlAiScriptLoadStep(BtlAiScriptLoader *loader)
{
    switch (loader->step) {
    case 0: // idle
        break;
    case 1:
        if (g_aocSystem->pendingScript != -1) {
            aocQueueType1d(g_aocSystem, g_aocSystem->pendingScript, loader, loader->request);
            g_aocSystem->pendingScript = -1;
        } else {
            asdLoadFileAsyncSimple(loader->request, loader, 0);
        }
        loader->step = 2;
        break;
    case 2:
        if (loader->file != NULL) {
            ScriptProcess *process = FUN_00297060(loader->file, 0);

            loader->process = process;
            process->running = 1;
            scrScriptProcessStartEntry(loader->process, 0);
            loader->step = 3;
        }
        break;
    case 3:
        if (scrRunOpcodesStub(loader->process) == 2) {
            loader->step = 4;
        }
        break;
    case 4:
        if (loader->process != NULL) {
            scrScriptProcessDestroy(loader->process);
            loader->process = NULL;
        }
        if (loader->file != NULL) {
            asdMemFree(loader->file);
            loader->file = NULL;
        }
        break;
    }
    return 0;
}

} /* extern "C" */
