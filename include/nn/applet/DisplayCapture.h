#ifndef NN_APPLET_DISPLAY_CAPTURE_H
#define NN_APPLET_DISPLAY_CAPTURE_H

#include "nn/applet/SleepCallback.h"

namespace nn {
namespace applet {

/* Request passed to CaptureDisplayBuffer. The same record is sent to the applet service. */
struct DisplayCaptureRequest {
    /* 0x00 */ u32 bufferBytes;
    /* 0x04 */ bool stereo;
    /* 0x05 */ u8 reserved[3];
    /* 0x08 */ DisplayCaptureScreen screens[2];
};
typedef char DisplayCaptureRequestLayoutCheck[
    sizeof(DisplayCaptureRequest) == 0x20 && offsetof(DisplayCaptureRequest, stereo) == 4 &&
    offsetof(DisplayCaptureRequest, screens) == 8 ? 1 : -1];

} /* namespace applet */
} /* namespace nn */

extern nn::applet::DisplayCaptureRequest g_appletDisplayCaptureRequest;

#endif
