#include "common.h"

extern "C" {

extern u8 DAT_00409ba8[];

u8 padAlternateButtonIndex(int index)
{
    return DAT_00409ba8[index];
}

} /* extern "C" */
