#include "common.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"


extern "C" {
/* Starts an asynchronous load using the default request priority. */
void FUN_001bcfb4(const char *path, u32 *result, u32 flags, u32 arg, u32 arg2, u32 priority);
void asdLoadFileAsyncSimple(const char *path, u32 *result, u32 flags)
{
    FUN_001bcfb4(path, result, flags, 0, 0, 4);
}
}
