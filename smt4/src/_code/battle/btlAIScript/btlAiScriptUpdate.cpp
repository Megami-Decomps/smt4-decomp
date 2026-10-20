#include "battle/btlAIScript.h"

extern "C" {

void *jobGetWork(u32 job);
void FUN_003356c0(void);

extern BtlAiScript *g_btlAiScript;

/* Runs the script runner's per-frame step if one exists. */
void btlAiScriptUpdate(u32 job)
{
    jobGetWork(job);
    if (g_btlAiScript != NULL) {
        FUN_003356c0();
    }
}

} /* extern "C" */
