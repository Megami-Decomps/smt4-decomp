#include "common.h"
#include "battle/BtlMainAccess.h"

extern "C" {

u32 scrGetArg(int index);

/* Script command: sets flag bit (script argument 0) in the current player's flags. */
u32 FUN_002e4320(void)
{
    u32 bit = scrGetArg(0);

    btlGetMainState()->flags49BC |= 1 << (bit & 0xff);
    return 1;
}

} /* extern "C" */
