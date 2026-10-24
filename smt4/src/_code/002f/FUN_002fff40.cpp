#include "common.h"

extern "C" {
extern u32 DAT_00435d18;
void FUN_003dc018(u32 value);

/* Script command: passes DAT_00435d18 to FUN_003dc018. */
s32 FUN_002fff40(void)
{
    FUN_003dc018(DAT_00435d18);
    return 1;
}
}
