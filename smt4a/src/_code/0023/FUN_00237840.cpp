#include "script/ScriptVm.h"

extern "C" {

/* Script opcode: pushes the integer immediate stored in the instruction after this one. */
u32 FUN_00237840(ScriptVmProcess *process)
{
    process->pc++;
    scriptVmPush(process, SCRIPT_VM_TAG_INT, process->code[process->pc].word);
    process->pc++;
    return 1;
}

}
