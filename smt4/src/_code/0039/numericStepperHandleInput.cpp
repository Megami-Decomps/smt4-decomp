#include "shard/W6_W6Match7_NumericStepper.h"
#include "code/Code003c.h"
#include "code/Code003c_Smt4.h"

extern "C" {
s32 ifTouchGetSelectionModeForRegion(s32 key);
s32 ifTouchIsInitialSelection(s32 key);
s32 FUN_003c2b44(u32 mode);
s32 getMaskType3(u32 mode);
s32 getMaskType4(u32 mode);
void FUN_00233404(void);
}

extern "C" void numericStepperHandleInput(NumericStepper* stepper)
{
    stepper->incrementActive = 0;
    stepper->decrementActive = 0;
    const s32 previous = stepper->value;
    const s32 incrementState = ifTouchGetSelectionModeForRegion(stepper->incrementKey);
    const s32 decrementState = ifTouchGetSelectionModeForRegion(stepper->decrementKey);
    if (incrementState != 0) {
        stepper->incrementActive = 1;
    }
    if (decrementState != 0) {
        stepper->decrementActive = 1;
    }

    /* A press on the increment button wraps at the maximum; a press, or holding it below the
     * maximum, steps up. The decrement button's press is only read when the increment one did nothing. */
    const s32 incrementPressed = ifTouchIsInitialSelection(stepper->incrementKey);
    if (incrementPressed != 0 && stepper->value == stepper->maximum) {
        stepper->value = stepper->minimum;
    } else if (incrementPressed != 0 || (incrementState == 2 && stepper->value < stepper->maximum)) {
        ++stepper->value;
    } else if (ifTouchIsInitialSelection(stepper->decrementKey) != 0) {
        if (stepper->value == stepper->minimum) {
            stepper->value = stepper->maximum;
        } else {
            --stepper->value;
        }
    } else if (decrementState == 2 && stepper->value > 0) {
        --stepper->value;
    } else if (FUN_003c2a84(0) != 0 && stepper->value == stepper->maximum) {
        stepper->value = stepper->minimum;
    } else if (FUN_003c2b44(0) != 0 && stepper->value == stepper->minimum) {
        stepper->value = stepper->maximum;
    } else {
        if (getMaskType3(0) != 0) {
            stepper->value += 10;
        }
        if (getMaskType4(0) != 0) {
            stepper->value -= 10;
        }
        if (FUN_003c2a54(0) != 0) {
            ++stepper->value;
        }
        if (FUN_003c2ab4(0) != 0) {
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
        FUN_00233404();
    }
}
