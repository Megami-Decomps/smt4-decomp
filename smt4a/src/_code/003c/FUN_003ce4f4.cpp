#include "common.h"

extern "C" {

extern u8 DAT_0059e110[];
void FUN_0039a9d0(const char *name, const void *table, s32 count);

/* Registers the "POLY TEX2" entry of the effect editor menu (2 entries). */
void FUN_003ce4f4(void)
{
    FUN_0039a9d0("POLY TEX2", DAT_0059e110, 2);
}

} /* extern "C" */
