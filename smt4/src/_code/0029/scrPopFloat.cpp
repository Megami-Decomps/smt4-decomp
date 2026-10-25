/* NON_MATCHING: the four-way switch on the value type is compiled as a compare chain; retail uses a jump table (and shares the int-to-float conversion of cases 0 and 2, loading 0.0f first). */
#include "script/ScriptVm.h"

extern "C" {

/* Pops the top value of the script stack and returns it as a float, converting int values and
 * resolving variable references. */
f32 scrPopFloat(ScriptVmProcess *process)
{
    u8 *tags = process->tags;
    s32 slot = --process->depth;

    switch (tags[slot]) {
    case SCRIPT_VM_TAG_INT:
        return (f32)process->values[slot].i;
    case SCRIPT_VM_TAG_FLOAT:
        return process->values[slot].f;
    case SCRIPT_VM_TAG_INT_VAR:
        return (f32)g_scrIntVars[process->values[slot].i];
    case SCRIPT_VM_TAG_FLOAT_VAR:
        return g_scrFloatVars[process->values[slot].i];
    default:
        return 0.0f;
    }
}

} /* extern "C" */
