#include "battle/BtlFlagWord.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {

#define BTL_FLAG_SCRIPT_LOCK 0x80000

/* Script command: sets (argument > 0) or clears battle flag 0x80000. */
s32 scrCommBtlScriptLockSet(void)
{
    s32 enable = scrGetArg(0);
    return btlFlagWordAssign(&btlGetMainState()->battleFlags, BTL_FLAG_SCRIPT_LOCK, enable);
}

} /* extern "C" */
