#include "script/ScriptVm.h"

extern "C" {

// Read a stack value relative to the top and convert it to a float.
f32 scriptReadStackValueAsFloat(s32 depth)
{
    ScriptVmProcess* process = g_scrContext.active;
    s32 index = process->depth - depth - 1;

    switch (process->tags[index]) {
    case SCRIPT_VM_TAG_INT:
    case SCRIPT_VM_TAG_RETURN_ADDRESS:
        return static_cast<f32>(process->values[index].i);
    case SCRIPT_VM_TAG_FLOAT:
        return process->values[index].f;
    case SCRIPT_VM_TAG_INT_VAR:
        return static_cast<f32>(g_scrIntVars[process->values[index].i]);
    case SCRIPT_VM_TAG_FLOAT_VAR:
        return g_scrFloatVars[process->values[index].i];
    default:
        return 0.0f;
    }
}
}
