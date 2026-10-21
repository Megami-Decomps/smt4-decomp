/* NON_MATCHING: retail uses shift pairs for narrowing while compiler may use extension instructions. */
#include "common.h"


extern "C" {
/* Reads or computes the requested value. */
u32 FUN_002e354a(u32 value, const u32 *instruction)
{
    if (*instruction & 0x400) {
        return (u8)value;
    }
    if (*instruction & 0x100) {
        return (u16)value;
    }
    return value;
}
}
