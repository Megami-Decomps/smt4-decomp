#ifndef NN_OS_SIMPLE_LOCK_H
#define NN_OS_SIMPLE_LOCK_H

#include "common.h"
#include <stddef.h>

namespace nn {
namespace os {

/* CriticalSection and LightEvent pass this subobject to the SDK's SimpleLock routines. The
 * interlocked word is shared between threads and updated with ldrex/strex, hence volatile: retail keeps
 * CriticalSection's zero store before the call to Initialize and before the deferred constructor's other
 * stores (smt4 FUN_003ec728, FUN_003eb734, FUN_003f2028, FUN_003f2134, smt4a FUN_00511778 are IDENTICAL
 * with it). */
struct SimpleLock {
    SimpleLock() : state(0) {}

    /* 0x00 */ volatile u32 state;
};
typedef char SimpleLockLayoutCheck[sizeof(SimpleLock) == 4 && offsetof(SimpleLock, state) == 0 ? 1 : -1];

} /* namespace os */
} /* namespace nn */

#endif
