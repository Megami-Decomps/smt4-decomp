#include "common.h"

extern "C" {

extern u16 DAT_004ea494[];

void FUN_00158618(s32 index, u16 value)
{
    DAT_004ea494[index] = value;
}

} /* extern "C" */
