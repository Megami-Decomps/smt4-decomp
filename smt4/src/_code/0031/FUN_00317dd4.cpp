#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {


/* Script command: returns zero to the script. */
s32 FUN_00317dd4(void)
{
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
