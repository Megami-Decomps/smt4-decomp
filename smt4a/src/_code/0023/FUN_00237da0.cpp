#include "common.h"


extern "C" {
/* Reads or updates the requested state. */
u32 FUN_00347688(u32 a, u32 b, u32 c, u32 d, const void *data, u32 flags, u32 extra, u32 e, u32 h, u32 i, u32 j);
u32 FUN_00237da0(u32 a, u32 b, u32 c, u32 d, const void *data, u32 flags, u32 e, u32 h, u32 i, u32 j)
{
    return FUN_00347688(a, b, c, d, data, flags, 0, e, h, i, j);
}
}
