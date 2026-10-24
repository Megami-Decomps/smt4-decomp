/* NON_MATCHING: the four-case switch compiles to a compare chain here; retail uses a jump table. */
#include "script/ScriptVm.h"

extern "C" {

extern s32 g_scrIntVars[];
extern f32 g_scrFloatVars[];

/* Script opcode: negates the value on top of the stack (in place, or the variable it names), then steps past itself. */
u32 FUN_001aa070(ScriptVmProcess *process)
{
    switch (process->tags[process->depth - 1]) {
    case SCRIPT_VM_TAG_INT:
        process->values[process->depth - 1] = -(s32)process->values[process->depth - 1];
        break;
    case SCRIPT_VM_TAG_FLOAT:
        *(f32 *)&process->values[process->depth - 1] = -*(f32 *)&process->values[process->depth - 1];
        break;
    case SCRIPT_VM_TAG_INT_VAR:
        g_scrIntVars[process->values[process->depth - 1]] = -g_scrIntVars[process->values[process->depth - 1]];
        break;
    case SCRIPT_VM_TAG_FLOAT_VAR:
        g_scrFloatVars[process->values[process->depth - 1]] = -g_scrFloatVars[process->values[process->depth - 1]];
        break;
    }
    process->pc++;
    return 1;
}

} /* extern "C" */
