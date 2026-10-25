#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

extern u32 scrGetArg(u32 index);

u32 scrComm_Battle_SetWorkSlot(void)
{
    u32 index = scrGetArg(0);
    u32 value = scrGetArg(1);
    u8 *btl;

    if (index < 0x10) {
        btl = reinterpret_cast<u8 *>(btlGetMainState());
        *(u32 *)(btl + index * 4 + 0x497c) = value;
    }
    return 1;
}

} /* extern "C" */
