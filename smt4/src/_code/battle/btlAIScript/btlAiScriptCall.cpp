#include "battle/btlAIScript.h"

extern "C" {

void btlAiScriptLoadFile(BtlAiScript *script, u32 arg);

extern BtlAiScript *g_btlAiScript;

/* Forwards a call to the script runner if one exists. */
void btlAiScriptCall(u32 arg)
{
    if (g_btlAiScript != NULL) {
        btlAiScriptLoadFile(g_btlAiScript, arg);
    }
}

} /* extern "C" */
