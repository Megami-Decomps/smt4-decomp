#include "common.h"

extern "C" {

int scrSetResult(int result);
extern int scrGetArg(u32 index);
extern u8 *FUN_002c2950(void);

u32 FUN_0031c1c4(void)
{
    u8 *work = FUN_002c2950();
    int index = scrGetArg(0);

    scrSetResult(*(s16 *)(work + index * 2 + 0xd5c) == 0);
    return 1;
}

} /* extern "C" */
