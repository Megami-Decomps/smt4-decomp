#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {


u32 FUN_0030b678(void)
{
    BtlMainState *btl = btlGetMainState();

    scrSetResult((int)btl->playerCheck.checkId);
    return 1;
}

} /* extern "C" */
