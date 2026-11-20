/* NON_MATCHING: native global object ctors match all instructions and relocations; only ldr/str scheduling around Obj42cd08 construction differs. */
#include "classes/Obj42cd08.h"
#include "nn/os/CriticalSection.h"

Obj42cd08 g_appletSleepQueryEvent;
Obj42cd08 g_appletHomeButtonEvent;
nn::os::CriticalSection g_nnAppletCriticalSection(nn::os::CRITICAL_SECTION_DEFERRED);
