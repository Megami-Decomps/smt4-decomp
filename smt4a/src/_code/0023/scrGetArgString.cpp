#include "script/ScriptVm.h"

extern "C" {

/* Returns the script's argument `index` (0 = most recently pushed) when it is a string, else 0. */
u32 scrGetArgString(s32 index)
{
    ScriptVmProcess *process = g_scrContext.active;
    s32 slot = process->depth - index - 1;

    return process->tags[slot] != SCRIPT_VM_TAG_STRING ? 0 : process->values[slot].u;
}

} /* extern "C" */
