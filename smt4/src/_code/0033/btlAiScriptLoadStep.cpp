#include "common.h"
#include "addon/AocSystem.h"
#include "script/scrScriptProcess.h"
#include "script/ScriptEntry.h"

extern "C" {

typedef struct BtlAiScriptLoader {
    /* 0x00 */ void *file;
    /* 0x04 */ ScriptProcess *process;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ s32 step;
    /* 0x10 */ u8 request[1];
} BtlAiScriptLoader;

void aocQueueType1d(AocSystem *system, s32 script, BtlAiScriptLoader *loader, u8 *request);
void asdLoadFileAsyncSimple(u8 *request, BtlAiScriptLoader *loader, s32 flags);
void asdMemFree(void *block);

/* Steps the battle AI script: load the file (or the queued add-on script), start it, run it, free it. */
s32 btlAiScriptLoadStep(BtlAiScriptLoader *loader)
{
    switch (loader->step) {
    case 0: // idle
        break;
    case 1:
        if (g_aocSystem->aiDemonId != -1) {
            aocQueueType1d(g_aocSystem, g_aocSystem->aiDemonId, loader, loader->request);
            g_aocSystem->aiDemonId = -1;
        } else {
            asdLoadFileAsyncSimple(loader->request, loader, 0);
        }
        loader->step = 2;
        break;
    case 2:
        if (loader->file != NULL) {
            ScriptProcess *process = scrScriptProcessCreate(loader->file, 0);

            loader->process = process;
            process->mode = 1;
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
