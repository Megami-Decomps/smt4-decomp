#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {


u32 FUN_0030b47c(void)
{
    u8 *btl = reinterpret_cast<u8 *>(btlGetMainState());

    scrSetResult(*(u32 *)(btl + 0x49c0));
    return 1;
}

} /* extern "C" */
