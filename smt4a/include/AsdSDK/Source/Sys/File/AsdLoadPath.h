#ifndef ASD_LOAD_PATH_A_H
#define ASD_LOAD_PATH_A_H

#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "runtime/Stdio.h"
#include <stdio.h>

extern "C" {
extern u8 g_asdLoadFileUseRawPaths;
extern const char g_asdRomPathFormat[]; /* Shared "rom:/%s" format. */
}

/* Resolves an unqualified path under the default device. */
static __inline void asdLoadFileBuildPath(char *destination, const char *path)
{
    if (g_asdLoadFileUseRawPaths != 0 || asdLoadFileHasDevice(path) != 0) {
        sprintf(destination, path);
    } else {
        __2sprintf(destination, g_asdRomPathFormat, path);
    }
}

#endif
