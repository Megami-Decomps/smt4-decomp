#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void gameRecordSetValueClamped(u16 value, s32 mode);
}

extern "C" s32 FUN_003b1a78(void)
{
    gameRecordSetValueClamped(scrGetArg(0), 0);
    return 1;
}
