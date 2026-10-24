#ifndef CLASSES_FLOATSTATE_H
#define CLASSES_FLOATSTATE_H

#include "common.h"

/* A sub-object whose two floating-point state values (0x50 and 0x5C) are cleared out of line. */
class FloatState {
public:
    FloatState();

    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ f32 first;
    /* 0x54 */ u8 unk54[8];
    /* 0x5C */ f32 second;
};

#endif
