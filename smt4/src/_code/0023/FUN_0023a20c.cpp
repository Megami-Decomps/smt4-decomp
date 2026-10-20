#include "common.h"

extern "C" {

int FUN_002ba81c(u8 *dst, u32 src, int size);

extern int DAT_00471a50;
extern u8 DAT_004e655c[][0x40];

/* Copies a 0x40-byte record into the next slot of the table. */
void FUN_0023a20c(u32 src)
{
    FUN_002ba81c(DAT_004e655c[DAT_00471a50], src, 0x40);
    DAT_00471a50 = DAT_00471a50 + 1;
}

} /* extern "C" */
