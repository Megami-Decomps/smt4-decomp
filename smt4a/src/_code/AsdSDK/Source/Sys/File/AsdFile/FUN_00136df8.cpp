/* NON_MATCHING: separate semaphore outputs share the outgoing stack slot and restore the tail call. Retail keeps the semaphore member address in r4 and sets up the create arguments before the existing-handle branch. */
#include "nn/Result.h"
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "sys/ResultReport.h"
#include "shard/W6_W6Match7_SoundInit.h"

// Apocalypse's startup prefix differs from the IV loader globals in AsdFile.h.
struct FileStartupGlobals { u32 unk00; void *buffer; u32 state, semaphore; };
extern "C" {
extern FileStartupGlobals g_asdFile;
extern u32 g_asdFileMutex;
extern u8 g_asdFileEvent[];
void fsInitializeUserMount();
u32 resourceCallDefaultOptions(u32 first, u32 second, u32 mode);
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 pool, u32 size, u32 flags);
u32 svcCreateSemaphore(u32 *handle, u32 initial, u32 maximum);
u32 svcReleaseSemaphore(u32 *handle, u32 mutex, u32 mode);
void nn_os_LightEvent_Initialize(void *event, u32 mode);
void FUN_0014287c();
void FUN_00146808();

/* Allocates file-service workspace and initializes the semaphore, mutex binding and event. */
void FUN_00136df8()
{
    g_asdFile.state = 0;
    fsInitializeUserMount();
    u32 size = resourceCallDefaultOptions(16, 16, 1);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\File\\AsdFile.cpp", 336);
    g_asdFile.buffer = asdMemoryAlloc(0x100, 0x100, 0, size, 1);
    fsMountRomFs(16, 16, g_asdFile.buffer, size, 1);
    enum { SEMAPHORE_ALREADY_INITIALIZED = 0xE0A0183Bu };
    u32 result;
    if (g_asdFile.semaphore) {
        result = SEMAPHORE_ALREADY_INITIALIZED;
    } else {
        u32 handle = 0;
        result = svcCreateSemaphore(&handle, 0, 2);
        if ((s32)!nnResultIsFailure(result)) {
            g_asdFile.semaphore = handle;
            result = 0;
        }
    }
    if ((s32)nnResultIsFailure(result))
        resultHandleFailure(result);
    {
        u32 previousCount;
        result = svcReleaseSemaphore(&previousCount, g_asdFileMutex, 1);
        if (nnResultIsFailure(result))
            resultHandleFailure(result);
    }
    nn_os_LightEvent_Initialize(g_asdFileEvent, 0);
    FUN_0014287c();
    FUN_00146808();
}
}
