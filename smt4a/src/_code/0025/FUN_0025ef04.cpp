#include "script/ScriptVm.h"

extern "C" {

/* Script command: pushes the integer variable named by the current instruction and steps on. */
u32 FUN_0025ef04(ScriptVmProcess *process)
{
    scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrIntVars[process->code[process->pc].decoded.operand]);
    process->pc++;
    return 1;
}

} /* extern "C" */
