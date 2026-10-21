#ifndef SHARD_W6_W6MATCH7_NUMERIC_STEPPER_H
#define SHARD_W6_W6MATCH7_NUMERIC_STEPPER_H

#include "common.h"

struct NumericStepper {
    /* 0x00 */ s32 value;
    /* 0x04 */ s32 maximum;
    /* 0x08 */ s32 minimum;
    /* 0x0c */ u8 unk0c[4];
    /* 0x10 */ u8 incrementActive;
    /* 0x11 */ u8 decrementActive;
    /* 0x12 */ s16 incrementKey;
    /* 0x14 */ s16 decrementKey;
    /* 0x16 */ u8 unk16[2];
};

extern "C" {
void numericStepperHandleInput(NumericStepper* stepper);
void numericStepperHandleInput(NumericStepper* stepper);
}

#endif
