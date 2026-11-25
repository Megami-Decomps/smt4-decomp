#include "battle/BtlMainAccess.h"
#include "battle/LabelValues.h"
#include <string.h>
extern "C" {
s32 btlScriptUnitHasFlags(void *state);
u32 libc_strlen(const char *text);

/* Returns the largest nonnegative value attached to a nonempty, nonzero battle label. */
s32 btlGetMaximumNamedValue(BattleLabelValueState *state)
{
    if (state->resource == NULL || state->labels == NULL || btlScriptUnitHasFlags(btlGetMainState()))
        return -1;
    s32 maximum = 0;
    /* The original tracks the minimum as well, but returns only the maximum. */
    s32 minimum = 9999;
    if (libc_strlen(state->labels[0].label) && strcmp(state->labels[0].label, "0") != 0) {
        s32 value = state->labels[0].value;
        if (value >= 0) {
            minimum = value < minimum ? value : minimum;
            if (value > maximum) {
                maximum = value;
            }
        }
    }
    if (libc_strlen(state->labels[1].label) && strcmp(state->labels[1].label, "0") != 0) {
        s32 value = state->labels[1].value;
        if (value >= 0) {
            minimum = value < minimum ? value : minimum;
            if (value > maximum) {
                maximum = value;
            }
        }
    }
    if (libc_strlen(state->labels[2].label) && strcmp(state->labels[2].label, "0") != 0) {
        s32 value = state->labels[2].value;
        if (value >= 0) {
            minimum = value < minimum ? value : minimum;
            if (value > maximum) {
                maximum = value;
            }
        }
    }
    if (libc_strlen(state->labels[3].label) && strcmp(state->labels[3].label, "0") != 0) {
        s32 value = state->labels[3].value;
        if (value >= 0) {
            minimum = value < minimum ? value : minimum;
            if (value > maximum) {
                maximum = value;
            }
        }
    }
    return maximum;
}
} /* extern "C" */
