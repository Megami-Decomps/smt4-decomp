#include "common.h"

extern "C" {

extern u8 DAT_0044e0f8[];

/* Writes the title-configuration defaults. */
void FUN_00105c78(void)
{
    DAT_0044e0f8[0] = 50;
    DAT_0044e0f8[1] = 80;
    DAT_0044e0f8[2] = 80;
    DAT_0044e0f8[3] = 48;
}

} /* extern "C" */
