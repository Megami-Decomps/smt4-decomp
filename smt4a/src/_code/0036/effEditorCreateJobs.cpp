#include "shard/W6_W6Match2_ShutdownJobs.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
u32 asdProcessCreateSimple(const char *name, s32 priority, u16 startDelay, u16 endDelay,
                           AsdProcUpdateFunc update, AsdProcFunc end, u32 parent);
s32 jobGroupStopWhenReady(u32 process);
s32 FUN_00388a40(u32 process);
s32 FUN_00388a60(u32 process);
s32 FUN_0039aec8(u32 process);
s32 FUN_00388a20(u32 process);
void FUN_002830cc(void);
extern ShutdownJobs g_shutdownJobs;

// Create the effect editor's update job and its four screen/layer draw jobs.
u32 effEditorCreateJobs(void)
{
    g_shutdownJobs.mainJob = asdProcessCreateSimple("effEditorCalc", 4, 0, 0,
                                                   jobGroupStopWhenReady, NULL, 0);
    g_shutdownJobs.childJobs[0] = asdProcessCreateSimple("effEditor2DULCD", 0x65, 0, 0,
                                                        FUN_00388a40, NULL, 0);
    g_shutdownJobs.childJobs[2] = asdProcessCreateSimple("effEditor3DL", 0x77, 0, 0,
                                                        FUN_00388a60, NULL, 0);
    g_shutdownJobs.childJobs[3] = asdProcessCreateSimple("effEditor3DR", 0xD3, 0, 0,
                                                        FUN_0039aec8, NULL, 0);
    g_shutdownJobs.childJobs[1] = asdProcessCreateSimple("effEditor2DDLCD", 0xEA, 0, 0,
                                                        FUN_00388a20, NULL, 0);
    FUN_002830cc();
    g_shutdownJobs.finish = NULL;
    return g_shutdownJobs.mainJob;
}

} /* extern "C" */
