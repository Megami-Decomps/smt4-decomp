/* NON_MATCHING: type-array pointer recovers address timing; ldrb base/index register order remains reversed. */
#include "script/ScriptVm.h"

extern "C" {

/* Pops the top value of the script stack and returns it as an int, converting float values and
 * resolving variable references. */
s32 scrPopInt(ScriptVmProcess *process)
{
    const u8 *tags = process->tags;
    s32 slot = --process->depth;
    switch (tags[slot]) {
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
