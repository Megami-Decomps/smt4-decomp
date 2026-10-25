#include "battle/BtlMainAccess.h"
#include "common.h"


extern "C" {
void scrSetResult(s32 result);
}

extern "C" s32 FUN_003a9004(void)
{
    scrSetResult(btlGetMainState()->targetCapacity.counts[0]);
    return 1;
}
