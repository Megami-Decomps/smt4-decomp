/* NON_MATCHING: the SDK wrapper is hand-written (svc 9; bx lr); the __svc intrinsic call compiles with push {r4, lr}/pop {r4, pc} around the svc */
#include "nn/svc.h"

/* Ends the calling thread. */
extern "C" void FUN_00144f88(void)
{
    nn::svc::ExitThread();
}
