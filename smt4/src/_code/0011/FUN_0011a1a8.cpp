#include "common.h"

extern "C" {

extern u32 DAT_00464c88[];

/* Reads entry `index` of the word table at 0x464c88. */
u32 FUN_0011a1a8(s32 index)
{
    return DAT_00464c88[index];
}

} /* extern "C" */
