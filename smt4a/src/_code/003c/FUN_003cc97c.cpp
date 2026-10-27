/* NON_MATCHING: the sleep loop is laid out differently (retail jumps into a bottom test and reloads the 100000 constant in the loop; the build hoists it into r5 and tests at the top). */
#include "nn/svc.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

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

s32 FUN_0019a364(u32 *out, u32 handle, s32 value);
void svcSleepThread(s64 nanoseconds);

s32 svcWaitSynchronization1(u32 handle, s64 timeout);

// Wait for the object's handle, start its request and sleep until the request has finished.
void FUN_003cc97c(WaitObject *object, u32 state)
{
    u32 reply;
    s32 result = svcWaitSynchronization1(object->handle, -1);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002e3140(result, failed);
    }
    object->signal = -1;
    object->state = state;
    s32 started = FUN_0019a364(&reply, object->handle, 1);
    failed = nnResultIsFailure(started);
    if (failed) {
        FUN_002e3140(started, failed);
    }
    while (object->state != 0xffffffff || object->done != 0) {
        svcSleepThread(100000);
    }
}

} /* extern "C" */
