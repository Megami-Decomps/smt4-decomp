#include "common.h"

extern "C" {

int slotResetIdle(u32 btl, int a, u32 b);
extern int tableIsSupportedKind(u32 btl, u32 a);
extern u32 btlGetMainState(void);
extern u32 scrGetArg(u32 index);
extern int FUN_0033b35c(u32 btl, u32 a);

u8 FUN_00312540(void)
{
    u32 arg = scrGetArg(0);
    u32 btl = btlGetMainState();

    if (FUN_0033b35c(btl, 0) != 0) {
        return tableIsSupportedKind(btl, 0) != 0;
    }
    slotResetIdle(btl, 0, arg);
    return 0;
}

} /* extern "C" */
