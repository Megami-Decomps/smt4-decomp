#include "script/ScriptVm.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Returns the script's argument `index` (0 = most recently pushed) as an int, converting float
 * values and resolving variable references. */
s32 scrGetArg(s32 index)
{
    ScriptVmProcess *process = g_scrContext.active;
    s32 slot = process->depth - index - 1;

    switch (process->tags[slot]) {
    case SCRIPT_VM_TAG_INT:
    case SCRIPT_VM_TAG_RETURN_ADDRESS:
        return process->values[slot].i;
    case SCRIPT_VM_TAG_FLOAT:
        return (s32)process->values[slot].f;
    case SCRIPT_VM_TAG_INT_VAR:
        return g_scrIntVars[process->values[slot].i];
    case SCRIPT_VM_TAG_FLOAT_VAR:
        return (s32)g_scrFloatVars[process->values[slot].i];
    default:
        return 0;
    }
}

} /* extern "C" */
