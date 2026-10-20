#include "common.h"

extern "C" {

void nnnstdMemCpy(s32 dest, u8 *source, s32 size);
extern s32 DAT_005b40e0;
extern u8 DAT_005c0b50[];

/* Copies the 0x170-byte block at 0x5C0B50 to the address at DAT_005b40e0 and advances that address. */
void FUN_001b8768(void)
{
    nnnstdMemCpy(DAT_005b40e0, DAT_005c0b50, 0x170);
    DAT_005b40e0 = DAT_005b40e0 + 0x170;
}

} /* extern "C" */
