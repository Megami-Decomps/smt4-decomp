#include "common.h"

extern "C" {

extern s32 FUN_0035e460(u32 arg, s32 mode);

s32 partyRecordClampEquippedRankDown(u32 arg)
{
    return FUN_0035e460(arg, 0);
}

} /* extern "C" */
