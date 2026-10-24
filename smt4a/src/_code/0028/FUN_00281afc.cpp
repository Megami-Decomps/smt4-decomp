/* NON_MATCHING: same code and instruction order, but armcc allocates the depth/value registers the other way round (r1/r2 swapped). */
#include "script/ScriptVm.h"

extern "C" {

/* Script opcode: pushes a copy of the last stack slot (tag and value) on the stack. */
u32 FUN_00281afc(ScriptVmProcess *process)
{
    process->tags[process->depth] = process->tags[0x1b];
    process->values[process->depth] = process->values[0x1b];
    process->depth++;
    process->pc++;
    return 1;
}

}
