#include "common.h"

struct BtlMainStateView {
    /* 0x0000 */ u8 unk0000[0x4CCC];
    /* 0x4CCC */ s32 value;
};

extern "C" {
s32 scrGetArg(u32 index);
BtlMainStateView *btlGetMainState(void);
}

extern "C" s32 FUN_0039db18(void)
{
    s32 value = scrGetArg(0);

    btlGetMainState()->value = value;
    return 1;
}
