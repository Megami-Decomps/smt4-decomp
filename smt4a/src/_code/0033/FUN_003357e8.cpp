#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {

// Maps the script selector to command modes 12, 11, or the default 5.
u32 FUN_003357e8(void)
{
    s32 selector = scrGetArg(0);
    if (selector == 0) {
        btlGetMainState()->commandFilter.mode = 12;
    } else if (selector == 1) {
        btlGetMainState()->commandFilter.mode = 11;
    } else {
        btlGetMainState()->commandFilter.mode = 5;
    }
    return 1;
}
}
