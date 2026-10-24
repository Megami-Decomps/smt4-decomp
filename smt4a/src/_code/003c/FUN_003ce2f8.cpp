#include "common.h"

extern "C" {

extern u8 DAT_0059df70[];

u32 FUN_0039a9d0(const char *name, const void *table, u32 count);

/* Looks up "POLY TRACK S" in the table at DAT_0059df70 (nine entries). */
void FUN_003ce2f8(void)
{
    FUN_0039a9d0("POLY TRACK S", DAT_0059df70, 9);
}

} /* extern "C" */
