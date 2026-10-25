/* NON_MATCHING: switch lowers to comparisons rather than retail's jump table; final branch target loads also differ. */
#include "script/ScriptVm.h"

/* Continue after a true value, otherwise branch to the instruction's label. */
extern "C" u32 FUN_002026f0(ScriptVmProcess *process)
{
    switch (process->tags[process->depth - 1]) {
    case SCRIPT_VM_TAG_INT:
    case SCRIPT_VM_TAG_INT_VAR:
        if (scrPopInt(process) != 0) {
            ++process->pc;
            return 1;
        }
        break;
    case SCRIPT_VM_TAG_FLOAT:
    case SCRIPT_VM_TAG_FLOAT_VAR:
        if (scrPopFloat(process) != 0.0f) {
            ++process->pc;
            return 1;
        }
        break;
    }
    process->pc = process->labels[process->code[process->pc].decoded.operand].target;
    return 1;
}
