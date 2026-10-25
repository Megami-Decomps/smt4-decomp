/* NON_MATCHING: register numbering only (retail: position r5, op r6) */
/* Runs the script command at the current position: looks up its handler by the instruction's operand, runs it with this
 * script as the active one and advances. Returns 1 when the command ran, 2 when its handler asked to wait. */
#include "script/ScriptVm.h"

extern "C" {
struct ScriptCommand {
    /* 0x0 */ s32 (*handler)(void);
    /* 0x4 */ s32 argumentCount;    /* what the command takes off the script's stack */
};

extern ScriptCommand DAT_00405f48[];

s32 FUN_001a08dc(ScriptVmProcess *script)
{
    s32 position = script->pc;
    ScriptCommand *command = &DAT_00405f48[script->code[position].decoded.operand];

    g_scrContext.active = script;
    if (command->handler() == 0) {
        return 2;
    }
    script->depth -= command->argumentCount;
    if (script->pc == position) {
        script->pc++;
    }
    return 1;
}
}
