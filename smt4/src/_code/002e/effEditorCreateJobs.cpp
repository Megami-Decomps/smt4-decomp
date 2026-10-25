#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "shard/W6_W6Match2_ShutdownJobs.h"

extern "C" {

extern ShutdownJobs g_shutdownJobs;

s32 jobGroupStopWhenReady(u32 handle);
s32 titleSceneUpdateAndAdvanceTransition(u32 handle);
s32 titleSceneInitializeCallback(u32 handle);
s32 titleSceneUpdateCallback(u32 handle);
s32 titleSceneFinishCallback(u32 handle);
void FUN_001dce30(void);

/* Creates the effect editor's main process and its four child processes (created in priority order, stored by slot);
 * the shutdown callback starts out empty. */
u32 effEditorCreateJobs(void)
{
    g_shutdownJobs.mainJob = asdProcessCreateSimple((const s8 *)"effEditorCalc", 2, 0, 0, jobGroupStopWhenReady, NULL, 0);
    g_shutdownJobs.childJobs[0] = asdProcessCreateSimple((const s8 *)"effEditor2DULCD", 0x65, 0, 0, titleSceneUpdateAndAdvanceTransition, NULL, 0);
    g_shutdownJobs.childJobs[2] = asdProcessCreateSimple((const s8 *)"effEditor3DL", 0x75, 0, 0, titleSceneInitializeCallback, NULL, 0);
    g_shutdownJobs.childJobs[3] = asdProcessCreateSimple((const s8 *)"effEditor3DR", 0xd3, 0, 0, titleSceneUpdateCallback, NULL, 0);
    g_shutdownJobs.childJobs[1] = asdProcessCreateSimple((const s8 *)"effEditor2DDLCD", 0xe6, 0, 0, titleSceneFinishCallback, NULL, 0);
    FUN_001dce30();
    g_shutdownJobs.finish = NULL;
    return g_shutdownJobs.mainJob;
}

} /* extern "C" */
