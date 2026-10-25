#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

typedef struct BtlMainState0038db98 BtlMainState0038db98;

s32 scrGetArg(s32 index);
s32 FUN_00203d74(void);
void FUN_003f220c(void *state, u16 id, s32 amount);

/* Script command: applies script argument 0 with amount (script argument 1) to the main state; the amount is scaled by 2/3 while FUN_00203d74 holds. Returns 1. */
u32 scrBtlStateApplyAmount(void)
{
    s32 id = scrGetArg(0);
    s32 amount = scrGetArg(1);

    if (FUN_00203d74() != 0) {
        amount = amount * 2 / 3;
    }
    FUN_003f220c(reinterpret_cast<BtlMainState0038db98 *>(btlGetMainState()), id, amount);
    return 1;
}

} /* extern "C" */
