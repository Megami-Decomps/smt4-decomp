/* NON_MATCHING: compiler shares the command-mode store with a different switch case, placing case-alignment NOPs and tail branches differently from retail. */
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {

// Maps the script selector to command modes 12, 11, or the default 5.
u32 FUN_003357e8(void)
{
    switch (scrGetArg(0)) {
    case 0:
        btlGetMainState()->commandFilter.mode = 12;
        break;
    case 1:
        btlGetMainState()->commandFilter.mode = 11;
        break;
    default:
        btlGetMainState()->commandFilter.mode = 5;
        break;
    }
    return 1;
}
}
