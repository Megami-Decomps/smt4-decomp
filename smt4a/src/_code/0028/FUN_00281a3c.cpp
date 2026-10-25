/* NON_MATCHING: same code, but armcc loads the process fields in a different order and allocates other registers. */
#include "script/ScriptVm.h"

extern "C" {

/* Script opcode: pushes the float variable the instruction's operand indexes. */
u32 FUN_00281a3c(ScriptVmProcess *process)
{
    scriptVmPush(process, SCRIPT_VM_TAG_FLOAT, process->floatVariables[process->code[process->pc].decoded.operand].u);
    process->pc++;
    return 1;
}

} /* extern "C" */
