#include "common.h"
#include "event/3dEvent/3dEventEffect.h"


extern "C" {
/* Reads or updates the requested state. */
u32 asdLoadFileAsync(const char *path, void *offset, s32 flags, void *callback, void *user, s32 mode);
u32 asdLoadFileAsyncNoCallback(const char *path, void *offset, s32 flags, s32 mode)
{
    return asdLoadFileAsync(path, offset, flags, NULL, NULL, mode);
}
}
