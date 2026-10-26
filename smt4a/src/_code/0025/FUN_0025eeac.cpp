#include "script/ScriptVm.h"

extern "C" {

/* Script opcode: pushes the instruction's 16-bit operand as an integer. */
u32 FUN_0025eeac(ScriptVmProcess *process)
{
    scriptVmPush(process, SCRIPT_VM_TAG_INT, process->code[process->pc].decoded.operand);
    process->pc++;
    return 1;
}

} /* extern "C" */
