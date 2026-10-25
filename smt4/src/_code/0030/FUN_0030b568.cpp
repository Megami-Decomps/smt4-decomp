#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"

struct BtlMainStateView {
    /* 0x00 */ u8 unk00[0xE0];
    /* 0xE0 */ u32 flags;
};

extern "C" {
}

extern "C" s32 FUN_0030b568(void)
{
    s32 result;

    if ((reinterpret_cast<BtlMainStateView *>(btlGetMainState())->flags & 0x80000) == 0) {
        result = 1;
    } else {
        result = 0;
    }
    scrSetResult(result);
    return 1;
}
