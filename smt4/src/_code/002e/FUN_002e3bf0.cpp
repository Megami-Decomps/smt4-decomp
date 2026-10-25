#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

int scrSetResult(int result);
extern int scrGetArg(u32 index);

u32 FUN_002e3bf0(void)
{
    int arg = scrGetArg(0);
    BtlMainState *btl = btlGetMainState();

    scrSetResult(btl->emergencyAction.gate <= arg);
    return 1;
}

} /* extern "C" */
