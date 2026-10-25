#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

extern u8 *btlGetMainState(void);

u32 FUN_0030b47c(void)
{
    u8 *btl = btlGetMainState();

    scrSetResult(*(u32 *)(btl + 0x49c0));
    return 1;
}

} /* extern "C" */
