/* NON_MATCHING: same code, but armcc allocates the tag-base and stack-depth registers the other way round (ip/r3 swapped). */
#include "script/ScriptVm.h"

extern "C" {

/* Script opcode: pushes the float immediate stored in the instruction after this one. */
u32 FUN_001aa198(ScriptVmProcess *process)
{
    process->pc++;
    scriptVmPush(process, SCRIPT_VM_TAG_FLOAT, process->code[process->pc].word);
    process->pc++;
    return 1;
}

} /* extern "C" */
