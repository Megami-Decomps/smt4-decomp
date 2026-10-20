#include "common.h"

extern "C" {

s32 FUN_00162ea4(void);
s32 FUN_002deb84(void);
s32 scrGetArg(...);

/* Script check: returns 0 when the script has arguments, FUN_002deb84 is below argument 0 and either FUN_00162ea4 reports 0 or FUN_002deb84 is below 1; otherwise 1. */
u32 FUN_00275ac0(void)
{
    s32 value;
    s32 limit;

    value = scrGetArg();
    if (0 < value) {
        value = FUN_002deb84();
        limit = scrGetArg(0);
        if ((value < limit) &&
            ((value = FUN_00162ea4(), value == 0 || (value = FUN_002deb84(), value < 1)))) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
