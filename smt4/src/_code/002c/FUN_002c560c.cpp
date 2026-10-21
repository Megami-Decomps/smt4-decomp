#include "common.h"

extern "C" {
extern u32 DAT_0044d0c8[];
void FUN_0010a714(u32 player);

/* Stops the movie player selected by the low byte of the table entry. */
void FUN_002c560c(u32 index)
{
    FUN_0010a714(DAT_0044d0c8[index] & 0xff);
}
}
