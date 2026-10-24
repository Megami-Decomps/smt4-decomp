/* NON_MATCHING: the four-case switch compiles to a compare chain here; retail uses a jump table. */
#include "script/ScriptVm.h"

extern "C" {

extern s32 g_scrIntVars[];
extern f32 g_scrFloatVars[];

/* Script opcode: negates the value on top of the stack (through its variable for the variable tags). */
u32 FUN_002376c0(ScriptVmProcess *process)
{
    s32 top = process->depth - 1;

    switch (process->tags[top]) {
    case SCRIPT_VM_TAG_INT:
        process->values[top] = -(s32)process->values[top];
        break;
    case SCRIPT_VM_TAG_FLOAT:
        ((f32 *)process->values)[top] = -((f32 *)process->values)[top];
        break;
    case SCRIPT_VM_TAG_INT_VAR:
        g_scrIntVars[process->values[top]] = -g_scrIntVars[process->values[top]];
        break;
    case SCRIPT_VM_TAG_FLOAT_VAR:
        g_scrFloatVars[process->values[top]] = -g_scrFloatVars[process->values[top]];
        break;
    }
    process->pc++;
    return 1;
}

}
