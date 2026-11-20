#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void saveDataAdjustCounterB(s32 value);
void saveDataAdjustCounterA(s32 value);

s32 scrCommDispatchSignedValue(void)
{
    s32 mode = scrGetArg(0);
    s16 value = (s16)scrGetArg(1);
    if (mode == 0) {
        saveDataAdjustCounterA(value);
    } else {
        saveDataAdjustCounterB(value);
    }
    return 1;
}

} /* extern "C" */
