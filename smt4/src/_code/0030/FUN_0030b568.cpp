#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"


extern "C" {
}

extern "C" s32 FUN_0030b568(void)
{
    s32 result;

    if ((btlGetMainState()->encounter.flags & 0x80000) == 0) {
        result = 1;
    } else {
        result = 0;
    }
    scrSetResult(result);
    return 1;
}
