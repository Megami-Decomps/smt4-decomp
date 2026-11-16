#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {
s32 btlStateHasSelectionGateFlag(void *state);
void scrSetResult(s32 result);
}

extern "C" s32 FUN_0039cd58(void)
{
    scrSetResult(btlStateHasSelectionGateFlag(static_cast<void *>(btlGetMainState())) != 0);
    return 1;
}
