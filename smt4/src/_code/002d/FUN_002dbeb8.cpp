#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

int scrSetResult(int result);
extern int scrGetArg(u32 index);

u32 FUN_002dbeb8(void)
{
    int arg = scrGetArg(0);
    BtlMainState *btl = btlGetMainState();

    scrSetResult((int)(btl->encounterControl.busyA + 1) <= arg);
    return 1;
}

} /* extern "C" */
