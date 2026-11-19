#ifndef SYS_ATOMIC_COUNTER_H
#define SYS_ATOMIC_COUNTER_H

#include "common.h"

// Atomically adds to a counter and returns the value before the addition.
extern "C" s32 atomicAddS32(s32 *counter, s32 amount);

#endif
