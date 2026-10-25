/* NON_MATCHING: instruction scheduling only: retail loads pc, code and depth separately; armcc here merges pc and depth into one ldm. */
#include "script/ScriptVm.h"

extern "C" {

/* Script command: pushes the integer variable named by the current instruction and steps on. */
u32 FUN_001c1e84(ScriptVmProcess *process)
{
    scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrIntVars[process->code[process->pc].decoded.operand]);
    process->pc++;
    return 1;
}

} /* extern "C" */
