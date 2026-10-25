#include "common.h"

extern "C" {

/* Packs the low bytes into a big-endian halfword. */
u32 FUN_001f4934(u32 high, u32 low)
{
    return ((high << 8) & 0xFF00) | (low & 0xFF);
}

} /* extern "C" */
