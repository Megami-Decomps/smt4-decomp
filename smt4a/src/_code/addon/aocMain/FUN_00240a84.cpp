/* NON_MATCHING: global-work address and zero constant occupy r6/r7 swapped from retail; all instruction counts and task setup agree. */
#include "addon/SceneResource.h"
#include "AsdSDK/AsdDebug.h"
#include "sys/Task.h"

extern "C" {
extern SceneResourceWork *g_sceneResourceWork;
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 mode, u32 size, u32 tracked);
u32 asdProcessCreateSimple(const char *, s32, u32, u32, TaskFunc, TaskFunc, void *);
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
    work->job = asdProcessCreateSimple("AOCMainProc", 4, 0, 0, FUN_0024b5ac,
                                       sceneResourceShutdownAoc, g_sceneResourceWork);
    taskCreateDraw("AOCDrawUp L", 0x81, 1, 0, sceneUpdateOptionalResource, NULL,
                   g_sceneResourceWork, work->job);
    taskCreateDraw("AOCDrawUp R", 0xdd, 1, 0, sceneUpdateOptionalResource, NULL,
                   g_sceneResourceWork, work->job);
    work->tasks.drawJob = taskCreateDraw("AOCDrawDown", 0xeb, 1, 0, FUN_002dec08, NULL,
                                       g_sceneResourceWork, work->job);
}
}
