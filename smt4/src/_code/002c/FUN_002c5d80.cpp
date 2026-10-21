/* NON_MATCHING: compiler combines flag expressions in a different register and instruction order. */
#include "common.h"


extern "C" {
/* Reads or updates the requested state. */
u32 FUN_002c5d80(u32 value, bool enabled)
{
    return ((value != 1) | (enabled ? 0x1000 : 0) | (value << 4)) | 0xf00;
}
}
