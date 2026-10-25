#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {


u32 FUN_00312508(void)
{
    BtlMainState *btl = btlGetMainState();

    scrSetResult((int)btl->menuCursor.x);
    return 1;
}

} /* extern "C" */
