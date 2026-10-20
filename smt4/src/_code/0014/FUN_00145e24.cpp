#include "common.h"

extern "C" {

extern u8 DAT_004e0d48[];

u8 FUN_00145e24(s32 index)
{
    return DAT_004e0d48[index];
}

} /* extern "C" */
