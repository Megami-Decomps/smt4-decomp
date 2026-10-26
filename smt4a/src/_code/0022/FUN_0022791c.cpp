#include "script/ScriptVm.h"

/* Script opcode: calls the function the operand names, pushing the return address. */
extern "C" s32 FUN_0022791c(ScriptVmProcess *context)
{
    scriptVmPush(context, SCRIPT_VM_TAG_RETURN_ADDRESS, context->pc);
    context->pc = context->tables.functions[context->code[context->pc].decoded.operand].target;
    return 1;
}
