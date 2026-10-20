#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {
extern s8 g_asdLoadFileUseRawPaths; /* 1: use paths exactly as given */

s32 asdLoadFileGetUseRawPaths(void)
{
    return g_asdLoadFileUseRawPaths;
}

} /* extern "C" */
