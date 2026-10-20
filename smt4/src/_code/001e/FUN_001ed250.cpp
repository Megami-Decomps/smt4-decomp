#include "common.h"

extern "C" {

extern u8 DAT_00478000[][0x148];

u8 *FUN_001ed250(s32 index)
{
    return DAT_00478000[index];
}

} /* extern "C" */
