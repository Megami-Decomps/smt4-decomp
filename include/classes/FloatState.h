#ifndef CLASSES_FLOATSTATE_H
#define CLASSES_FLOATSTATE_H

#include "common.h"
#include "gfx/CameraVector3.h"
#include <stddef.h>

/* A sub-object whose two floating-point state values (0x50 and 0x5C) are cleared out of line. */
class FloatState {
public:
    FloatState();
    ~FloatState() __attribute__((weak));

    union {
        /* 0x00 */ u8 unk00[0x50];
        struct {
            /* 0x00 */ f32 parameters[6];
            /* 0x18 */ AsdCameraVec3 vectors[4];
            /* 0x48 */ f32 calibration;
            /* 0x4c */ f32 offset;
        } stereo;
    };
    /* 0x50 */ f32 first;
    union {
        /* 0x54 */ u8 unk54[8];
        /* 0x54 */ f32 middleOffsets[2];
    };
    /* 0x5C */ f32 second;
};

typedef char FloatStateSizeCheck[
    sizeof(FloatState) == 0x60 && offsetof(FloatState, first) == 0x50 &&
    offsetof(FloatState, second) == 0x5c && offsetof(FloatState, stereo.vectors) == 0x18 &&
    offsetof(FloatState, stereo.calibration) == 0x48 &&
    offsetof(FloatState, stereo.offset) == 0x4c &&
    offsetof(FloatState, middleOffsets) == 0x54 ? 1 : -1];

#endif
