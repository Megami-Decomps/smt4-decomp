#include "addon/SceneResource.h"
#include "AsdSDK/AsdDebug.h"
#include "sys/Task.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern SceneResourceWork *g_sceneResourceWork;
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 mode, u32 size, u32 tracked);
u32 taskCreateDraw(const char *, s32, s32, s32, TaskFunc, TaskFunc, void *, u32);
void FUN_0022677c(s32 channel, s32 value);
void FUN_0024b5ac(void *work);
void sceneResourceShutdownAoc(void *work);
void sceneUpdateOptionalResource(void *work);
void FUN_002dec08(void *work);

// Allocate add-on scene work and install its main process and three display tasks.
void FUN_00240a84(s32 mode)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\addon\\aocMain.cpp", 149);
    SceneResourceWork *work = static_cast<SceneResourceWork *>(asdMemoryAllocTracked(0x100, 0x100, 0, 0x20, 1));
    g_sceneResourceWork = work;
    work->readyToRelease = 0;
    work->state.resetChannels = 0;
    work->resource = NULL;
    work->state.pending = 0;
    if (mode == 0) {
        work->state.resetChannels = 1;
        FUN_0022677c(0, 0xff);
        FUN_0022677c(1, 0xff);
    }
    work->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("AOCMainProc"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_0024b5ac), reinterpret_cast<AsdProcFunc>(sceneResourceShutdownAoc), reinterpret_cast<u32>(g_sceneResourceWork));
    taskCreateDraw("AOCDrawUp L", 0x81, 1, 0, sceneUpdateOptionalResource, NULL,
                   g_sceneResourceWork, work->job);
    taskCreateDraw("AOCDrawUp R", 0xdd, 1, 0, sceneUpdateOptionalResource, NULL,
                   g_sceneResourceWork, work->job);
    work->tasks.drawJob = taskCreateDraw("AOCDrawDown", 0xeb, 1, 0, FUN_002dec08, NULL,
                                       g_sceneResourceWork, work->job);
}
}
