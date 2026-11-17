#include "script/ScriptVm.h"

extern "C" {

/* Script opcode: jumps to the label the instruction's operand names. */
u32 scrOpJump(ScriptProcess *process)
{
    process->pc = process->labels[process->code[process->pc].decoded.operand].target;
    return 1;
}

} /* extern "C" */
