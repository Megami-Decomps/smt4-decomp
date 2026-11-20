/* NON_MATCHING: retail keeps the semaphore handle at sp+0 (shared with the call-argument area, 12-byte frame), the shared zero in r7, and ends asdFileStartWorkerThread/FUN_0010f764 with two stripped hook nops before the tail call; armcc allocates the handle at sp+8 and calls bl. */
#include "AsdSDK/Source/Sys/File/AsdFile.h"
#include "AsdSDK/AsdDebug.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

extern "C" {
extern AsdFileGlobals g_asdFile;
extern u32 g_asdFileMutex;
extern u8 g_asdFileEvent[];

void fsInitializeUserMount(void);
void *asdMemoryAlloc(u32 bytes, u32 alignment, u32 flags, u32 heap, u32 clear);
void fsMountRomFs(u32 first, u32 second, void *buffer, u32 size, u32 mode);
u32 requestForwardKindFive(u32 first, u32 second, u32 mode);
u32 FUN_0010f698(const char *device, u32 first, u32 second, void *buffer, u32 size, u32 mode);
void asdFatalError(void);
u32 svcCreateSemaphore(u32 *handle, u32 initial, u32 maximum);
u32 svcReleaseSemaphore(u32 *handle, u32 object, u32 mode);
void nn_os_LightEvent_Initialize(void *event, u32 mode);
void asdFileStartWorkerThread(void);
void FUN_0010f764(void);

// Start the file service: the "rom:" and "patch:" device workspaces, the request lock and the event.
void FUN_0010250c(void)
{
    u32 handle = 0;
    g_asdFile.head = NULL;
    fsInitializeUserMount();
    u32 romSize = resourceCallDefaultOptions(16, 16, 1);
    asdDebugTrace("c:\\SMT4\\RXD686\\sdds4\\Patch\\AsdSDK\\Source\\Sys\\File\\AsdFile.cpp", 0x11c);
    void *romBuffer = asdMemoryAlloc(0x100, 0x100, 0, romSize, 1);
    g_asdFile.entries = (AsdFileEntry *)romBuffer;
    fsMountRomFs(16, 16, romBuffer, romSize, 1);
    u32 patchSize = requestForwardKindFive(16, 16, 1);
    asdDebugTrace("c:\\SMT4\\RXD686\\sdds4\\Patch\\AsdSDK\\Source\\Sys\\File\\AsdFile.cpp", 0x122);
    g_asdFile.bufferB = asdMemoryAlloc(0x100, 0x100, 0, patchSize, 1);
    u32 result = FUN_0010f698("patch:", 16, 16, g_asdFile.bufferB, patchSize, 1);
    if (nnResultIsFailure(result)) {
        asdFatalError();
    }
    result = svcCreateSemaphore(&handle, 0, 2);
    if (nnResultIsSuccess(result)) {
        g_asdFileMutex = handle;
        result = 0;
    }
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
    result = svcReleaseSemaphore(&handle, g_asdFileMutex, 1);
    failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
    nn_os_LightEvent_Initialize(g_asdFileEvent, 0);
    asdFileStartWorkerThread();
    FUN_0010f764();
}

} /* extern "C" */
