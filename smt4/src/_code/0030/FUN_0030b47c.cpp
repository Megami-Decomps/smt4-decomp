#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {


u32 FUN_0030b47c(void)
{
    BtlMainState *btl = btlGetMainState();

    scrSetResult(btl->selectedGroup);
    return 1;
}

} /* extern "C" */
