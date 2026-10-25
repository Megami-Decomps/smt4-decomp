#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {


u32 FUN_0030b460(void)
{
    u8 *btl = reinterpret_cast<u8 *>(btlGetMainState());

    scrSetResult((int)*(s16 *)(btl + 0x1fca));
    return 1;
}

} /* extern "C" */
