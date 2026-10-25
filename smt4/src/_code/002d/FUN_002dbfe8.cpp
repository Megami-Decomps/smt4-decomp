#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

extern u32 scrGetArg(u32 index);

u32 FUN_002dbfe8(void)
{
    u8 *btl = reinterpret_cast<u8 *>(btlGetMainState());
    u32 value = scrGetArg(0);

    *(u32 *)(btl + 0x49dc) = value;
    return 1;
}

} /* extern "C" */
