#include "classes/Obj42cd08.h"
#include "nn/os/CriticalSection.h"

/* Constructs the applet's two LightEvents and its deferred lock. */
Obj42cd08 g_appletSleepQueryEvent;
Obj42cd08 g_appletHomeButtonEvent;
nn::os::CriticalSection g_nnAppletCriticalSection(nn::os::CRITICAL_SECTION_DEFERRED);
