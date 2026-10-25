#include "script/ScriptVm.h"

/* Script opcode: pushes the address `operand` bytes into the script's data block. */
extern "C" s32 FUN_00281b3c(ScriptVmProcess *process)
{
    u8 *base = process->dataBase;
    u8 *address = base + process->code[process->pc].decoded.operand;
    scriptVmPush(process, SCRIPT_VM_TAG_STRING, (u32)address);
    process->pc++;
    return 1;
}
