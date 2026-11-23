#ifndef NN_OS_CRITICAL_SECTION_H
#define NN_OS_CRITICAL_SECTION_H

#include "common.h"
#include <stddef.h>

extern "C" void nn_os_CriticalSection_Initialize(void* section);

namespace nn {
namespace os {
/* Selects the constructor that leaves the lock as it is before Initialize() has run. */
enum CriticalSectionDeferred { CRITICAL_SECTION_DEFERRED };

class CriticalSection {
public:
    CriticalSection() : state(0) { nn_os_CriticalSection_Initialize(this); }
    explicit CriticalSection(CriticalSectionDeferred) : state(0), owningThread(0), lockCount(-1) {}
    ~CriticalSection();
    /* 0x00 */ volatile u32 state;
    /* `state` is the SDK's lock counter (an nn::fnd::InterlockedVariable, updated by other threads with
     * ldrex/strex), hence volatile: retail keeps its zero store before the call to Initialize and before the
     * deferred constructor's other stores (smt4 FUN_003ec728, FUN_003eb734, FUN_003f2028, FUN_003f2134, smt4a
     * FUN_00511778 are IDENTICAL with it). */
    /* 0x04 */ u32 owningThread;
    /* 0x08 */ u32 lockCount;
};
typedef char CriticalSectionLayoutCheck[
    sizeof(CriticalSection) == 0x0c && offsetof(CriticalSection, state) == 0 &&
    offsetof(CriticalSection, owningThread) == 4 &&
    offsetof(CriticalSection, lockCount) == 8 ? 1 : -1];
}
}

#endif
