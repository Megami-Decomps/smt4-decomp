#ifndef ASD_LOAD_PATH_IV_H
#define ASD_LOAD_PATH_IV_H

#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include <stdio.h>

extern "C" {
extern s8 g_asdLoadFileUseRawPaths;
s32 asdLoadFileIsPatched(const char *path);
}

/* The patched and default device formats form one aligned block in IV. */
static const struct {
    char patch[0x0C];
    char rom[0x08];
} s_pathFormats = {
    "patch:/%s",
    "rom:/%s"
};

/* Resolves an unqualified path under the patch or ROM device. */
static __inline void asdLoadFileBuildPath(char *destination, const char *path)
{
    if (g_asdLoadFileUseRawPaths != 0 || asdLoadFileHasDevice(path) != 0) {
        sprintf(destination, path);
    } else if (asdLoadFileIsPatched(path) != 0) {
        sprintf(destination, s_pathFormats.patch, path);
    } else {
        sprintf(destination, s_pathFormats.rom, path);
    }
}

#endif
