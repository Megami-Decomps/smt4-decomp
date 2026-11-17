/* NON_MATCHING: queue block, failure test and branch-1 layout now match; remaining diff is the request-descriptor store/literal scheduling (callback literal loaded first in retail), ldm vs two ldr for base/offset, and the final conditional-call form (lsrs;blne after the mask test). */
#include "classes/Obj422290.h"
#include "addon/aocMain.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

struct Obj422290Request {
    u32 address, type, flags, reserved, size;
    const void *first;
    const void *second;
    const void *third;
};
extern "C" {
void FUN_003f6f34();
void FUN_003f7010();
void FUN_003f6fd4();
s32 threadTryJoinAndClose(AocWorkerThread *thread);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
u32 FUN_002bcc60(AocWorkerThread *thread, const u32 *descriptor, void (*callback)(), Obj422290 **owner);
void FUN_0038dc48();
}

WindowStatusOperationResult Obj422290::vfunc0c(const void *)
{
    WindowStatusOperationResult output(1);
    AocMain *manager = g_aocMain;
    if (reserved == 0) {
        reserved = 1;
        AocWorkerThread *thread = &manager->thread;
        Obj422290Request request;
        request.size = 4;
        request.first = reinterpret_cast<const void *>(FUN_003f6f34);
        request.second = reinterpret_cast<const void *>(FUN_003f7010);
        request.third = reinterpret_cast<const void *>(FUN_003f6fd4);
        request.reserved = 0;
        request.address = thread->stack->size + thread->stack->base;
        request.type = 0x11;
        request.flags = -2;
        Obj422290 *owner = this;
        s32 status = FUN_002bcc60(thread, &request.size, FUN_0038dc48, &owner);
        if ((status & 0x7e00000) != 0x600000 && nnResultIsFailure(status)) {
            resultHandleFailure(status);
        }
    } else {
        if (reserved == 1 && threadTryJoinAndClose(&manager->thread) != 0) {
            bool succeeded = !nnResultIsFailureBool(legacyResourceIdRemap(&result));
            if (succeeded) {
                output.status = 0;
            } else {
                output.result = result;
                output.status = 100;
            }
            reserved = 2;
        }
    }
    return output;
}
