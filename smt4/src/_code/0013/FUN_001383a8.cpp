/* NON_MATCHING: retail is the SDK hand-written svc wrapper (push {r0}; svc; ldr r2,[sp]; str r1,[r2]); armcc keeps the out pointer in r4 and pushes r4/lr instead */
#include "nn/svc.h"

extern "C" {

/* Connects to the named port through svc 0x2d and stores the session handle in *out. */
s32 FUN_001383a8(u32 *out, const char *name)
{
    nn::svc::ResultAndValue r = nn::svc::ConnectToPortRaw((u32)out, name);
    *out = r.value;
    return r.result;
}

} /* extern "C" */
