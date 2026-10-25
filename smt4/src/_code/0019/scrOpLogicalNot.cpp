#include "script/ScriptVm.h"

extern "C" {

/* Script command: logical not; pops a number and pushes 1 when it is zero, else 0. */
u32 scrOpLogicalNot(ScriptVmProcess *process)
{
    s32 result;

    switch (process->tags[process->depth - 1]) {
    case SCRIPT_VM_TAG_INT:
    case SCRIPT_VM_TAG_INT_VAR:
        result = scrPopInt(process) == 0;
        process->tags[process->depth] = SCRIPT_VM_TAG_INT;
        process->values[process->depth].i = result;
        process->depth++;
        break;
    case SCRIPT_VM_TAG_FLOAT:
    case SCRIPT_VM_TAG_FLOAT_VAR:
        result = scrPopFloat(process) == 0.0f;
        process->tags[process->depth] = SCRIPT_VM_TAG_INT;
        process->values[process->depth].i = result;
        process->depth++;
        break;
    case SCRIPT_VM_TAG_RETURN_ADDRESS:
        break;
    }
    process->pc++;
    return 1;
}

} /* extern "C" */
