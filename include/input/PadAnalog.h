#ifndef INPUT_PADANALOG_H
#define INPUT_PADANALOG_H
#include "common.h"
#include <stddef.h>

struct PadAnalogCalibration {
    /* 0x00 */ u8 prefix[0xC];
    /* 0x0C */ s16 minimum[3];
    /* 0x12 */ s16 maximum[3];
    /* 0x18 */ u8 mode;
};
/* Reads the lower and upper calibration limits for the current mode. */
static __inline void padAnalogGetExtrema(const PadAnalogCalibration *calibration, s16 &minimum, s16 &maximum)
{
    if (calibration->mode == 0) {
        minimum = calibration->minimum[0];
        maximum = calibration->maximum[0];
    } else if (calibration->mode == 1) {
        minimum = calibration->minimum[1];
        maximum = calibration->maximum[1];
    } else {
        minimum = calibration->minimum[2];
        maximum = calibration->maximum[2];
    }
}

struct PadAnalogSample {
    /* 0x00 */ u8 prefix[0xC];
    /* 0x0C */ s16 x;
    /* 0x0E */ s16 y;
};
typedef char PadAnalogLayoutCheck[
    offsetof(PadAnalogCalibration, minimum) == 0xC &&
    offsetof(PadAnalogCalibration, maximum) == 0x12 &&
    offsetof(PadAnalogCalibration, mode) == 0x18 &&
    sizeof(PadAnalogSample) == 0x10 && offsetof(PadAnalogSample, x) == 0xC ? 1 : -1];
#endif
