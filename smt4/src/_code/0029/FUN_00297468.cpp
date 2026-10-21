#include "common.h"


extern "C" {
/* Computes or forwards the requested value. */
u32 asdLoadFileAsync(const char *path, u32 offset, u32 flags, void *callback, void *user, u32 mode);
u32 FUN_00297468(const char *path, u32 offset, u32 flags)
{
    return asdLoadFileAsync(path, offset, flags, NULL, NULL, 4);
}
}
