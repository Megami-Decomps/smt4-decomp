#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

/* Adds the script's encounter exclusion ID to the current battle. */
extern "C" s32 FUN_003c2628(void)
{
    s32 id = scrGetArg(0);
    btlAddEncounterExclusionId(btlGetMainState(), id);
    return 1;
}
