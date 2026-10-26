/* NON_MATCHING: jump table and shared conversions now match; the tag byte is loaded as [slot, tags] in retail but [tags, slot] here. */
#include "script/ScriptVm.h"

extern "C" {

/* Pops the top value of the script stack and returns it as a float, converting int values and
 * resolving variable references. */
f32 scrPopFloat(ScriptVmProcess *process)
{
    u8 *tags = process->tags;
    s32 slot = --process->depth;
    f32 result = 0.0f;

    switch (tags[slot]) {
    case SCRIPT_VM_TAG_INT:
        result = (f32)process->values[slot].i;
        break;
    case SCRIPT_VM_TAG_FLOAT:
        result = process->values[slot].f;
        break;
    case SCRIPT_VM_TAG_INT_VAR:
        result = (f32)g_scrIntVars[process->values[slot].i];
        break;
    case SCRIPT_VM_TAG_FLOAT_VAR:
        result = g_scrFloatVars[process->values[slot].i];
        break;
    case 4:
        break;
    }
    return result;
}

} /* extern "C" */
