#include "common.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"


extern "C" {
/* Starts an asynchronous load using the default request priority. */
void asdLoadFileAsync(const char *path, u32 *result, u32 flags, u32 arg, u32 arg2, u32 priority);
void asdLoadFileAsyncSimple(const char *path, u32 *result, u32 flags)
{
    asdLoadFileAsync(path, result, flags, 0, 0, 4);
}
}
