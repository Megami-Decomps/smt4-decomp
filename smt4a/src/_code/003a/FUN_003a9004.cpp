#include "battle/BtlMainAccess.h"
#include "common.h"

struct BtlMainStateView {
    /* 0x0000 */ u8 unk0000[0x4C70];
    /* 0x4C70 */ s16 value;
};

extern "C" {
void scrSetResult(s32 result);
}

extern "C" s32 FUN_003a9004(void)
{
    scrSetResult(reinterpret_cast<BtlMainStateView *>(btlGetMainState())->value);
    return 1;
}
