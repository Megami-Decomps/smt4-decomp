#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {


u32 FUN_00312524(void)
{
    BtlMainState *btl = btlGetMainState();

    scrSetResult((int)btl->menuCursor.y);
    return 1;
}

} /* extern "C" */
