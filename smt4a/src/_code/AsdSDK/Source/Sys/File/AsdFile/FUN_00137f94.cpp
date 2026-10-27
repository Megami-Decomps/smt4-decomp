/* NON_MATCHING: the description test now materialises its bool like retail; retail keeps a zero constant in r6 (movne r2/r3 before the svc) and reads the worker handle once more through r5 */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/AddressSpaceManager.h"
#include "nn/os/Thread.h"
#include "sys/ResultReport.h"

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
extern NnOsThread g_asdFileWorkerThread;  /* the same thread object, as its other users name it */

s32 svcWaitSynchronization1(u32 handle, s64 timeout);
s32 nn_os_detail_ConvertLibraryToSvcPriority(s32 priority);
void nn_os_LightEvent_Signal(void *event);
void syncWaitHandleForever(u32 *handle);
void FUN_001469a8(AddressSpaceRegion *region);
void asdFileHashPackClose(void);
void FUN_001a0380(const char *mount);

// Stops the loader's worker thread if it is still running (the poll times out), then closes the
// file packs and the ROM mount.
void FUN_00137f94(void)
{
    if (g_asdFileWorkerThread.handle != 0) {
        s32 result = svcWaitSynchronization1(g_asdFileWorkerThread.handle, 0);
        bool failed = nnResultIsFailure(result);
        if (failed) {
            FUN_002e3140(result, failed);
        }
        nnResultFields fields;
        fields.value = result;
        bool differs = fields.fields.description != 0x3fe;
        bool timedOut = differs != 1;
        if (timedOut) {
            result = nn::svc::SetThreadPriority(g_asdFileWorkerThread.handle, nn_os_detail_ConvertLibraryToSvcPriority(0x10));
            failed = nnResultIsFailure(result);
            if (failed) {
                FUN_002e3140(result, failed);
            }
            g_asdFile.stopRequested = 1;
            nn_os_LightEvent_Signal(g_asdFile.event);
            syncWaitHandleForever(&g_asdFile.thread.handle);
            g_asdFileWorkerThread.joined = 1;
            g_asdFile.thread.~NnOsThread();
            FUN_001469a8(g_asdFile.stack);
        }
    }
    asdFileHashPackClose();
    FUN_001a0380("rom:");
}

}
