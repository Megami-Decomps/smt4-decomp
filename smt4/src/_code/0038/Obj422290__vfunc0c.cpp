/* NON_MATCHING: queue block, failure test and branch-1 layout now match; remaining diff is the request-descriptor store/literal scheduling (callback literal loaded first in retail), ldm vs two ldr for base/offset, and the final conditional-call form (lsrs;blne after the mask test). */
#include "classes/Obj422290.h"
#include "nn/Result.h"

struct Obj422290Queue { u32 unk00[2]; u32 base; u32 offset; };
struct Obj422290Queue2 { u8 unk00[0xc]; Obj422290Queue *storage; };
struct Obj422290Manager { u8 unk00[0x88]; Obj422290Queue2 queue; };
struct Obj422290Request {
    u32 address, type, flags, reserved, size;
    const void *first;
    const void *second;
    const void *third;
};
extern "C" {
extern Obj422290Manager *g_aocMain;
void FUN_003f6f34();
void FUN_003f7010();
void FUN_003f6fd4();
s32 FUN_002348a8(void *queue);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
u32 FUN_002bcc60(void *queue, const u32 *descriptor, void (*callback)(), Obj422290 **owner);
void FUN_0038dc48();
void FUN_002c526c(u32 status);
}

WindowStatusOperationResult Obj422290::vfunc0c(const void *)
{
    WindowStatusOperationResult output(1);
    Obj422290Manager *manager = g_aocMain;
    if (reserved == 0) {
        reserved = 1;
        Obj422290Queue2 *queue = &manager->queue;
        Obj422290Request request;
        request.size = 4;
        request.first = reinterpret_cast<const void *>(FUN_003f6f34);
        request.second = reinterpret_cast<const void *>(FUN_003f7010);
        request.third = reinterpret_cast<const void *>(FUN_003f6fd4);
        request.reserved = 0;
        request.address = queue->storage->offset + queue->storage->base;
        request.type = 0x11;
        request.flags = -2;
        Obj422290 *owner = this;
        s32 status = FUN_002bcc60(queue, &request.size, FUN_0038dc48, &owner);
        if ((status & 0x7e00000) != 0x600000 && nnResultIsFailure(status)) {
            FUN_002c526c(status);
        }
    } else {
        if (reserved == 1 && FUN_002348a8(&manager->queue) != 0) {
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
