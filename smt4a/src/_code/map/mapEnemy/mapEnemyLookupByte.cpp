#include "common.h"

extern "C" {

s32 FUN_004bc850(void);

extern u8 DAT_005806e0[];

/* Looks a byte up in the table at DAT_005806e0 by the index FUN_004bc850 returns. */
u8 mapEnemyLookupByte(void)
{
    return DAT_005806e0[FUN_004bc850()];
}

} /* extern "C" */
