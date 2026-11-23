/* NON_MATCHING: native constructors; retail derives the second deferred lock's address from the first (`sub r0, r4, #24`) where armcc pools it, and materialises the -1 after the zero store. */
#include "nn/os/CriticalSection.h"

nn::os::CriticalSection g_moduleCriticalSection8;
nn::os::CriticalSection g_moduleDeferredCriticalSection0(nn::os::CRITICAL_SECTION_DEFERRED);
nn::os::CriticalSection g_moduleDeferredCriticalSection1(nn::os::CRITICAL_SECTION_DEFERRED);
