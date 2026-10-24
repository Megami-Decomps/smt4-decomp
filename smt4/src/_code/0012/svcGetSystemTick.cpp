/* NON_MATCHING: the SDK wrapper is an embedded-assembler body (svc 0x28; bx lr); the __svc intrinsic of nn/svc.h compiles to a call with push {r4, lr}/pop {r4, pc} around the svc. */
#include "nn/svc.h"

/* The kernel's tick counter (268 MHz). */
extern "C" s64 svcGetSystemTick(void)
{
    return nn::svc::GetSystemTick();
}
