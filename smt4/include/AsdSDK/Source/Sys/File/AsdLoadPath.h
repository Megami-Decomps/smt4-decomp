#ifndef ASD_LOAD_PATH_IV_H
#define ASD_LOAD_PATH_IV_H

#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "runtime/Stdio.h"
#include <stdio.h>

extern "C" {
extern s8 g_asdLoadFileUseRawPaths;
extern const char DAT_00409800[]; /* "patch:/%s" */
extern const char DAT_0040980c[]; /* "rom:/%s" */
s32 asdLoadFileIsPatched(const char *path);
} /* extern "C" */

/* Resolves an unqualified path under the patch or ROM device. */
static __inline void asdLoadFileBuildPath(char *destination, const char *path)
{
    if (g_asdLoadFileUseRawPaths != 0 || asdLoadFileHasDevice(path) != 0) {
        __2sprintf(destination, path);
    } else if (asdLoadFileIsPatched(path) != 0) {
        __2sprintf(destination, DAT_00409800, path);
    } else {
        __2sprintf(destination, DAT_0040980c, path);
    }
}

/* The asynchronous loader formats via the compiler's stdio entry. The packed formats keep the
 * same offsets as the archive-device strings it shares with the synchronous loaders. */
static __inline void asdLoadFileBuildPathStdio(char *destination, const char *path)
{
    static const struct {
        char patch[0x0C];
        char rom[0x08];
    } formats = {
        "patch:/%s",
        "rom:/%s"
    };
    if (g_asdLoadFileUseRawPaths != 0 || asdLoadFileHasDevice(path) != 0) {
        sprintf(destination, path);
    } else if (asdLoadFileIsPatched(path) != 0) {
        sprintf(destination, formats.patch, path);
    } else {
        sprintf(destination, formats.rom, path);
    }
}

#endif
