#include "common.h"


extern "C" {
/* Reads or updates the requested object state. */
u32 asdLoadFileSync(const char *path, u32 *output, u32 flags, u32 mode);
u32 FUN_002c4904(const char *path)
{
    u32 output = 0;
    return asdLoadFileSync(path, &output, 1, 0x80);
}
}
