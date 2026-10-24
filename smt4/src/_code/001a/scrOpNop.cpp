#include "script/ScriptVm.h"

extern "C" {

/* Script opcode that does nothing but step past itself. */
u32 scrOpNop(ScriptVmProcess *process)
{
    process->pc++;
    return 1;
}

} /* extern "C" */
