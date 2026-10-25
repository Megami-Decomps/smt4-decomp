/* Clears the flag bit selected by scrGetArg in the manager's flag word; always returns 1. */
#include "common.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {


u32 FUN_002f1524(void)
{
    u32 bit = scrGetArg(0);

    btlGetMainState()->flags49BC &= ~(1 << bit);
    return 1;
}

}
