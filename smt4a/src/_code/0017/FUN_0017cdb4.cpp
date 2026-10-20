#include "common.h"

extern "C" {

extern u32 DAT_00589184;

/* Returns the word at 0x589184 and clears it. */
u32 FUN_0017cdb4(void)
{
    u32 value;

    value = DAT_00589184;
    DAT_00589184 = 0;
    return value;
}

} /* extern "C" */
