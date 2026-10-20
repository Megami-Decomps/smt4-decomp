#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {
extern u8 g_asdLoadFileUseRawPaths; /* 1: use paths exactly as given */

void asdLoadFileSetUseRawPaths(u8 useRawPaths)
{
    g_asdLoadFileUseRawPaths = useRawPaths;
}

} /* extern "C" */
