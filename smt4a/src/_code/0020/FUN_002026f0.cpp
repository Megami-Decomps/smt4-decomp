/* NON_MATCHING: jump table, shared pc store and label-target registers now match; only the two offset constants (2, 24) trade r2/r3. */
#include "script/ScriptVm.h"

static __inline u32 labelTarget(ScriptProcess *process)
{
    return process->labels[process->code[process->pc].decoded.operand].target;
}

/* Continue after a true value, otherwise branch to the instruction's label. */
extern "C" u32 FUN_002026f0(ScriptProcess *process)
{
    u32 nextPc;
    bool taken = false;
    switch (process->tags[process->depth - 1]) {
    case SCRIPT_VM_TAG_INT:
    case SCRIPT_VM_TAG_INT_VAR:
        taken = scrPopInt(process) != 0;
        break;
    case SCRIPT_VM_TAG_FLOAT:
    case SCRIPT_VM_TAG_FLOAT_VAR:
        taken = scrPopFloat(process) != 0.0f;
        break;
    case SCRIPT_VM_TAG_RETURN_ADDRESS:
        break;
    }
    if (taken) {
        nextPc = process->pc + 1;
    } else {
        nextPc = labelTarget(process);
    }
    process->pc = nextPc;
    return 1;
}
