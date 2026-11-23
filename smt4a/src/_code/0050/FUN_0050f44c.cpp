/* NON_MATCHING: each LightEvent's lockState store follows the atexit argument loads instead of preceding them; the deferred critical section loads -1 before storing the zero state rather than after. */
#include "classes/Obj42cd08.h"
#include "nn/os/CriticalSection.h"

Obj42cd08 g_appletSleepQueryEvent;
Obj42cd08 g_appletHomeButtonEvent;
nn::os::CriticalSection g_nnAppletCriticalSection(nn::os::CRITICAL_SECTION_DEFERRED);
