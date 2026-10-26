#include "script/ScriptVm.h"

extern "C" {

/* Script opcode: pushes the float immediate stored in the instruction after this one. */
u32 FUN_001aa198(ScriptVmProcess *process)
{
    process->pc++;
    scriptVmPush(process, SCRIPT_VM_TAG_FLOAT, process->code[process->pc].word);
    process->pc++;
    return 1;
}

} /* extern "C" */
