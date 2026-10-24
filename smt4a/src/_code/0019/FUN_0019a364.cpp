/* NON_MATCHING: retail is the SDK's hand-written wrapper (push {r0}; svc 0x16; ldr r2,[sp]; str r1,[r2]); armcc keeps the out pointer in r4 and pushes r4/lr instead. */
#include "nn/svc.h"

extern "C" {

/* Releases a semaphore through svc 0x16 and stores the previous count. */
s32 FUN_0019a364(u32 *out, u32 semaphore, u32 releaseCount)
{
    nn::svc::ResultAndValue r = nn::svc::ReleaseSemaphoreRaw((u32)out, semaphore, releaseCount);
    *out = r.value;
    return r.result;
}

} /* extern "C" */
