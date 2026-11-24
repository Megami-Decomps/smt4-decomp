/* NON_MATCHING: armcc places the first deferred lock after the initialized lock (+12); retail addresses it 24 bytes before that lock. */
#include "nn/os/CriticalSection.h"

nn::os::CriticalSection g_moduleCriticalSection8;
nn::os::CriticalSection g_moduleDeferredCriticalSection0(nn::os::CRITICAL_SECTION_DEFERRED);
nn::os::CriticalSection g_moduleDeferredCriticalSection1(nn::os::CRITICAL_SECTION_DEFERRED);
