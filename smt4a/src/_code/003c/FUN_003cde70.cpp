#include "common.h"

extern "C" {

extern u8 DAT_0059e190[];

u8 *FUN_0039a9d0(const char *name, const void *table, u32 count);

/* Registers the "POLY FLASH" effect editor table at DAT_0059e190 (eleven entries). */
void FUN_003cde70(void)
{
    FUN_0039a9d0("POLY FLASH", DAT_0059e190, 11);
}

}
