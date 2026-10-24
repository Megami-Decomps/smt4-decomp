#include "addon/SceneResource.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern SceneResourceWork *g_sceneResourceWork;
void *asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 mode);
void FUN_00282bfc(s32 channel, s32 value);
void FUN_001b4fe8(u32 job);
s32 FUN_0020ece4(u32 job);
s32 sceneUpdateOptionalResource(u32 job);
s32 FUN_0020ed2c(u32 job);
u32 asdProcessCreateSimple(const char *name, s32 group, s32 priority, u32 parent,
    AsdProcFunc start, AsdProcUpdateFunc update, void *work);
u32 taskCreateDraw(const char *name, s32 priority, s32 group, u32 flags,
    AsdProcUpdateFunc update, AsdProcFunc end, void *work, u32 parent);

// Start the optional scene-resource process and its upper/lower screen draw tasks.
void FUN_001b0c04(s32 preserveChannels)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\addon\\aocMain.cpp", 149);
    SceneResourceWork *work = static_cast<SceneResourceWork *>(asdMemAlloc(0x100, 0x100, 0, sizeof(SceneResourceWork), 1));
    g_sceneResourceWork = work;
    work->readyToRelease = 0;
    work->state.resetChannels = 0;
    work->resource = NULL;
    work->state.pending = 0;
    if (preserveChannels == 0) {
        work->state.resetChannels = 1;
        FUN_00282bfc(0, 0xFF);
        FUN_00282bfc(1, 0xFF);
    }
    work->job = asdProcessCreateSimple("AOCMainProc", 2, 0, 0, FUN_001b4fe8, FUN_0020ece4, g_sceneResourceWork);
    taskCreateDraw("AOCDrawUp L", 0x7D, 1, 0, sceneUpdateOptionalResource, NULL, g_sceneResourceWork, work->job);
    taskCreateDraw("AOCDrawUp R", 0xDB, 1, 0, sceneUpdateOptionalResource, NULL, g_sceneResourceWork, work->job);
    work->tasks.drawJob = taskCreateDraw("AOCDrawDown", 0xE7, 1, 0, FUN_0020ed2c, NULL, g_sceneResourceWork, work->job);
}
}
