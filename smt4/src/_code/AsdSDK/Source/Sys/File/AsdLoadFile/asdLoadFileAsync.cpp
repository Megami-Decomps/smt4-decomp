/* NON_MATCHING: the retail build has a stripped debug call (file/line setup + nop) before the job allocation. */
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {
extern s8 g_asdLoadFileUseRawPaths; /* 1: use paths exactly as given */

void memClear(void *buf, u32 size);
s32 asdLoadFileHasDevice(const char *path);
s32 asdLoadFileIsPatched(const char *path);
s32 FUN_002be624(char *dst, const char *format, ...);
void *asdMemAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
u32 FUN_00155cb0(const char *path, u32 unk, void (*callback)(void *), AsdLoadJob *job);
void FUN_00155c24(void *job);
void FUN_002b0184(u32 handle, u8 flags);
void FUN_0014e834(u32 handle, u32 priority);

/* Starts an asynchronous load: *result (if given) is cleared now and set when the load completes. */
void asdLoadFileAsync(const char *path, u32 *result, u32 flags, u32 arg, u32 arg2, u32 priority)
{
    char fullPath[ASD_FILE_PATH_LEN];
    AsdLoadJob *job;

    memClear(fullPath, ASD_FILE_PATH_LEN);
    if (g_asdLoadFileUseRawPaths != 0 || asdLoadFileHasDevice(path) != 0) {
        FUN_002be624(fullPath, path);
    } else if (asdLoadFileIsPatched(path) != 0) {
        FUN_002be624(fullPath, "patch:/%s", path);
    } else {
        FUN_002be624(fullPath, "rom:/%s", path);
    }

    job = (AsdLoadJob *)asdMemAlloc(0x100, 0x100, 0, sizeof(AsdLoadJob), 0);
    job->result = result;
    job->arg = arg;
    job->arg2 = arg2;
    job->flags = flags;
    job->priority = priority;
    if (result != NULL) {
        *result = 0;
    }
    job->handle = FUN_00155cb0(fullPath, 0, FUN_00155c24, job);
    FUN_002b0184(job->handle, ((flags & ASD_LOAD_FLAG_0) != 0) | (((flags & ASD_LOAD_FLAG_1) != 0) ? 0x10 : 0));
    FUN_0014e834(job->handle, priority);
}

} /* extern "C" */
