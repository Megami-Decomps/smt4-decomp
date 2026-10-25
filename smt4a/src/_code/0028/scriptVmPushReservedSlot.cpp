#include "script/ScriptVm.h"

extern "C" {

/* Script opcode: pushes a copy of the last stack slot (tag and value) on the stack. */
u32 scriptVmPushReservedSlot(ScriptVmProcess *process)
{
    process->tags[process->depth] = process->tags[SCRIPT_VM_RESULT_SLOT];
    ScriptVmValue *destination = &process->values[process->depth];
    *destination = process->values[SCRIPT_VM_RESULT_SLOT];
    process->depth++;
    process->pc++;
    return 1;
}

}
