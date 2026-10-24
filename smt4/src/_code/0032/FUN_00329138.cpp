#include "common.h"

extern "C" {

extern u8 DAT_0044efc0[];

u8 *FUN_0024233c(const char *name, const void *table, u32 count);

/* Looks up "POLY TEX2" in the table at DAT_0044efc0 (two entries). */
void FUN_00329138(void)
{
    FUN_0024233c("POLY TEX2", DAT_0044efc0, 2);
}

} /* extern "C" */
