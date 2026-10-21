/* NON_MATCHING: retail uses `nop {0}` where armcc emits `mov r0, #0`. */
#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void FUN_003dfd08(s32 value);
void FUN_003dfd6c(s32 value);

s32 scrCommDispatchSignedValue(void)
{
    s32 mode = scrGetArg(0);
    s16 value = (s16)scrGetArg(1);
    if (mode) {
        FUN_003dfd08(value);
    } else {
        FUN_003dfd6c(value);
    }
    return 1;
}

} /* extern "C" */
