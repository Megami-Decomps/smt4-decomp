#include "common.h"

extern "C" {

void FUN_003f86f8(s32 arg);
void FUN_004715a8(u32 value);

extern u32 g_aocSystem;

void FUN_003a7040(void)
{
    FUN_003f86f8(0x45);
    FUN_004715a8(g_aocSystem);
}

} /* extern "C" */
