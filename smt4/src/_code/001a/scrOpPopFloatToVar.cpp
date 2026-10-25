#include "script/ScriptVm.h"

extern "C" {

/* Script command: pops a float into the variable the instruction's 16-bit operand names. */
u32 scrOpPopFloatToVar(ScriptVmProcess *process)
{
    f32 value = scrPopFloat(process);

    g_scrFloatVars[process->code[process->pc].decoded.operand] = value;
    process->pc++;
    return 1;
}

}
