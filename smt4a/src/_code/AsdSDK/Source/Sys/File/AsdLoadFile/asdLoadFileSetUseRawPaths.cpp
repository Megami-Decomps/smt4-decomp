#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {
extern s8 g_asdLoadFileUseRawPaths; /* 1: use paths exactly as given */

/* Sets the "use paths exactly as given" switch; returns its previous value. */
s32 asdLoadFileSetUseRawPaths(s8 useRawPaths)
{
    s32 previous = g_asdLoadFileUseRawPaths;

    g_asdLoadFileUseRawPaths = useRawPaths;
    return previous;
}

} /* extern "C" */
