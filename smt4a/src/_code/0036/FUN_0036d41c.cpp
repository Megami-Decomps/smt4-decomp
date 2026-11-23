/* NON_MATCHING: thread teardown matches with nn::os's Join inline (the thread's address formed after the wait, as in IV's twin FUN_002ecfe4); retail still predicates the handle load into the null test (ldrne) and hoists the shared zero (mov r6, #0) above the svc, where the build sets it after the finalize (same near miss as FUN_0035d7bc). */
#include "nn/os/WaitObject.h"
#include "AsdSDK/Source/Net/Cec/AsdCecProcess.h"
#include "cec/CecProcessGlobal.h"

extern "C" {
void addressSpaceRegionFree(void *thread);
void asdMemFree(void *memory);

void FUN_0036d41c()
{
    CecProcessA *work = g_cecProcess;
    if (work != 0) {
        nn::os::ThreadJoin(&work->thread);
        /* Joined above: finalize the thread, then close its handle through the handle's destructor (IV's twin
         * FUN_002ecfe4). */
        work->thread.finalize();
        work->thread.NnOsHandle::~NnOsHandle();
        addressSpaceRegionFree(work->stack);
        if (work->buffer != 0) {
            asdMemFree(work->buffer);
            work->buffer = 0;
        }
        work->state = -1;
    }
}
}
