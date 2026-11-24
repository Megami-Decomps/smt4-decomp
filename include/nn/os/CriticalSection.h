#ifndef NN_OS_CRITICAL_SECTION_H
#define NN_OS_CRITICAL_SECTION_H

#include "nn/os/SimpleLock.h"
#include <stddef.h>

extern "C" void nn_os_CriticalSection_Initialize(void* section);

namespace nn {
namespace os {
/* Selects the constructor that leaves the lock as it is before Initialize() has run. */
enum CriticalSectionDeferred { CRITICAL_SECTION_DEFERRED };

class CriticalSection {
public:
    CriticalSection() { nn_os_CriticalSection_Initialize(this); }
    explicit CriticalSection(CriticalSectionDeferred) : owningThread(0), lockCount(-1) {}
    ~CriticalSection();

    /* 0x00 */ SimpleLock lock;
    /* 0x04 */ u32 owningThread;
    /* 0x08 */ s32 lockCount;
};
typedef char CriticalSectionLayoutCheck[
    sizeof(CriticalSection) == 0x0c && offsetof(CriticalSection, lock) == 0 &&
    offsetof(CriticalSection, owningThread) == 4 &&
    offsetof(CriticalSection, lockCount) == 8 ? 1 : -1];
}
}

#endif
