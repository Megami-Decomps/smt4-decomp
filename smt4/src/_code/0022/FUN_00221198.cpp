#include "common.h"
#include "script/ScriptArgs.h"
extern "C" {

int FUN_00292bf0(void);

u32 FUN_00221198(void)
{
    scrSetResult(FUN_00292bf0());
    return 1;
}

} /* extern "C" */
