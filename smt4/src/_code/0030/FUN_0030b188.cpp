#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {
BtlEntry* btlMainFindActiveEntry(BtlMainState* state);

/* Sets the script result; commands then report 1 (done). */
static u32 commandResult(s32 value)
{
    scrSetResult(value);
    return 1;
}

// Return the selected active-entry flag bit to the script.
u32 FUN_0030b188()
{
    u32 bit = scrGetArg(0);
    BtlEntry* entry = btlMainFindActiveEntry(btlGetMainState());
    if (entry != NULL && (entry->groupMask & (1u << bit)) != 0) {
        return commandResult(1);
    }
    return commandResult(0);
}
}
