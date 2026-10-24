#include "common.h"

extern "C" {

extern u8 DAT_0059e150[];
void FUN_0039a9d0(const char *name, const void *table, s32 count);

/* Registers the "ASD LIGHT" entry of the effect editor menu (2 entries). */
void FUN_003cc714(void)
{
    FUN_0039a9d0("ASD LIGHT", DAT_0059e150, 2);
}

} /* extern "C" */
