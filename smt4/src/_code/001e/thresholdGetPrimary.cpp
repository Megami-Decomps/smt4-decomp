#include "common.h"

extern "C" const u8 g_primaryThresholds[11];

/* Return a threshold byte, or the default beyond the table. */
extern "C" u32 thresholdGetPrimary(u32 index)
{
    return index < 11 ? g_primaryThresholds[index] : 80;
}
