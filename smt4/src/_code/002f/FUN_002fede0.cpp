#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {


/* Sets the script result; commands then report 1 (done). */
static u32 commandResult(s32 value)
{
    scrSetResult(value);
    return 1;
}

/* Script command: pushes whether a live unit with id argument 0 has bit argument 1 set in its mask. */
u32 FUN_002fede0(void)
{
    u32 id = scrGetArg(0);
    u32 bit = scrGetArg(1);
    int i;

    for (i = 0; i < 109; i++) {
        BtlEntry *unit = &btlGetMainState()->entries[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0
            && unit->data.id == id && (unit->data.statusFlags & (1 << bit)) != 0) {
            return commandResult(1);
        }
    }
    return commandResult(0);
}

} /* extern "C" */
