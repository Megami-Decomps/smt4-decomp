#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

int scrSetResult(int result);
extern int scrGetArg(u32 index);

u32 FUN_002e3bf0(void)
{
    int arg = scrGetArg(0);
    u8 *btl = reinterpret_cast<u8 *>(btlGetMainState());

    scrSetResult(*(s16 *)(btl + 0x1fc6) <= arg);
    return 1;
}

} /* extern "C" */
