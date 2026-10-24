#include "common.h"

extern "C" {

extern u8 DAT_0044f3a0[];
void FUN_0024233c(const char *name, const void *table, s32 count);

/* Registers the "OBJ PARTICLE" entry of the effect editor menu (11 entries). */
void FUN_00329024(void)
{
    FUN_0024233c("OBJ PARTICLE", DAT_0044f3a0, 11);
}

} /* extern "C" */
