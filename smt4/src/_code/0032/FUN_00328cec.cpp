#include "common.h"

extern "C" {

extern u8 DAT_0044f180[];

u8 *FUN_0024233c(const char *name, const void *table, u32 count);

/* Looks up "POLY RING" in the table at DAT_0044f180 (six entries). */
void FUN_00328cec(void)
{
    FUN_0024233c("POLY RING", DAT_0044f180, 6);
}

} /* extern "C" */
