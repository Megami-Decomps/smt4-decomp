/* NON_MATCHING: jump table and the shared single pc store match (40 rows); only the register assignment of the label-target loads differs (retail: pc r1, labels ip, constants r3/r2). */
#include "script/ScriptVm.h"

/* Continue after a true value, otherwise branch to the instruction's label. */
extern "C" u32 FUN_002026f0(ScriptVmProcess *process)
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
        u32 operand = process->code[process->pc].decoded.operand;
        nextPc = process->labels[operand].target;
    }
    process->pc = nextPc;
    return 1;
}
