#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

int scrSetResult(u32 result);
extern int scrGetArg(u32 index);

u32 FUN_002f12c8(void)
{
    u8 *btl = reinterpret_cast<u8 *>(btlGetMainState());
    int index = scrGetArg(0);

    scrSetResult(*(u32 *)(btl + index * 4 + 0x22a8));
    return 1;
}

} /* extern "C" */
