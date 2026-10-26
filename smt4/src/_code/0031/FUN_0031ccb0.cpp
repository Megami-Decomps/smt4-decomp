#include "common.h"
#include "script/ScriptArgs.h"
extern "C" {

extern int FUN_002973ec(void);

u32 FUN_0031ccb0(void)
{
    u32 result = 0xffffffff;
    int value = FUN_002973ec();

    if (value == 0) {
        result = 0;
    } else if (value == 1) {
        result = 1;
    } else if (value == 2) {
        result = 2;
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
