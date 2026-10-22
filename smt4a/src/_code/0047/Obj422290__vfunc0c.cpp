/* NON_MATCHING: request descriptor layout and surplus retail literal have not been matched. */
#include "classes/Obj422290.h"

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
extern const u8 LAB_00514ad4, LAB_00514ba0, LAB_00514b68;
s32 FUN_0047d754(void *queue);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
u32 FUN_002fb0d4(void *queue, const u32 *descriptor, void (*callback)(), Obj422290 **owner);
void FUN_004767a8();
void FUN_002e3140();
}

WindowStatusOperationResult Obj422290::vfunc0c(const void *)
{
    WindowStatusOperationResult output;
    output.status = 1;
    output.reserved0c = 0;
    output.reserved10 = 0;
    output.result = WindowStatusResult(0);
    Obj422290Manager *manager = g_aocMain;
    if (reserved != 0) {
        if (reserved == 1 && FUN_0047d754(manager->queue) != 0) {
            if (legacyResourceIdRemap(&result) >= 0) {
                output.status = 0;
            } else {
                output.result = result;
                output.status = 100;
            }
            reserved = 2;
        }
    } else {
        reserved = 1;
        Obj422290Request request;
        request.size = 4;
        request.first = &LAB_00514ad4;
        request.second = &LAB_00514ba0;
        request.third = &LAB_00514b68;
        request.reserved = 0;
        request.address = manager->storage->offset + manager->storage->base;
        request.type = 0x11;
        request.flags = -2;
        Obj422290 *owner = this;
        u32 status = FUN_002fb0d4(manager->queue, &request.size, FUN_004767a8, &owner);
        if ((status & 0x7e00000) != 0x600000 && (s32)status < 0) {
            FUN_002e3140();
        }
    }
    return output;
}
