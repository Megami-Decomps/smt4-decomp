#include "nn/applet/DisplayCapture.h"
#include "nn/os/CriticalSection.h"

/* The capture request embeds the two screen records at +8; the next global is the applet lock. */
nn::applet::DisplayCaptureRequest g_appletDisplayCaptureRequest;
nn::os::CriticalSection g_appletSleepCallbackCriticalSection;
