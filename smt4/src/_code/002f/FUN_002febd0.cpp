#include "common.h"

extern "C" {
extern s8 g_byteSettings[3];

/* Reads the third signed status byte. */
s32 FUN_002febd0(void)
{
    return g_byteSettings[2];
}
}
