/* NON_MATCHING: only the request descriptor construction differs: retail stores `this` into the owner slot first, loads the storage through the queue pointer (add r0,#136; ldr r1,[r0,#12]) and reuses r4 for the pool constants; built orders and allocates them differently. */
#include "classes/Obj4221bc.h"
#include "nn/Result.h"

struct Obj4221bcQueue { u32 unk00[2]; u32 base; u32 offset; };
struct Obj4221bcRequestQueue { u8 unk00[0xc]; Obj4221bcQueue *storage; };
struct Obj4221bcManager { u8 unk00[0x88]; Obj4221bcRequestQueue queue; };
struct Obj4221bcRequest {
    u32 address, type, flags, reserved, size;
    const void *first;
    const void *second;
    const void *third;
};
extern "C" {
extern Obj4221bcManager *g_aocMain;
void FUN_00514aa4();
void FUN_00514b94();
void FUN_00514b44();
s32 FUN_0047d754(void *queue);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
u32 FUN_002fb0d4(void *queue, const u32 *descriptor, void (*callback)(), Obj4221bc **owner);
void FUN_004733cc();
void FUN_002e3140(u32 status);
}

WindowStatusOperationResult Obj4221bc::vfunc0c(const void *)
{
    WindowStatusOperationResult output(1);
    Obj4221bcManager *manager = g_aocMain;
    if (reserved != 0) {
        if (reserved == 1 && FUN_0047d754(&manager->queue) != 0) {
            bool succeeded = !nnResultIsFailureBool(legacyResourceIdRemap(&result));
            if (succeeded) {
                output.status = 0;
            } else {
                output.status = 100;
                output.result = result;
            }
        }
    } else {
        reserved = 1;
        Obj4221bcRequest request;
        request.size = 4;
        request.first = reinterpret_cast<const void *>(FUN_00514aa4);
        request.second = reinterpret_cast<const void *>(FUN_00514b94);
        request.third = reinterpret_cast<const void *>(FUN_00514b44);
        request.reserved = 0;
        request.address = manager->queue.storage->offset + manager->queue.storage->base;
        request.type = 0x11;
        request.flags = -2;
        Obj4221bc *owner = this;
        u32 status = FUN_002fb0d4(&manager->queue, &request.size, FUN_004733cc, &owner);
        if ((status & 0x7e00000) != 0x600000) {
            if (nnResultIsFailure(status)) {
                FUN_002e3140(status);
            }
        }
    }
    return output;
}
