#include "shard/W5_W5Match7_ScriptUnit.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Sets the script result and reports the command as done. */
static s32 commandResult(s32 value)
{
    scrSetResult(value);
    return 1;
}

/* Script command: tests one bit of the script unit's flags; the script's argument is the bit number. */
s32 scrCommTestUnitFlag(void)
{
    u32 bit = scrGetArg(0);
    ScriptUnit *unit = reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    ScriptUnitData *data = unit->data;

    return commandResult((data->flags & (1 << (bit & 0xFF))) != 0);
}

} /* extern "C" */
