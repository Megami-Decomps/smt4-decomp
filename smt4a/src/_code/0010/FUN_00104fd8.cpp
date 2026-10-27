/* NON_MATCHING: retail saves only lr (push {lr} / pop {pc}); armcc pushes {r4, lr} for this tail call wrapper. */
#include "common.h"

extern "C" {

void *FUN_00119f9c(void *self);

void *FUN_00104fd8(void *self)
{
    return FUN_00119f9c(self);
}

} /* extern "C" */
