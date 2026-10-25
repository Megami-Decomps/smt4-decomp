#include "script/ScriptVm.h"

extern "C" {

/* Stores `value` in work word `index` of the running script. */
void scrWorkSetValue(s32 index, u32 value)
{
    ScriptVmProcess *process = g_scrContext.active;

    process->workValues[index] = value;
}

} /* extern "C" */
