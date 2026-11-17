#include "status/StatusDownA.h"

extern "C" {

s32 FUN_002c7e3c(void);
s32 FUN_002c7e54(void);


/* Returns 0 when FUN_002c7e54 reports 5, 6, 7, 0xC or 0xB, or FUN_002c7e3c reports 8, 9 or 3; otherwise 1. */
u32 FUN_00230544(void)
{
    if (g_statusDown->panelEnabled == 0) {
        return 0;
    }
    if (FUN_002c7e54() == 5 || FUN_002c7e54() == 6 ||
        FUN_002c7e54() == 7 || FUN_002c7e54() == 0xC ||
        FUN_002c7e54() == 0xB || FUN_002c7e3c() == 8 ||
        FUN_002c7e3c() == 9 || FUN_002c7e3c() == 3) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
