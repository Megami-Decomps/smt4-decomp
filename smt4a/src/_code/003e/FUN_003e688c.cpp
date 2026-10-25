/* NON_MATCHING: The shared transition-to-cleanup block is placed after the load phase rather than the run phase. */
#include "battle/BtlMainAccess.h"
#include "battle/btlAIScript.h"
#include "script/scrScriptProcess.h"
#include "quest_center/qcCtrl.h"

struct BtlMainStateA;
extern "C" {
void asdMemFree(void *data);
void scrScriptProcessDestroy(void *process);
ScriptRunState *FUN_00275bc8(void *data, s32 mode);
void scrScriptProcessStartEntry(void *process, s32 entry);
void asdLoadFileAsyncSimple(const char *path, void **data, s32 mode);
s32 scrRunOpcodesStub(void *process);
s32 FUN_003efb18(BtlMainStateA *battle);
extern BtlAiScriptAocSystem *g_aocSystem;

/* Loads and executes a battle AI script, then releases both its process and file data. */
s32 FUN_003e688c(BtlAiScript *runner)
{
    switch (runner->unk0C) {
    case 0: // Idle until a script is requested.
        return 0;
    case 1:
        if (g_aocSystem->aiDemonId != -1) {
            aocQueueType1d(reinterpret_cast<u32>(g_aocSystem), g_aocSystem->aiDemonId, reinterpret_cast<u32>(&runner->data), reinterpret_cast<u32>(runner->path));
            g_aocSystem->aiDemonId = -1;
        } else {
            asdLoadFileAsyncSimple(runner->path, &runner->data, 0);
        }
        if (FUN_003efb18(btlGetMainState()) == 0) {
            runner->unk0C = 2;
        } else {
            runner->unk0C = 4;
        }
        break;
    case 2:
        if (runner->data == NULL) {
            return 0;
        }
        runner->process = FUN_00275bc8(runner->data, 0);
        ((ScriptRunState *)runner->process)->mode = 1;
        scrScriptProcessStartEntry(runner->process, 0);
        runner->unk0C = 3;
        break;
    case 3:
        if (scrRunOpcodesStub(runner->process) != 2) {
            return 0;
        }
        runner->unk0C = 4;
        break;
    case 4:
        if (runner->process != NULL) {
            scrScriptProcessDestroy(runner->process);
            runner->process = NULL;
        }
        if (runner->data != NULL) {
            asdMemFree(runner->data);
            runner->data = NULL;
        }
        break;
    }
    return 0;
}
}
