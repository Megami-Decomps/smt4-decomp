#include "common.h"

extern "C" {

void FUN_003d2150(u32 id);
void FUN_004a99bc(u32 arg);

extern u32 DAT_0057a9c8;

void FUN_003f220c(void)
{
    FUN_004a99bc(DAT_0057a9c8);
    FUN_003d2150(0x100026A);
}

} /* extern "C" */
