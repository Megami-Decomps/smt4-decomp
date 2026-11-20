#include <stdio.h>
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern const char DAT_00409814[]; /* __FILE__ */
extern s8 g_asdLoadFileUseRawPaths; /* 1: use paths exactly as given */

s32 asdLoadFileIsPatched(const char *path);
AsdFileRequest *FUN_00155cb0(const char *path, u8 flag, void (*callback)(void *), void *job);
void asdFileFinalizeCompletion(void *job);
void asdFileRequestSetHeapKind(u32 handle, u8 flags);
void optionalParameterTrySet(u32 handle, u32 priority);

/* The formats of a path without a device, one object at 0x409800..0x409814 (patch first, padded to a word; two
 * separate arrays would be emitted unpadded and in reverse order): under the patch device when the file is patched,
 * else under the ROM device. */
static const struct {
    char patch[0x0C];
    char rom[0x08];
} s_pathFormats = {
    "patch:/%s",
    "rom:/%s"
};

/* Writes the full path of `path` into `destination`: as given when raw paths are on or it names a device, else under the
 * patch device when the file is patched, else under the ROM device. */
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

/* Starts an asynchronous load: *result (if given) is cleared now and set when the load completes. */
void asdLoadFileAsync(const char *path, u32 *result, u32 flags, u32 arg, u32 arg2, u32 priority)
{
    char fullPath[ASD_FILE_PATH_LEN];
    AsdLoadJob *job;

    memClear(fullPath, ASD_FILE_PATH_LEN);
    asdLoadFileBuildPath(fullPath, path);

    asdDebugTrace(DAT_00409814, 353);
    job = (AsdLoadJob *)asdMemAlloc(0x100, 0x100, 0, sizeof(AsdLoadJob), 0);
    job->result = result;
    job->arg = arg;
    job->arg2 = arg2;
    job->flags = flags;
    job->priority = priority;
    if (result != NULL) {
        *result = 0;
    }
    job->handle = (u32)FUN_00155cb0(fullPath, 0, asdFileFinalizeCompletion, job);
    u8 heapKind = 0;
    if ((flags & ASD_LOAD_FLAG_0) != 0) {
        heapKind = 1;
    }
    if ((flags & ASD_LOAD_FLAG_1) != 0) {
        heapKind |= 0x10;
    }
    asdFileRequestSetHeapKind(job->handle, heapKind);
    optionalParameterTrySet(job->handle, priority);
}

} /* extern "C" */
