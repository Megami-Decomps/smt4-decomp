/* NON_MATCHING: register allocation only: retail keeps the path in r4 and the path-buffer pointer in r9, the built code swaps them */
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_00409814[]; /* __FILE__ */
extern const char DAT_00409800[]; /* "patch:/%s" */
extern const char DAT_0040980c[]; /* "rom:/%s" */
extern s8 g_asdLoadFileUseRawPaths; /* 1: use paths exactly as given */

void memClear(void *buf, u32 size);
s32 asdLoadFileHasDevice(const char *path);
s32 asdLoadFileIsPatched(const char *path);
s32 textFormatBuffer(char *dst, const char *format, ...);
void *asdMemAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
u32 FUN_00155cb0(const char *path, u32 unk, void (*callback)(void *), AsdLoadJob *job);
void asdFileFinalizeCompletion(void *job);
void asdFileRequestSetHeapKind(u32 handle, u8 flags);
void FUN_0014e834(u32 handle, u32 priority);

/* Starts an asynchronous load: *result (if given) is cleared now and set when the load completes. */
void asdLoadFileAsync(const char *path, u32 *result, u32 flags, u32 arg, u32 arg2, u32 priority)
{
    char fullPath[ASD_FILE_PATH_LEN];
    AsdLoadJob *job;
    char *dst;

    memClear(fullPath, ASD_FILE_PATH_LEN);
    dst = fullPath;
    if (g_asdLoadFileUseRawPaths != 0 || asdLoadFileHasDevice(path) != 0) {
        textFormatBuffer(dst, path);
    } else if (asdLoadFileIsPatched(path) != 0) {
        textFormatBuffer(dst, DAT_00409800, path);
    } else {
        textFormatBuffer(dst, DAT_0040980c, path);
    }

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
    job->handle = FUN_00155cb0(fullPath, 0, asdFileFinalizeCompletion, job);
    asdFileRequestSetHeapKind(job->handle, ((flags & ASD_LOAD_FLAG_0) != 0) | (((flags & ASD_LOAD_FLAG_1) != 0) ? 0x10 : 0));
    FUN_0014e834(job->handle, priority);
}

} /* extern "C" */
