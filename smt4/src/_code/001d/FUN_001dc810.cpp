#include "script/ScriptVm.h"

extern "C" {

/* Script opcode: pushes a copy of the last stack slot (tag and value) on the stack. */
u32 FUN_001dc810(ScriptVmProcess *process)
{
    process->tags[process->depth] = process->tags[0x1b];
    s32 depth = process->depth;
    process->values[depth] = process->values[0x1b];
    process->depth++;
    process->pc++;
    return 1;
}

}
