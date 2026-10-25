#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {


u32 FUN_0030b460(void)
{
    BtlMainState *btl = btlGetMainState();

    scrSetResult((int)btl->resolution.second);
    return 1;
}

} /* extern "C" */
