/* NON_MATCHING: the frame and tail call now agree. Retail reuses its saved zero for the semaphore's
 * initial count and reloads the handle's address before releasing; the build rematerializes the zero
 * and keeps the address. */
#include "AsdSDK/Source/Sys/File/AsdFile.h"
#include "AsdSDK/AsdDebug.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"
#include "sys/HandleWait.h"

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
void nn_os_LightEvent_Initialize(void *event, u32 mode);
void asdFileStartWorkerThread(void);
void fsInitializeAccessDelay(void);

/* Starts the file service: the ROM and patch workspaces, request semaphore and worker event. */
void asdFileInitialize(void)
{
    g_asdFile.head = NULL;
    fsInitializeUserMount();
    u32 romSize = resourceCallDefaultOptions(16, 16, 1);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Sys\\File\\AsdFile.cpp", 0x11c);
    void *romBuffer = asdMemoryAlloc(0x100, 0x100, 0, romSize, 1);
    g_asdFile.entries = (AsdFileEntry *)romBuffer;
    fsMountRomFs(16, 16, romBuffer, romSize, 1);
    u32 patchSize = requestForwardKindFive(16, 16, 1);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Sys\\File\\AsdFile.cpp", 0x122);
    g_asdFile.bufferB = asdMemoryAlloc(0x100, 0x100, 0, patchSize, 1);
    s32 result = FUN_0010f698("patch:", 16, 16, g_asdFile.bufferB, patchSize, 1);
    if (nnResultIsFailure(result)) {
        asdFatalError();
    }
    /* The kernel output reuses the stack slot of the mount call's outgoing arguments. */
    {
        u32 handle = 0;
        result = svcCreateSemaphore(&handle, 0, 2);
        if (!nnResultIsFailure(result)) {
            g_asdFileMutex = handle;
            result = 0;
        }
    }
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
    semaphoreRelease(g_asdFileMutex, 1);
    nn_os_LightEvent_Initialize(g_asdFileEvent, 0);
    asdFileStartWorkerThread();
    fsInitializeAccessDelay();
}

} /* extern "C" */
