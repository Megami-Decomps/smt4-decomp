/* NON_MATCHING: syscall wrappers inline as in retail (svcSetThreadPriority/svcWaitSynchronization1/svcCloseHandle); remaining: retail loads the handle straight into r0 after the priority call, evaluates the timeout test as a bool (movne/moveq/teq) and keeps g_asdFile in r6; armcc loads the handle through r2 and folds the bool */
#include "AsdSDK/Source/Sys/File/AsdFile.h"
#include "nn/os/AddressSpaceManager.h"
#include "nn/Result.h"
#include "nn/svc.h"

/* The file worker's thread: its kernel handle and whether it has been joined (nn::os::Thread). */
struct AsdFileThread {
    u32 handle;  // 0x00
    u8 joined;   // 0x04
    u8 unk05[3];
};

extern "C" {
extern AsdFileGlobals g_asdFile;
extern AsdFileThread g_asdFileThread;

s32 FUN_002c40f8(s32 *index, const u32 *handles, s32 count, s32 waitAll, s64 timeout);
void FUN_002c526c(s32 result, bool failed);
s32 nn_os_detail_ConvertLibraryToSvcPriority(s32 priority);
void nn_os_LightEvent_Signal(void *event);
void nn_os_Thread_FinalizeImpl(u32 *thread);
void FUN_002c3f5c(AddressSpaceRegion *region);
s32 FUN_002c3dfc(const char *device);
void asdFatalError(void);

/* Shuts the file service down: tells the worker thread to stop, waits for it, releases its
 * stack and unmounts the "rom:" and "patch:" devices. */
void FUN_00103504(void)
{
    if (g_asdFileThread.handle != 0) {
        s32 index;
        u32 handle = g_asdFileThread.handle;
        s32 result = FUN_002c40f8(&index, &handle, 1, 0, 0);
        bool failed = nnResultIsFailure(result);
        if (failed) {
            FUN_002c526c(result, failed);
        }
        nnResultFields code;
        code.value = result;
        if (code.fields.description == 0x3fe) {
            s32 priority = nn_os_detail_ConvertLibraryToSvcPriority(0x10);
            result = svcSetThreadPriority(g_asdFileThread.handle, priority);
            failed = nnResultIsFailure(result);
            if (failed) {
                FUN_002c526c(result, failed);
            }
            g_asdFile.stopRequested = 1;
            nn_os_LightEvent_Signal(g_asdFile.event);
            handle = g_asdFileThread.handle;
            result = FUN_002c40f8(&index, &handle, 1, 0, -1);
            failed = nnResultIsFailure(result);
            if (failed) {
                FUN_002c526c(result, failed);
            }
            g_asdFileThread.joined = 1;
            nn_os_Thread_FinalizeImpl(&g_asdFileThread.handle);
            if (g_asdFileThread.handle != 0) {
                svcCloseHandle(g_asdFileThread.handle);
                g_asdFileThread.handle = 0;
            }
            FUN_002c3f5c(g_asdFile.threadStack);
        }
    }
    FUN_002c3dfc("rom:");
    s32 result = FUN_002c3dfc("patch:");
    if (nnResultIsFailure(result)) {
        asdFatalError();
    }
}

} /* extern "C" */
