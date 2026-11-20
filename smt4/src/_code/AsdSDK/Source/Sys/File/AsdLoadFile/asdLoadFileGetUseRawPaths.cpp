#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Sys/File/AsdLoadPath.h"

extern "C" {

s32 asdLoadFileGetUseRawPaths(void)
{
    return g_asdLoadFileUseRawPaths;
}

} /* extern "C" */
