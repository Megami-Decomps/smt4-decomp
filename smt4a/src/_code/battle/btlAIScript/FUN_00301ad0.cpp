/* NON_MATCHING: retail builds the taskCreateDraw stack arguments through ip and keeps the global in
 * r5 with a 20-byte frame; armcc here saves r6 instead */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "battle/btlAIScript.h"

extern "C" {

extern BtlAiScript *g_btlAiScript;

void *asdMemoryAllocTracked(s32 heap, s32 alignmentClass, s32 flags, u32 size, s32 fromFront);
void asdMemFree(void *block);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc update, AsdProcFunc end, u32 work, void *owner);
void scrScriptProcessDestroy(void *process);
void btlAiScriptUpdate(u32 job);
void btlAiScriptDestroy(u32 job);

/* Drops the runner's script process and data. */
static void btlAiScriptReset(BtlAiScript *script)
{
    if (script->process != NULL) {
        scrScriptProcessDestroy(script->process);
        script->process = NULL;
    }
    if (script->data != NULL) {
        asdMemFree(script->data);
        script->data = NULL;
    }
    script->unk0C = 0;
}

/* Allocates the script runner, starts the job that runs it and resets its script state. */
void FUN_00301ad0(BtlAiScriptOwnerA *work)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlAIScript.cpp", 330);
    g_btlAiScript = (BtlAiScript *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(BtlAiScript), 1);
    work->job = taskCreateDraw((const s8 *)"btlAIScript Calc", 4, 0, 0,
                               (AsdProcUpdateFunc)btlAiScriptUpdate, btlAiScriptDestroy, (u32)work,
                               work->owner);
    btlAiScriptReset(g_btlAiScript);
}

} /* extern "C" */
