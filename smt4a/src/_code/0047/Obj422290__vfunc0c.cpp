/* NON_MATCHING: layout, failure test and tail now match; only the request descriptor construction and the r6/r7 constant registers differ (see Obj4221bc). */
#include "classes/Obj422290.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

struct Obj422290Queue { u32 unk00[2]; u32 base; u32 offset; };
struct Obj422290Manager { u8 unk00[0x88]; u8 queue[0xc]; Obj422290Queue *storage; };
struct Obj422290Request {
    u32 address, type, flags, reserved, size;
    const void *first;
    const void *second;
    const void *third;
};
extern "C" {
extern Obj422290Manager *g_aocMain;
void FUN_00514ad4();
void FUN_00514ba0();
void FUN_00514b68();
s32 FUN_0047d754(void *queue);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
u32 FUN_002fb0d4(void *queue, const u32 *descriptor, void (*callback)(), Obj422290 **owner);
void FUN_004767a8();
}

WindowStatusOperationResult Obj422290::vfunc0c(const void *)
{
    WindowStatusOperationResult output(1);
    Obj422290Manager *manager = g_aocMain;
    if (reserved == 0) {
        reserved = 1;
        Obj422290Request request;
        request.size = 4;
        request.first = reinterpret_cast<const void *>(FUN_00514ad4);
        request.second = reinterpret_cast<const void *>(FUN_00514ba0);
        request.third = reinterpret_cast<const void *>(FUN_00514b68);
        request.reserved = 0;
        request.address = manager->storage->offset + manager->storage->base;
        request.type = 0x11;
        request.flags = -2;
        Obj422290 *owner = this;
        s32 status = FUN_002fb0d4(manager->queue, &request.size, FUN_004767a8, &owner);
        if (nnResultIsFailureExceptSummary(status, 3)) {
            FUN_002e3140(status);
        }
    } else {
        if (reserved == 1 && FUN_0047d754(manager->queue) != 0) {
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
