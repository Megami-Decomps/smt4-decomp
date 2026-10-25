/* NON_MATCHING: the four-case switch compiles to a compare chain here; retail uses a jump table. */
#include "script/ScriptVm.h"

extern "C" {

/* Script opcode: negates the value on top of the stack (through its variable for the variable tags). */
u32 FUN_002376c0(ScriptVmProcess *process)
{
    s32 top = process->depth - 1;

    switch (process->tags[top]) {
    case SCRIPT_VM_TAG_INT:
        process->values[top].i = -process->values[top].i;
        break;
    case SCRIPT_VM_TAG_FLOAT:
        process->values[top].f = -process->values[top].f;
        break;
    case SCRIPT_VM_TAG_INT_VAR:
        g_scrIntVars[process->values[top].u] = -g_scrIntVars[process->values[top].u];
        break;
    case SCRIPT_VM_TAG_FLOAT_VAR:
        g_scrFloatVars[process->values[top].u] = -g_scrFloatVars[process->values[top].u];
        break;
    }
    process->pc++;
    return 1;
}

}
