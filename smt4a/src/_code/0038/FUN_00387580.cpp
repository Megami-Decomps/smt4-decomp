/* NON_MATCHING: compiler allocates the packed flags and converted alpha to different registers. */
#include "common.h"


extern "C" {
/* Reads or updates the requested state. */
u32 FUN_00387580(u32 kind, f32 value)
{
    u32 alpha = (u32)(value * 255.0f + 0.5f);
    return (kind != 1) | (kind << 4) | ((alpha & 0xff) << 8);
}
}
