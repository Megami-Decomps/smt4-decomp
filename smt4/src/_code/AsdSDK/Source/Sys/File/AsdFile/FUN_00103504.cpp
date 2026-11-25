/* NON_MATCHING: the priority call moves the reloaded handle through a scratch register;
 * retail loads it into the argument register directly. */
#include "AsdSDK/Source/Sys/File/AsdFile.h"
#include "nn/os/AddressSpaceManager.h"
#include "nn/os/WaitObject.h"
#include "nn/svc.h"
#include "sys/RuntimeObjects.h"

extern "C" {
extern AsdFileGlobals g_asdFile;
extern NnOsThread g_asdFileThread;

s32 nn_os_detail_ConvertLibraryToSvcPriority(s32 priority);
void nn_os_LightEvent_Signal(void *event);
void addressSpaceRegionFree(AddressSpaceRegion *region);
s32 fsUnmountByName(const char *device);

/* Shuts the file service down: tells the worker thread to stop, waits for it, releases its
 * stack and unmounts the "rom:" and "patch:" devices. */
void FUN_00103504(void)
{
    bool running = false;
    if (g_asdFileThread.handle != 0) {
        s32 result = nn::os::WaitOne(&g_asdFileThread, nn::fnd::TimeSpan::FromNanoSeconds(0));
        running = nnResultIsNotTimeout(result) != 1;
    }
    if (running) {
        s32 priority = nn_os_detail_ConvertLibraryToSvcPriority(0x10);
        s32 result = svcSetThreadPriority(g_asdFileThread.handle, priority);
        bool failed = nnResultIsFailure(result);
        if (failed) {
            resultHandleFailure(result, failed);
        }
        g_asdFile.stopRequested = 1;
        nn_os_LightEvent_Signal(g_asdFile.event);
        nn::os::WaitOne(&g_asdFileThread, nn::fnd::TimeSpan::FromNanoSeconds(-1));
        g_asdFileThread.joined = 1;
        g_asdFileThread.finalize();
        g_asdFileThread.NnOsHandle::~NnOsHandle();
        addressSpaceRegionFree(g_asdFile.threadStack);
    }
    fsUnmountByName("rom:");
    s32 result = fsUnmountByName("patch:");
    if (nnResultIsFailure(result)) {
        asdFatalError();
    }
}

} /* extern "C" */
