/* NON_MATCHING: native constructors; retail lays the two deferred locks out before the first one (derives them from its address with `sub r0, r4, #24`), and armcc moves the first lock's argument before its zero store */
#include "nn/os/CriticalSection.h"

nn::os::CriticalSection g_moduleCriticalSection8;
nn::os::CriticalSection g_moduleDeferredCriticalSection0(nn::os::CRITICAL_SECTION_DEFERRED);
nn::os::CriticalSection g_moduleDeferredCriticalSection1(nn::os::CRITICAL_SECTION_DEFERRED);
