#include "common.h"


extern "C" {
/* Reads or updates the requested state. */
u32 asdLoadFileAsync(const char *path, u32 offset, u32 flags, void *callback, void *user, u32 mode);
u32 FUN_002a1248(const char *path, u32 offset, u32 flags, u32 mode)
{
    return asdLoadFileAsync(path, offset, flags, NULL, NULL, mode);
}
}
