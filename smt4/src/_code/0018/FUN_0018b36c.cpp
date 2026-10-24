#include "script/ScriptVm.h"

extern "C" {

int scrFloatOp(ScriptVmProcess *process, int command);

/* Script opcode: applies float operation 6 to the stack, then steps past itself. */
u32 FUN_0018b36c(ScriptVmProcess *process)
{
    scrFloatOp(process, 6);
    process->pc++;
    return 1;
}

} /* extern "C" */
