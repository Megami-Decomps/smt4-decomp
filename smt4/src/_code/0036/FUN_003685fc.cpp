/* NON_MATCHING: instruction scheduling only (pool load order, add/vldmia register, mov/strb order) */
#include "common.h"

extern "C" {

typedef struct Pair {
    f32 first;
    f32 second;
} Pair;

typedef f32 (*StepFn)(void *context, Pair pair, f32 position);

typedef struct Stepper {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ f32 position;
    /* 0x3C */ f32 previous;
    /* 0x40 */ f32 step;
    /* 0x44 */ Pair pair;
    /* 0x4C */ StepFn fn;
    /* 0x50 */ void *context;
    /* 0x54 */ u8 unk54[4];
    /* 0x58 */ u8 updated;
} Stepper;

/* Advances the position by the step through the stepper's callback, keeping the previous position; a zero step does nothing. */
void FUN_003685fc(Stepper *stepper)
{
    if (stepper->step == 0.0f) {
        return;
    }
    f32 result = stepper->fn(stepper->context, stepper->pair, stepper->position + stepper->step);
    stepper->previous = stepper->position;
    stepper->position = result;
    stepper->updated = 1;
}

} /* extern "C" */
