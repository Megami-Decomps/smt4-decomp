#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
s32 bustupCutAnimFindSlot(s32 id);
void FUN_0024ecc0(s32 first, s32 slot);
}

extern "C" s32 FUN_00324b50(void)
{
    FUN_0024ecc0(0, bustupCutAnimFindSlot(scrGetArg(0)));
    return 1;
}
