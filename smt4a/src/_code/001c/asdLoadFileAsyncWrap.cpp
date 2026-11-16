#include "common.h"
#include "event/3dEvent/3dEventEffect.h"


extern "C" {
/* Reads or updates the requested state. */
u32 asdLoadFileAsyncByPath(const char *path, u32 offset, u32 flags, void *callback, void *user, u32 mode);
u32 asdLoadFileAsyncWrap(const char *path, u32 offset, u32 flags, u32 mode)
{
    return asdLoadFileAsyncByPath(path, offset, flags, NULL, NULL, mode);
}
}
