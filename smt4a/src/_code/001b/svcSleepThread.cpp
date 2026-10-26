/* NON_MATCHING: the SDK wrapper is an embedded-assembler body (svc 0x0a; bx lr); the __svc intrinsic of nn/svc.h compiles to a call with push {r4, lr}/pop {r4, pc} around the svc. */
#include "nn/svc.h"

/* Puts the calling thread to sleep for `nanoseconds`. */
extern "C" void svcSleepThread(s64 nanoseconds)
{
    nn::svc::SleepThread((u32)nanoseconds, (u32)((u64)nanoseconds >> 32));
}
