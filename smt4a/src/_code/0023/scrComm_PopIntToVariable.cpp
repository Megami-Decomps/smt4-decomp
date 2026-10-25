#include "script/ScriptVm.h"

extern "C" {

/* Script command: pops an integer into the script variable named by the current instruction; returns 1. */
u32 scrComm_PopIntToVariable(ScriptVmProcess *process)
{
    s32 value = scrPopInt(process);

    g_scrIntVars[process->code[process->pc].decoded.operand] = value;
    process->pc++;
    return 1;
}

} /* extern "C" */
