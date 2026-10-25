#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

extern u8 *btlGetMainState(void);

u32 FUN_0030b460(void)
{
    u8 *btl = btlGetMainState();

    scrSetResult((int)*(s16 *)(btl + 0x1fca));
    return 1;
}

} /* extern "C" */
