#ifndef NN_OS_CRITICAL_SECTION_H
#define NN_OS_CRITICAL_SECTION_H

#include "common.h"
#include <stddef.h>

extern "C" void nn_os_CriticalSection_Initialize(void* section);

namespace nn {
namespace os {
class CriticalSection {
public:
    CriticalSection() : state(0) { nn_os_CriticalSection_Initialize(this); }
    ~CriticalSection();
    /* 0x00 */ u32 state;
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
