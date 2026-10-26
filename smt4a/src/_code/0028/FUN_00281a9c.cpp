#include "script/ScriptVm.h"

extern "C" {

/* Script opcode: pushes the integer variable the instruction's operand indexes. */
u32 FUN_00281a9c(ScriptVmProcess *process)
{
    scriptVmPush(process, SCRIPT_VM_TAG_INT, process->intVariables[process->code[process->pc].decoded.operand].u);
    process->pc++;
    return 1;
}

}
