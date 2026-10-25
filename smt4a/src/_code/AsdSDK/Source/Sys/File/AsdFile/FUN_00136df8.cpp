/* NON_MATCHING: retail retains removed debug filename/line setup and synchronization-hook NOPs. */
#include "nn/Result.h"
#include "common.h"

// Apocalypse's startup prefix differs from the IV loader globals in AsdFile.h.
struct FileStartupGlobals { u32 unk00; void *buffer; u32 state, semaphore; };
extern "C" {
extern FileStartupGlobals g_asdFile;
extern u32 g_asdFileMutex;
extern u8 g_asdFileEvent[];
void FUN_00146720();
u32 resourceCallDefaultOptions(u32 first, u32 second, u32 mode);
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 pool, u32 size, u32 flags);
void FUN_0014685c(u32 first, u32 second, void *buffer, u32 size, u32 mode);
u32 FUN_0014a930(u32 *handle, u32 initial, u32 maximum);
u32 FUN_0019a364(u32 *handle, u32 mutex, u32 mode);
void FUN_002e3140(u32 result);
void nn_os_LightEvent_Initialize(void *event, u32 mode);
void FUN_0014287c();
void FUN_00146808();

// Allocate file-service workspace and initialize its semaphore, mutex binding and event.
void FUN_00136df8()
{
    g_asdFile.state = 0;
    FUN_00146720();
    u32 size = resourceCallDefaultOptions(16, 16, 1);
    g_asdFile.buffer = asdMemoryAlloc(0x100, 0x100, 0, size, 1);
    FUN_0014685c(16, 16, g_asdFile.buffer, size, 1);
    u32 handle = 0;
    u32 result;
    if (g_asdFile.semaphore) {
        result = 0xe0a0183b;
    } else {
        result = FUN_0014a930(&handle, 0, 2);
        if ((s32)!nnResultIsFailure(result)) {
            g_asdFile.semaphore = handle;
            result = 0;
        }
    }
    if ((s32)nnResultIsFailure(result))
        FUN_002e3140(result);
    result = FUN_0019a364(&handle, g_asdFileMutex, 1);
    if ((s32)nnResultIsFailure(result))
        FUN_002e3140(result);
    nn_os_LightEvent_Initialize(g_asdFileEvent, 0);
    FUN_0014287c();
    FUN_00146808();
}
}
