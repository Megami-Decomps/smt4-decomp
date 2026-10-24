#include "common.h"

extern "C" {

extern u8 DAT_0059e2d0[];

u32 FUN_0039a9d0(const char *name, const void *table, u32 count);

/* Looks up "POLY RING" in the table at DAT_0059e2d0 (six entries). */
void FUN_003cdae8(void)
{
    FUN_0039a9d0("POLY RING", DAT_0059e2d0, 6);
}

} /* extern "C" */
