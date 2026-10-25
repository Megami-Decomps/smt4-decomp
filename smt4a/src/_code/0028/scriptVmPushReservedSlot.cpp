#include "script/ScriptVm.h"

extern "C" {

/* Script opcode: pushes a copy of the last stack slot (tag and value) on the stack. */
u32 scriptVmPushReservedSlot(ScriptVmProcess *process)
{
    process->tags[process->depth] = process->tags[0x1b];
    u32 *destination = &process->values[process->depth];
    *destination = process->values[0x1b];
    process->depth++;
    process->pc++;
    return 1;
}

}
