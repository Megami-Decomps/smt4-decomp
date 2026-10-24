#include "common.h"

extern "C" {

extern u8 DAT_0044f000[];

u8 *FUN_0024233c(const char *name, const void *table, u32 count);

/* Looks up "ASD LIGHT" in the table at DAT_0044f000 (two entries). */
void FUN_00328578(void)
{
    FUN_0024233c("ASD LIGHT", DAT_0044f000, 2);
}

} /* extern "C" */
