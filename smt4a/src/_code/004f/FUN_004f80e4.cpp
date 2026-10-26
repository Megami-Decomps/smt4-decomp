/* NON_MATCHING: retail fully unrolls the four-label loop (first label peeled, still carrying the dead 9999 minimum accumulator); the build keeps a loop. Label reloads (state->labels re-read after each call) and the minimum accumulator now follow retail. */
#include "battle/BtlMainAccess.h"
#include "battle/LabelValues.h"
extern "C" {
s32 btlScriptUnitHasFlags(void *state);
u32 libc_strlen(const char *text);
s32 libc_strcmp(const char *left, const char *right);

// Return the largest nonnegative value attached to a nonempty, nonzero battle label.
s32 FUN_004f80e4(BattleLabelValueState *state)
{
    if (state->resource == NULL || state->labels == NULL || btlScriptUnitHasFlags(static_cast<void *>(btlGetMainState())))
        return -1;
    s32 minimum = 9999;
    s32 maximum = 0;
    for (s32 index = 0; index < 4; ++index) {
        if (libc_strlen(state->labels[index].label) && libc_strcmp(state->labels[index].label, "0")) {
            s32 value = state->labels[index].value;
            if (value >= 0) {
                if (value < minimum)
                    minimum = value;
                if (value > maximum)
                    maximum = value;
            }
        }
    }
    return maximum;
}
}
