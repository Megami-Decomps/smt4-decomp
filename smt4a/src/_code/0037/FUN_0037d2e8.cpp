/* NON_MATCHING: retail uses `beq 24` where armcc emits `beq 18`. */
#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 FUN_003dfd44(void);
s32 FUN_003dfe88(void);
void scrSetResult(s32 result);

s32 FUN_0037d2e8(u32 index)
{
    s32 result;
    if (scrGetArg(index)) {
        result = FUN_003dfd44();
    } else {
        result = FUN_003dfe88();
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
