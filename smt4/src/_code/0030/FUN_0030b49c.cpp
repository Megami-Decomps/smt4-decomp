#include "battle/BtlMainAccess.h"
#include "common.h"

struct BtlMainFUN_0030b49c {
    /* 0x0000 */ u8 unk0000[0x49c0];
    /* 0x49c0 */ s32 value;
};

extern "C" {

s32 scrGetArg(u32 index);

/* Script command: stores argument zero in the battle state at 0x49c0. */
s32 FUN_0030b49c(void)
{
    s32 value = scrGetArg(0);
    reinterpret_cast<BtlMainFUN_0030b49c *>(btlGetMainState())->value = value;
    return 1;
}

} /* extern "C" */
