#include "battle/BtlMainAccess.h"
#include "common.h"

struct BtlMainFUN_003c2628;

extern "C" {

s32 scrGetArg(u32 index);
void FUN_003ec9c0(BtlMainFUN_003c2628 *state, s32 value);

/* Script command: runs FUN_003ec9c0 on the battle state with argument zero. */
s32 FUN_003c2628(void)
{
    s32 value = scrGetArg(0);
    FUN_003ec9c0(reinterpret_cast<BtlMainFUN_003c2628 *>(btlGetMainState()), value);
    return 1;
}

} /* extern "C" */
