/* NON_MATCHING: retail is the SDK hand-written svc wrapper (push {r0}; svc; ldr r2,[sp]; str r1,[r2]); armcc keeps the out pointer in r4 and pushes r4/lr instead */
#include "nn/svc.h"

extern "C" {

/* Creates a semaphore through svc 0x15 and stores its handle in *out (the arguments pass through). */
s32 FUN_002c52dc(u32 *out, u32 initialCount, u32 maxCount)
{
    nn::svc::ResultAndValue r = nn::svc::CreateSemaphoreRaw((u32)out, initialCount, maxCount);
    *out = r.value;
    return r.result;
}

} /* extern "C" */
