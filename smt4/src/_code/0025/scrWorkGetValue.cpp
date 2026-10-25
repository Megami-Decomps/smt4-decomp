#include "script/ScriptVm.h"

extern "C" {

/* Returns work word `index` of the running script. */
u32 scrWorkGetValue(s32 index)
{
    ScriptVmProcess *process = g_scrContext.active;

    return process->workValues[index];
}

} /* extern "C" */
