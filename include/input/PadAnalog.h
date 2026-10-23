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
