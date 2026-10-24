#include "common.h"

extern "C" {

extern u8 DAT_0044ef80[];

u8 *FUN_0024233c(const char *name, const void *table, u32 count);

/* Registers the "POLY TEX" effect editor table at DAT_0044ef80 (two entries). */
void FUN_00328c5c(void)
{
    FUN_0024233c("POLY TEX", DAT_0044ef80, 2);
}

}
