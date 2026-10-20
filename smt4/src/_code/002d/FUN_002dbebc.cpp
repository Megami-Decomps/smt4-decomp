#include "common.h"

extern "C" {

int scrSetResult(int result);
extern u8 *btlGetMainState(void);
extern int scrGetArg(void);

u32 FUN_002dbebc(void)
{
    int arg = scrGetArg();
    u8 *btl = btlGetMainState();

    scrSetResult((int)(btl[0x44b4] + 1) <= arg);
    return 1;
}

} /* extern "C" */
