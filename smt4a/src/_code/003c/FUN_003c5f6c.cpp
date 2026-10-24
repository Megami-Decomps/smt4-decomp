#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
s32 bustupCutAnimFindSlot(s32 id);
void FUN_003ae9d8(s32 first, s32 slot);
}

extern "C" s32 FUN_003c5f6c(void)
{
    FUN_003ae9d8(0, bustupCutAnimFindSlot(scrGetArg(0)));
    return 1;
}
