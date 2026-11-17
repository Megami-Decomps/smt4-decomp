#include "common.h"
#include "result/Result.h"
#include "script/ScriptArgs.h"

extern "C" {


/* Script command: returns the result block's value at 0xd040, or zero without one. */
s32 FUN_003235a8(void)
{
    scrSetResult(g_result != NULL ? g_result->scriptValue : 0);
    return 1;
}

} /* extern "C" */
