#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

extern int FUN_0027d98c(void);

u32 FUN_0030b58c(void)
{
    int value = FUN_0027d98c();

    scrSetResult(value == 4);
    return 1;
}

} /* extern "C" */
