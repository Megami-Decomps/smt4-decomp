/* NON_MATCHING: instruction scheduling only: retail loads pc, code and depth separately; armcc here merges pc and depth into one ldm. */
#include "script/ScriptVm.h"

extern "C" {

extern u32 g_scrIntVars[];

/* Script command: pushes the integer variable named by the current instruction and steps on. */
u32 FUN_0025ef04(ScriptVmProcess *process)
{
    u32 value = g_scrIntVars[process->code[process->pc].decoded.operand];
    process->tags[process->depth] = SCRIPT_VM_TAG_INT;
    process->values[process->depth] = value;
    process->depth++;
    process->pc++;
    return 1;
}

} /* extern "C" */
