/* NON_MATCHING: path and path-buffer registers are swapped; parameter-save instruction scheduling differs. */
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_0053d4c0[];
extern u8 g_asdLoadFileUseRawPaths;
void sysMemClear(void *buffer, u32 size);
s32 asdLoadFileHasDevice(const char *path);
s32 textFormatBuffer(char *destination, const char *format, ...);
void *asdMemoryAllocTracked(s32 heap, s32 alignment, s32 flags, u32 size, s32 fromFront);
u32 asdFileEnqueueRead(const char *path, u8 flags, void (*callback)(void *), void *argument);
void asdFileFinalizeCompletion(void *job);
void asdFileRequestSetHeapKind(u32 handle, u8 flags);
void FUN_001bceb8(u32 handle, u32 priority);

// Start an asynchronous load and clear its optional completion result.
void FUN_001bcfb4(const char *path, u32 *result, u32 flags, u32 arg, u32 arg2, u32 priority)
{
    char fullPath[ASD_FILE_PATH_LEN];
    sysMemClear(fullPath, sizeof(fullPath));
    char *destination = fullPath;
    if (g_asdLoadFileUseRawPaths != 0 || asdLoadFileHasDevice(path) != 0) {
        textFormatBuffer(destination, path);
    } else {
        textFormatBuffer(destination, DAT_0053d4c0, path);
    }
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\File\\AsdLoadFile.cpp", 372);
    AsdLoadJob *job = static_cast<AsdLoadJob *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(AsdLoadJob), 0));
    job->result = result;
    job->arg = arg;
    job->arg2 = arg2;
    job->flags = flags;
    job->priority = priority;
    if (result != NULL) {
        *result = 0;
    }
    job->handle = asdFileEnqueueRead(fullPath, 0, asdFileFinalizeCompletion, job);
    u8 heapKind = 0;
    if ((flags & ASD_LOAD_FLAG_0) != 0) {
        heapKind = 1;
    }
    if ((flags & ASD_LOAD_FLAG_1) != 0) {
        heapKind |= 0x10;
    }
    asdFileRequestSetHeapKind(job->handle, heapKind);
    FUN_001bceb8(job->handle, priority);
}
}
