/* NON_MATCHING: the type byte is loaded with the registers of the offset the other way round (retail [slot, types], built [types, slot]) */
#include "script/ScriptVm.h"

extern "C" {

/* Pops the top value of the script stack and returns it as an int, converting float values and
 * resolving variable references. */
s32 scrPopInt(ScriptVmProcess *process)
{
    s32 slot = --process->depth;
    u8 *tags = process->tags;

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
