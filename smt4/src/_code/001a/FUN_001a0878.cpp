/* NON_MATCHING: same stores; the pc and code-pointer loads for the label lookup come out in swapped registers (r3/r2 in retail, r2/r3 here). */
#include "script/ScriptVm.h"

/* Script opcode: calls the function the operand names, pushing the return address. */
extern "C" s32 FUN_001a0878(ScriptVmProcess *context)
{
    scriptVmPush(context, SCRIPT_VM_TAG_RETURN_ADDRESS, context->pc);
    context->pc = context->tables.functions[context->code[context->pc].decoded.operand].target;
    return 1;
}
