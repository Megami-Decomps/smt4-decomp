/* NON_MATCHING: retail retains an unused first-label minimum accumulator; readable maximum loop differs. */
#include "battle/LabelValues.h"
extern "C" {
void *btlGetMainState(void);
s32 btlScriptUnitHasFlags(void *state);
u32 wstrlen(const char *text);
s32 libc_strcmp(const char *left, const char *right);

// Return the largest nonnegative value attached to a nonempty, nonzero battle label.
s32 FUN_004f80e4(BattleLabelValueState *state)
{
    if (state->resource == NULL || state->labels == NULL || btlScriptUnitHasFlags(btlGetMainState()))
        return -1;
    s32 maximum = 0;
    for (s32 index = 0; index < 4; ++index) {
        const BattleLabelValue *label = &state->labels[index];
        if (wstrlen(label->label) && libc_strcmp(label->label, "0")) {
            s32 value = state->labels[index].value;
            if (value >= 0 && value > maximum)
                maximum = value;
        }
    }
    return maximum;
}
}
