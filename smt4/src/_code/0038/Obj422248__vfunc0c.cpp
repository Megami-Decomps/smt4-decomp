/* NON_MATCHING: layout, failure test and tail now match; only the request descriptor construction and the r6/r7 constant registers differ (see Obj4221bc). */
#include "classes/Obj422248.h"
#include "nn/Result.h"

struct Obj422248Queue { u32 unk00[2]; u32 base; u32 offset; };
struct Obj422248Manager { u8 unk00[0x88]; u8 queue[0xc]; Obj422248Queue *storage; };
struct Obj422248Request {
    u32 address, type, flags, reserved, size;
    const void *first;
    const void *second;
    const void *third;
};
extern "C" {
extern Obj422248Manager *g_aocMain;
void FUN_003f6f24();
void FUN_003f700c();
void FUN_003f6fc8();
s32 FUN_002348a8(void *queue);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
u32 FUN_002bcc60(void *queue, const u32 *descriptor, void (*callback)(), Obj422248 **owner);
void FUN_0038cbdc();
void FUN_002c526c(u32 status);
}

WindowStatusOperationResult Obj422248::vfunc0c(const void *)
{
    WindowStatusOperationResult output(1);
    Obj422248Manager *manager = g_aocMain;
    if (reserved == 0) {
        reserved = 1;
        Obj422248Request request;
        request.size = 4;
        request.first = reinterpret_cast<const void *>(FUN_003f6f24);
        request.second = reinterpret_cast<const void *>(FUN_003f700c);
        request.third = reinterpret_cast<const void *>(FUN_003f6fc8);
        request.reserved = 0;
        request.address = manager->storage->offset + manager->storage->base;
        request.type = 0x11;
        request.flags = -2;
        Obj422248 *owner = this;
        s32 status = FUN_002bcc60(manager->queue, &request.size, FUN_0038cbdc, &owner);
        if ((status & 0x7e00000) != 0x600000) {
            if (nnResultIsFailure(status)) {
                FUN_002c526c(status);
            }
        }
    } else {
        if (reserved == 1 && FUN_002348a8(manager->queue) != 0) {
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
