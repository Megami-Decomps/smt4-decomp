/* Script op: pops a float from the VM stack and stores it into the variable slot named by the current instruction's operand. */
#include "script/ScriptVm.h"

extern "C" {

s32 scrOpStoreFloatVar(ScriptVmProcess *process)
{
    f32 value = scrPopFloat(process);

    process->floatVariables[process->code[process->pc].decoded.operand].f = value;
    process->pc++;
    return 1;
}

} /* extern "C" */
