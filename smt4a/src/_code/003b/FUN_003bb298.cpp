#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 mapGimicIsEntryAnimationComplete(s32 entry);

/* Script condition: the entry animation of the gimmick in argument zero is complete. */
s32 FUN_003bb298(void)
{
    return mapGimicIsEntryAnimationComplete(scrGetArg(0)) != 0;
}

} /* extern "C" */
