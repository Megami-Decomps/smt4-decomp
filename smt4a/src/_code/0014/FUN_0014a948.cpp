/* NON_MATCHING: retail is the SDK's hand-written wrapper (push {r0}; svc 0x38; ldr r2,[sp]; str r1,[r2]); armcc keeps the out pointer in r4 and pushes r4/lr instead. */
#include "nn/svc.h"

extern "C" {

/* Reads a resource-limit handle through svc 0x38. */
s32 FUN_0014a948(u32 *out, u32 process)
{
    nn::svc::ResultAndValue r = nn::svc::GetResourceLimitRaw((u32)out, process);
    *out = r.value;
    return r.result;
}

} /* extern "C" */
