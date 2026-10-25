#include "script/ScriptVm.h"

extern "C" {

/* Script command: stores scrPopInt's result into the variable named by the instruction's argument. */
u32 scrOpStoreIntVar(ScriptVmProcess *process)
{
    s32 value = scrPopInt(process);

    process->intVariables[process->code[process->pc].decoded.operand].i = value;
    process->pc = process->pc + 1;
    return 1;
}

} /* extern "C" */
