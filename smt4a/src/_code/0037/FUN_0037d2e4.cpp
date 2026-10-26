#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 FUN_003dfd44(void);
s32 FUN_003dfe88(void);
void scrSetResult(s32 result);

s32 FUN_0037d2e4(void)
{
    s32 result;
    if (scrGetArg(0) == 0) {
        result = FUN_003dfe88();
    } else {
        result = FUN_003dfd44();
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
