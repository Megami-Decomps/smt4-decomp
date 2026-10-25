#include "script/ScriptVm.h"

extern "C" {

/* Script opcode: negates the value on top of the stack (through its variable for the variable tags). */
u32 scrOpNegate(ScriptVmProcess *process)
{
    switch (process->tags[process->depth - 1]) {
    case SCRIPT_VM_TAG_INT:
        process->values[process->depth - 1].i = -process->values[process->depth - 1].i;
        break;
    case SCRIPT_VM_TAG_FLOAT:
        process->values[process->depth - 1].f = -process->values[process->depth - 1].f;
        break;
    case SCRIPT_VM_TAG_INT_VAR:
        g_scrIntVars[process->values[process->depth - 1].u] = -g_scrIntVars[process->values[process->depth - 1].u];
        break;
    case SCRIPT_VM_TAG_FLOAT_VAR:
        g_scrFloatVars[process->values[process->depth - 1].u] = -g_scrFloatVars[process->values[process->depth - 1].u];
        break;
        case SCRIPT_VM_TAG_RETURN_ADDRESS:
        break;
    }
    process->pc++;
    return 1;
}

}
