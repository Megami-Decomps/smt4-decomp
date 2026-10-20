#include "common.h"

extern "C" {

int scrSetResult(int result);
extern u8 *btlGetMainState(void);
extern int scrGetArg(void);

u32 FUN_002f0ff4(void)
{
    int arg = scrGetArg();
    u8 *btl = btlGetMainState();

    scrSetResult(arg <= (int)(btl[0x44b4] + 1));
    return 1;
}

} /* extern "C" */
