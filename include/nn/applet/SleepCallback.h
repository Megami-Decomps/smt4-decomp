#ifndef NN_APPLET_SLEEP_CALLBACK_H
#define NN_APPLET_SLEEP_CALLBACK_H

#include "common.h"
#include <stddef.h>

namespace nn {
namespace applet {
/* The per-screen record in a display capture request. Keep the existing constructor symbol
 * until it can be renamed along with the retail object. */
class SleepCallback {
public:
    SleepCallback();
    /* 0x00 */ u32 leftBufferOffset;
    /* 0x04 */ u32 rightBufferOffset;
    /* 0x08 */ u32 pixelFormat;
};
typedef SleepCallback DisplayCaptureScreen;
typedef char DisplayCaptureScreenLayoutCheck[
    sizeof(DisplayCaptureScreen) == 0x0c && offsetof(DisplayCaptureScreen, rightBufferOffset) == 4 &&
    offsetof(DisplayCaptureScreen, pixelFormat) == 8 ? 1 : -1];
} /* namespace applet */
} /* namespace nn */

#endif
