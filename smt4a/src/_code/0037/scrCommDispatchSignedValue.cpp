#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void FUN_003dfd08(s32 value);
void FUN_003dfdf0(s32 value);

s32 scrCommDispatchSignedValue(void)
{
    s32 mode = scrGetArg(0);
    s16 value = (s16)scrGetArg(1);
    if (mode == 0) {
        FUN_003dfdf0(value);
    } else {
        FUN_003dfd08(value);
    }
    return 1;
}

} /* extern "C" */
