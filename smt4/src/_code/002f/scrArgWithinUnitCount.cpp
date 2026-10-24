#include "common.h"

extern "C" {

int scrSetResult(int result);
extern u8 *btlGetMainState(void);
extern int scrGetArg(u32 index);

u32 scrArgWithinUnitCount(void)
{
    int arg = scrGetArg(0);
    u8 *btl = btlGetMainState();

    scrSetResult(arg <= (int)(btl[0x44b4] + 1));
    return 1;
}

} /* extern "C" */
