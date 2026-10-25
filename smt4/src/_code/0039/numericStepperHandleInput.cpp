/* NON_MATCHING: first wrap test branches BNE/add then B/wrap instead of retail BEQ/wrap then B/add. */
#include "shard/W6_W6Match7_NumericStepper.h"
#include "util/FUN_003c2a54.h"

extern "C" {
s32 ifTouchGetSelectionModeForRegion(s32 key);
s32 ifTouchIsInitialSelection(s32 key);
s32 FUN_003c2b44(u32 mode);
s32 FUN_003c2b14(u32 mode);
s32 FUN_003c2ae4(u32 mode);
s32 FUN_003c2ab4(u32 mode);
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
    } else if (FUN_003c2a84(0) != 0 && stepper->value == stepper->maximum) {
        stepper->value = stepper->minimum;
    } else if (FUN_003c2b44(0) != 0 && stepper->value == stepper->minimum) {
        stepper->value = stepper->maximum;
    } else {
        if (FUN_003c2b14(0) != 0) {
            stepper->value += 10;
        }
        if (FUN_003c2ae4(0) != 0) {
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
