#include "battle/btlAIScript.h"

extern "C" {

void asdMemFree(void *block);
void jobStop(u32 job, s32 arg);
void *jobGetWork(u32 job);
void scrScriptProcessDestroy(void *process);

extern BtlAiScript *g_btlAiScript;

/* Releases the script runner and stops the job that owns it. */
void btlAiScriptDestroy(u32 job)
{
    BtlAiScriptOwnerA *owner = (BtlAiScriptOwnerA *)jobGetWork(job);
    BtlAiScript *script = g_btlAiScript;

    if (g_btlAiScript != NULL) {
        if (script->process != NULL) {
            scrScriptProcessDestroy(script->process);
            script->process = NULL;
        }
        if (script->data != NULL) {
            asdMemFree(script->data);
            script->data = NULL;
        }
        asdMemFree(g_btlAiScript);
        g_btlAiScript = NULL;
    }
    jobStop(owner->job, 0);
}

} /* extern "C" */
