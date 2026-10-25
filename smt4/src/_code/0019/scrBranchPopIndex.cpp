#include "script/ScriptVm.h"

extern "C" {

/* Pops an integer and jumps to the instruction after it; does nothing while the stack is empty. */
s32 scrBranchPopIndex(ScriptVmProcess *process)
{
    if (process->depth == 0) {
        return 0;
    }
    process->pc = scrPopInt(process) + 1;
    return 1;
}

} /* extern "C" */
