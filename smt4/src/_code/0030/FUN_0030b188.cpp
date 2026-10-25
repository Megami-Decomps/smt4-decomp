/* NON_MATCHING: retail preserves the completion/mask constant in r5 across result-setting calls. */
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {
BtlUnitEntry* btlMainFindActiveEntry(BtlMainState* state);

// Return the selected active-entry flag bit to the script.
u32 FUN_0030b188()
{
    u32 bit = scrGetArg(0);
    BtlUnitEntry* entry = btlMainFindActiveEntry(btlGetMainState());
    if (entry != NULL && (entry->flagMask & (1u << bit)) != 0) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}
}
