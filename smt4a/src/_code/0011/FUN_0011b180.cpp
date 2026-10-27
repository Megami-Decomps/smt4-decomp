/* NON_MATCHING: retail saves only lr (push {lr} / pop {pc}); armcc pushes {r4, lr} for this tail call wrapper. */
#include "common.h"

extern "C" {

void *_ZN9Obj559720D1Ev(void *self);

void *FUN_0011b180(void *self)
{
    return _ZN9Obj559720D1Ev(self);
}

} /* extern "C" */
