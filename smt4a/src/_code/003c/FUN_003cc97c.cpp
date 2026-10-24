/* NON_MATCHING: the sleep loop is laid out differently (retail jumps into a bottom test and reloads the 100000 constant in the loop); the svc wrapper takes the 64-bit timeout as two words so r2/r3 are loaded in the opposite order. */
#include "nn/svc.h"
#include "nn/Result.h"

struct WaitObject {
    u8 unk00[0x24];
    s32 signal;      // 0x24
    u8 unk28[0x24];
    s32 handle;      // 0x4c
    u8 unk50[8];
    u32 state;       // 0x58
    u8 done;         // 0x5c
};

extern "C" {

void FUN_002e3140(s32 result);
s32 FUN_0019a364(u32 *out, u32 handle, s32 value);
void svcSleepThread(s64 nanoseconds);

// Wait for the object's handle, start its request and sleep until the request has finished.
void FUN_003cc97c(WaitObject *object, u32 state)
{
    u32 reply;
    s32 result = nn::svc::WaitSynchronization1(object->handle, state, 0xffffffff, 0xffffffff);
    if (nnResultIsFailure(result)) {
        FUN_002e3140(result);
    }
    object->signal = -1;
    object->state = state;
    s32 started = FUN_0019a364(&reply, object->handle, 1);
    if (nnResultIsFailure(started)) {
        FUN_002e3140(started);
    }
    while (object->state != 0xffffffff || object->done != 0) {
        svcSleepThread(100000);
    }
}

} /* extern "C" */
