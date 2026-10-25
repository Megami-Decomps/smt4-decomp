#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
s32 partyFindFreeStockSlot(void);
void FUN_0029c1c8(s32 object, s32 value, s32 flag);

/* Script command: applies its first argument to the object partyFindFreeStockSlot returns. */
s32 FUN_002cd76c(void)
{
    FUN_0029c1c8(partyFindFreeStockSlot(), scrGetArg(0), 0);
    return 1;
}
}
