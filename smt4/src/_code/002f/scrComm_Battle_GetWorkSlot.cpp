#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

int scrSetResult(u32 result);
extern u32 scrGetArg(u32 index);

u32 scrComm_Battle_GetWorkSlot(void)
{
    u32 index = scrGetArg(0);
    u8 *btl;

    if (index < 0x10) {
        btl = reinterpret_cast<u8 *>(btlGetMainState());
        scrSetResult(*(u32 *)(btl + index * 4 + 0x497c));
    }
    return 1;
}

} /* extern "C" */
