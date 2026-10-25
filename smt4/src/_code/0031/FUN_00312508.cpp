#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {


u32 FUN_00312508(void)
{
    u8 *btl = reinterpret_cast<u8 *>(btlGetMainState());

    scrSetResult((int)*(s16 *)(btl + 0x4968));
    return 1;
}

} /* extern "C" */
