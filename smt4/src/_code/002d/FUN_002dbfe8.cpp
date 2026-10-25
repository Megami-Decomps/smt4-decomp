#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

extern u32 scrGetArg(u32 index);

u32 FUN_002dbfe8(void)
{
    BtlMainState *btl = btlGetMainState();
    u32 value = scrGetArg(0);

    btl->word49DC = value;
    return 1;
}

} /* extern "C" */
