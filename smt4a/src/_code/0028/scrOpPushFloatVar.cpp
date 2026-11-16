#include "script/ScriptVm.h"

extern "C" {

/* Script opcode: pushes the float variable the instruction's operand indexes. */
u32 scrOpPushFloatVar(ScriptVmProcess *process)
{
    scriptVmPushFloat(process, process->floatVariables[process->code[process->pc].decoded.operand].f);
    process->pc++;
    return 1;
}

} /* extern "C" */
