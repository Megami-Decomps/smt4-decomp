/* NON_MATCHING: the four-way switch on the value tag lowers to a compare chain; retail uses a jump table. */
#include "script/ScriptVm.h"

// Advance for a nonzero value; otherwise jump to the label the current instruction names.
extern "C" u32 FUN_0018b390(ScriptVmProcess *process)
{
    bool advance;
    switch (process->tags[process->depth - 1]) {
    case SCRIPT_VM_TAG_INT:
    case SCRIPT_VM_TAG_INT_VAR:
        advance = scrPopInt(process) != 0;
        break;
    case SCRIPT_VM_TAG_FLOAT:
    case SCRIPT_VM_TAG_FLOAT_VAR:
        advance = scrPopFloat(process) != 0.0f;
        break;
    default:
        advance = false;
        break;
    }

    if (advance) {
        ++process->pc;
    } else {
        process->pc = process->labels[process->code[process->pc].decoded.operand].target;
    }
    return 1;
}
