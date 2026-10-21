#include "common.h"


extern "C" {
/* Reads or updates the requested state. */
u32 FUN_001bcfb4(const char *path, u32 offset, u32 flags, void *callback, void *user, u32 mode);
u32 FUN_001cd404(const char *path, u32 offset, u32 flags, u32 mode)
{
    return FUN_001bcfb4(path, offset, flags, NULL, NULL, mode);
}
}
