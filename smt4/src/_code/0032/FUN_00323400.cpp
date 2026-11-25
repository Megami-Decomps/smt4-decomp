#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

/* Adds the script's encounter exclusion ID to the current battle. */
extern "C" s32 FUN_00323400(void)
{
    btlAddEncounterExclusionId(btlGetMainState(), scrGetArg(0));
    return 1;
}
