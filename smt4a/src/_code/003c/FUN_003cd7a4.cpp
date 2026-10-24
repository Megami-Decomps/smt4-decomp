#include "common.h"

extern "C" {

extern u8 DAT_0059e0d0[];

u8 *FUN_0039a9d0(const char *name, const void *table, u32 count);

/* Looks up "POLY TEX" in the table at DAT_0059e0d0 (two entries). */
void FUN_003cd7a4(void)
{
    FUN_0039a9d0("POLY TEX", DAT_0059e0d0, 2);
}

} /* extern "C" */
