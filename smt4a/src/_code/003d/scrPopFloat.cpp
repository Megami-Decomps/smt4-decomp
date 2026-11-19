#include "script/ScriptVm.h"

extern "C" {

/* Pops the top value of the script stack and returns it as a float, converting int values and
 * resolving variable references. */
f32 scrPopFloat(ScriptProcess *process)
{
    --process->depth;
    f32 result = 0.0f;

    switch (process->tags[process->depth]) {
    case SCRIPT_VM_TAG_INT:
        result = (f32)process->values[process->depth].i;
        break;
    case SCRIPT_VM_TAG_FLOAT:
        result = process->values[process->depth].f;
        break;
    case SCRIPT_VM_TAG_INT_VAR:
        result = (f32)g_scrIntVars[process->values[process->depth].i];
        break;
    case SCRIPT_VM_TAG_FLOAT_VAR:
        result = g_scrFloatVars[process->values[process->depth].i];
        break;
    case 4:
        break;
    }
    return result;
}

} /* extern "C" */
