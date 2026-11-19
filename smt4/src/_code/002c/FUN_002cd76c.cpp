#include "common.h"
#include "code/Code0029.h"

extern "C" {
s32 scrGetArg(u32 index);
s32 partyFindFreeStockSlot(void);

/* Script command: applies its first argument to the object partyFindFreeStockSlot returns. */
s32 FUN_002cd76c(void)
{
    dispatchIfFound(partyFindFreeStockSlot(), scrGetArg(0), 0);
    return 1;
}
}
