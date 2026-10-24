#include "common.h"

struct BtlMainStateView {
    /* 0x0000 */ u8 unk0000[0x4C70];
    /* 0x4C70 */ s16 value;
};

extern "C" {
BtlMainStateView *btlGetMainState(void);
void scrSetResult(s32 result);
}

extern "C" s32 FUN_003a9004(void)
{
    scrSetResult(btlGetMainState()->value);
    return 1;
}
