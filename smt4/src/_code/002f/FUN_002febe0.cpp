#include "common.h"

extern "C" {
extern s8 g_byteSettings[3];

/* Reads the second signed status byte. */
s32 FUN_002febe0(void)
{
    return g_byteSettings[1];
}
}
