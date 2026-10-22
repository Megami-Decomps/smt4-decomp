/* NON_MATCHING: retail builds the stacked task arguments through ip and keeps g_btlAiScript's address in r5 (20-byte frame); this allocates r5/r6 with a 16-byte frame */
#include "battle/btlAIScript.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

void *asdMemAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void asdMemFree(void *block);
void scrScriptProcessDestroy(void *process);
u32 taskCreateDraw(const char *name, s32 priority, s32 a, s32 b, void (*update)(u32), void (*draw)(u32), void *owner, u32 id);
void btlAiScriptUpdate(u32 job);
void btlAiScriptDestroy(u32 job);

extern BtlAiScript *g_btlAiScript;

/* Releases the runner's process and data and clears its state. */
static void btlAiScriptReset(void)
{
    BtlAiScript *script = g_btlAiScript;

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

/* Allocates the battle AI script runner, starts its job and resets the runner. */
void FUN_0021ae40(BtlAiScriptOwner *owner)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlAIScript.cpp", 337);
    g_btlAiScript = (BtlAiScript *)asdMemAlloc(0x100, 0x100, 0, 0x90, 1);
    owner->job = taskCreateDraw("btlAIScript Calc", 2, 0, 0, btlAiScriptUpdate, btlAiScriptDestroy, owner, owner->id);
    btlAiScriptReset();
}

} /* extern "C" */
