/* NON_MATCHING: the stop sequence now runs through handleWait and NnOsThread as retail (the final close reloads the thread address); remaining: retail evaluates the timeout test as a bool (movne/moveq, then teq #1) where armcc folds it into one branch, builds the zero-timeout wait arguments with str+stm, and loads the handle straight into r0 after the priority conversion. */
#include "AsdSDK/Source/Sys/File/AsdFile.h"
#include "nn/os/AddressSpaceManager.h"
#include "nn/os/Thread.h"
#include "nn/Result.h"
#include "nn/svc.h"
#include "sys/HandleWait.h"

extern "C" {
extern AsdFileGlobals g_asdFile;
extern NnOsThread g_asdFileThread;

s32 nn_os_detail_ConvertLibraryToSvcPriority(s32 priority);
void nn_os_LightEvent_Signal(void *event);
void addressSpaceRegionFree(AddressSpaceRegion *region);
s32 fsUnmountByName(const char *device);
void asdFatalError(void);

/* Shuts the file service down: tells the worker thread to stop, waits for it, releases its
 * stack and unmounts the "rom:" and "patch:" devices. */
void FUN_00103504(void)
{
    if (g_asdFileThread.handle != 0) {
        s32 result = handleWait(g_asdFileThread.handle, 0);
        if (nnResultIsNotTimeout(result) != true) {
            s32 priority = nn_os_detail_ConvertLibraryToSvcPriority(0x10);
            result = nn::svc::SetThreadPriority(g_asdFileThread.handle, priority);
            bool failed = nnResultIsFailure(result);
            if (failed) {
                resultHandleFailure(result, failed);
            }
            g_asdFile.stopRequested = 1;
            nn_os_LightEvent_Signal(g_asdFile.event);
            handleWait(g_asdFileThread.handle, -1);
            g_asdFileThread.joined = 1;
            g_asdFileThread.finalize();
            g_asdFileThread.NnOsHandle::~NnOsHandle();
            addressSpaceRegionFree(g_asdFile.threadStack);
        }
    }
    fsUnmountByName("rom:");
    s32 result = fsUnmountByName("patch:");
    if (nnResultIsFailure(result)) {
        asdFatalError();
    }
}

} /* extern "C" */
