/* NON_MATCHING: native callback array construction loads the constructor pointer before the array address. */
#include "nn/applet/SleepCallback.h"
#include "nn/os/CriticalSection.h"

nn::applet::SleepCallback g_appletSleepCallbacks[2];
nn::os::CriticalSection g_appletSleepCallbackCriticalSection;
