#include "common.h"

extern "C" {

s32 FUN_004bc850(s32 index);

extern u8 DAT_005806e0[];

/* Looks a byte up in the table at DAT_005806e0 by the index FUN_004bc850 returns. */
u8 mapEnemyLookupByte(s32 index)
{
    return DAT_005806e0[FUN_004bc850(index)];
}

} /* extern "C" */
