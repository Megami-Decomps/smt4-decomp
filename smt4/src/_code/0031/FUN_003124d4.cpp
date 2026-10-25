#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

int scrSetResult(int result);
extern int scrGetArg(u32 index);

u32 FUN_003124d4(void)
{
    int arg = scrGetArg(0);
    BtlMainState *btl = btlGetMainState();

    scrSetResult(btl->resolution.second <= arg);
    return 1;
}

} /* extern "C" */
