#include "AsdSDK/Source/Sys/File/AsdLoadPath.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void sysMemClear(void *buffer, u32 size);
void *asdMemoryAllocTracked(s32 heap, s32 alignment, s32 flags, u32 size, s32 fromFront);
u32 asdFileEnqueueRead(const char *path, u8 flags, void (*callback)(void *), void *argument);
void asdFileFinalizeCompletion(void *job);
void asdFileRequestSetHeapKind(u32 handle, u8 flags);
void optionalParameterTrySet(u32 handle, u32 priority);

/* Starts an asynchronous load and clears its optional completion result. */
void asdLoadFileAsyncByPath(const char *path, u32 *result, u32 flags, u32 arg, u32 arg2, u32 priority)
{
    char fullPath[ASD_FILE_PATH_LEN];
    sysMemClear(fullPath, sizeof(fullPath));
    asdLoadFileBuildPath(fullPath, path);
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
    optionalParameterTrySet(job->handle, priority);
}
}
