/* NON_MATCHING: the SDK wrapper is an embedded-assembler body (svc 0x23; bx lr); the __svc intrinsic of nn/svc.h compiles to a call with push {r4, lr}/pop {r4, pc} around the svc. */
#include "nn/svc.h"

/* Closes a kernel handle. */
extern "C" s32 svcCloseHandle(u32 handle)
{
    return nn::svc::CloseHandle(handle);
}
