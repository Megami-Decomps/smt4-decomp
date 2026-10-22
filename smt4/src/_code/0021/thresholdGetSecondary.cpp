#include "common.h"

extern "C" const u8 g_secondaryThresholds[11];

/* Return a threshold byte, or the default beyond the table. */
extern "C" u32 thresholdGetSecondary(u32 index)
{
    return index < 11 ? g_secondaryThresholds[index] : 80;
}
