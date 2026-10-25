/* NON_MATCHING: same pushes; retail evaluates the operand with fewer live registers (no push/pop, constants in r3/r2), this build allocates r4/r5 for the address arithmetic. */
#include "script/ScriptVm.h"

/* Script opcode: pushes the float variable the operand names. */
extern "C" s32 FUN_0025ee48(ScriptVmProcess *process)
{
    scriptVmPush(process, SCRIPT_VM_TAG_FLOAT, *reinterpret_cast<u32 *>(&g_scrFloatVars[process->code[process->pc].decoded.operand]));
    process->pc++;
    return 1;
}
