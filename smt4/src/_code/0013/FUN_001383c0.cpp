/* NON_MATCHING: retail is the SDK hand-written svc wrapper (svc 0xa; bx lr); armcc wraps the __svc call in push {r4, lr}/pop {r4, pc} */
#include "common.h"
#include "nn/svc.h"

extern "C" {

/* Sleeps the calling thread for the 64-bit nanosecond count (low word, high word). */
void FUN_001383c0(u32 nanosecondsLow, u32 nanosecondsHigh)
{
    nn::svc::SleepThread(nanosecondsLow, nanosecondsHigh);
}

} /* extern "C" */
