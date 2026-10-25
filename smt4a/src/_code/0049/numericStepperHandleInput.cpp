/* NON_MATCHING: first wrap test branches BNE/add then B/wrap instead of retail BEQ/wrap then B/add. */
#include "shard/W6_W6Match7_NumericStepper.h"
#include "util/GetMaskB5.h"

extern "C" {
s32 ifTouchIsInitialSelection(s32 key);
s32 recordGetModeForId(s32 key);
s32 getMaskType3(u32 mode);
s32 getMaskType4(u32 mode);
s32 getMaskType5(u32 mode);
s32 getMaskType6(u32 mode);
void sendEvent100020D(void);
}

extern "C" void numericStepperHandleInput(NumericStepper* stepper)
{
    stepper->incrementActive = 0;
    stepper->decrementActive = 0;
    const s32 previous = stepper->value;
    const s32 incrementState = recordGetModeForId(stepper->incrementKey);
    const s32 decrementState = recordGetModeForId(stepper->decrementKey);
    if (incrementState != 0) {
        stepper->incrementActive = 1;
    }
    if (decrementState != 0) {
        stepper->decrementActive = 1;
    }

    if (ifTouchIsInitialSelection(stepper->incrementKey) != 0) {
        if (stepper->value != stepper->maximum) {
            ++stepper->value;
        } else {
            stepper->value = stepper->minimum;
        }
    } else if (incrementState == 2 && stepper->value < stepper->maximum) {
        ++stepper->value;
    } else if (ifTouchIsInitialSelection(stepper->decrementKey) != 0) {
        if (stepper->value == stepper->minimum) {
            stepper->value = stepper->maximum;
        } else {
            --stepper->value;
        }
    } else if (decrementState == 2 && stepper->value > 0) {
        --stepper->value;
    } else if (getMaskB5(0) != 0 && stepper->value == stepper->maximum) {
        stepper->value = stepper->minimum;
    } else if (getMaskB6(0) != 0 && stepper->value == stepper->minimum) {
        stepper->value = stepper->maximum;
    } else {
        if (getMaskType3(0) != 0) {
            stepper->value += 10;
        }
        if (getMaskType4(0) != 0) {
            stepper->value -= 10;
        }
        if (getMaskType5(0) != 0) {
            ++stepper->value;
        }
        if (getMaskType6(0) != 0) {
            --stepper->value;
        }
    }

    if (stepper->value <= stepper->minimum) {
        stepper->value = stepper->minimum;
    }
    if (stepper->value > stepper->maximum) {
        stepper->value = stepper->maximum;
    }
    if (stepper->value != previous) {
        sendEvent100020D();
    }
}
