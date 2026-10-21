#include "common.h"


extern "C" {
/* Computes or forwards the requested value. */
u32 FUN_001bcfb4(const char *path, u32 offset, u32 flags, void *callback, void *user, u32 mode);
u32 asdLoadFileAsyncSimple(const char *path, u32 offset, u32 flags)
{
    return FUN_001bcfb4(path, offset, flags, NULL, NULL, 4);
}
}
