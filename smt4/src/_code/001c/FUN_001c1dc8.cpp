#include "script/ScriptVm.h"

/* Script opcode: pushes the float variable the operand names. */
extern "C" s32 FUN_001c1dc8(ScriptVmProcess *process)
{
    scriptVmPushFloat(process, g_scrFloatVars[process->code[process->pc].decoded.operand]);
    process->pc++;
    return 1;
}
