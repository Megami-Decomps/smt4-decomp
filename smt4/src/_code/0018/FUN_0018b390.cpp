/* NON_MATCHING: jump table matches (explicit return-address label); register assignment of the label-target loads differs. */
#include "script/ScriptVm.h"

// Advance for a nonzero value; otherwise jump to the label the current instruction names.
extern "C" u32 FUN_0018b390(ScriptVmProcess *process)
{
    bool advance = false;
    switch (process->tags[process->depth - 1]) {
    case SCRIPT_VM_TAG_INT:
    case SCRIPT_VM_TAG_INT_VAR:
        advance = scrPopInt(process) != 0;
        break;
    case SCRIPT_VM_TAG_FLOAT:
    case SCRIPT_VM_TAG_FLOAT_VAR:
        advance = scrPopFloat(process) != 0.0f;
        break;
    case SCRIPT_VM_TAG_RETURN_ADDRESS:
        break;
    }

    if (advance) {
        ++process->pc;
    } else {
        u32 operand = process->code[process->pc].decoded.operand;
        process->pc = process->labels[operand].target;
    }
    return 1;
}
