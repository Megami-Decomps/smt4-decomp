#include "script/ScriptVm.h"

extern "C" {
extern ScriptCommand g_scrCommandTable[]; /* the command table */

/* Runs the script command at the current position: looks up its handler by the instruction's operand, runs it with this
 * script as the active one and advances. Returns 1 when the command ran, 2 when its handler asked to wait. */
s32 scrRunCommand(ScriptProcess *script)
{
    s32 position = script->pc;
    u32 command = script->code[position].decoded.operand;

    g_scrContext.active = script;
    if (g_scrCommandTable[command].handler() == 0) {
        return 2;
    }
    script->depth -= g_scrCommandTable[command].argumentCount;
    if (script->pc == position) {
        script->pc++;
    }
    return 1;
}
}
