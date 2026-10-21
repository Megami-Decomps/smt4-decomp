#include "common.h"


extern "C" {
/* Reads or updates the requested object state. */
u32 FUN_001642e4(const char *path, u32 *output, u32 flags, u32 mode);
u32 FUN_0014190c(const char *path)
{
    u32 output = 0;
    return FUN_001642e4(path, &output, 1, 0x80);
}
}
