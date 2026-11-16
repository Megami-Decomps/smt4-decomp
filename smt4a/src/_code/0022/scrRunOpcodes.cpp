#include "script/ScriptVm.h"

extern "C" {

typedef int (*OpcodeHandler)(ScriptVmProcess *process);
extern OpcodeHandler g_scriptOpcodeHandlers[];  /* opcode handler table */

/* Runs opcode handlers until one yields (1) or finishes the script (0 -> 2). */
u32 scrRunOpcodes(ScriptVmProcess *process)
{
    while (1) {
        int result = g_scriptOpcodeHandlers[process->code[process->pc].decoded.opcode](process);

        if (result == 0) {
            process->commandFrame = 0;
            return 2;
        }
        if (result == 2) {
            break;
        }
        if (result == 1) {
            process->commandFrame = 0;
        }
    }
    process->commandFrame++;
    process->stepCount++;
    return 1;
}

} /* extern "C" */
