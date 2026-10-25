/* NON_MATCHING: retail keeps the return constant 1 in r0 across the flag update (flag word in r2); built reuses r0 for the flag word and sets the constant afterwards */
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {

#define BTL_FLAG_SCRIPT_LOCK 0x80000

/* Script command: sets (argument > 0) or clears battle flag 0x80000. */
u32 scrCommBtlScriptLockSet(void)
{
    s32 enable = scrGetArg(0);
    u32 *flags = &btlGetMainState()->battleFlags;

    if (enable > 0) {
        *flags |= BTL_FLAG_SCRIPT_LOCK;
    } else {
        *flags &= ~BTL_FLAG_SCRIPT_LOCK;
    }
    return 1;
}

} /* extern "C" */
