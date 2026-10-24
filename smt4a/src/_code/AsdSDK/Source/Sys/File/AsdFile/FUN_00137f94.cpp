/* NON_MATCHING: close: retail addresses the worker through two literals (DAT_005b3fcc for the handle test and joined flag, g_asdFile for the rest), materializes the description test as a bool (movne/teq) and keeps a zero constant in r6; the build uses one base register and a direct branch. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/AddressSpaceManager.h"
#include "nn/os/Thread.h"

/* The loader's worker (the part its shutdown touches; the rest of the globals precede it). */
struct AsdFileWorker {
    /* 0x00 */ u8 stopRequested;
    /* 0x01 */ u8 unk01[0x13];
    /* 0x14 */ AddressSpaceRegion *stack;
    /* 0x18 */ NnOsThread thread;
    /* 0x20 */ u8 event[4];
};

extern "C" {

extern AsdFileWorker g_asdFile;

s32 svcWaitSynchronization1(u32 handle, s64 timeout);
s32 nn_os_detail_ConvertLibraryToSvcPriority(s32 priority);
void nn_os_LightEvent_Signal(void *event);
void syncWaitHandleForever(u32 *handle);
void FUN_002e3140(s32 result, bool failed);
void FUN_001469a8(AddressSpaceRegion *region);
void asdFileHashPackClose(void);
void FUN_001a0380(const char *mount);

// Stops the loader's worker thread if it is still running (the poll times out), then closes the
// file packs and the ROM mount.
void FUN_00137f94(void)
{
    if (g_asdFile.thread.handle != 0) {
        s32 result = svcWaitSynchronization1(g_asdFile.thread.handle, 0);
        bool failed = nnResultIsFailure(result);
        if (failed) {
            FUN_002e3140(result, failed);
        }
        nnResultFields fields;
        fields.value = result;
        if (fields.fields.description == 0x3fe) {
            result = nn::svc::SetThreadPriority(g_asdFile.thread.handle, nn_os_detail_ConvertLibraryToSvcPriority(0x10));
            failed = nnResultIsFailure(result);
            if (failed) {
                FUN_002e3140(result, failed);
            }
            g_asdFile.stopRequested = 1;
            nn_os_LightEvent_Signal(g_asdFile.event);
            syncWaitHandleForever(&g_asdFile.thread.handle);
            g_asdFile.thread.joined = 1;
            g_asdFile.thread.~NnOsThread();
            FUN_001469a8(g_asdFile.stack);
        }
    }
    asdFileHashPackClose();
    FUN_001a0380("rom:");
}

}
