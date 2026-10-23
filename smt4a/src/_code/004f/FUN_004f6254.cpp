/* NON_MATCHING: rangeInit's integer argument scheduling adds one register move; percentage conversions otherwise match. */
#include "gfx/RangeAnimationSelection.h"

extern "C" {
s32 rangeIsValid(Range *range);
void words5Clear(Range *range);
void rangeInit(Range *range, f32 start, f32 end, s16 duration, s16 delay);

// Apply matching percentage-based range presets to both animation channels.
void FUN_004f6254(RangeAnimationOwner *owner, s32 id, s32 group)
{
    RangeAnimationPresetPair *presets = NULL;
    if (group == 1) {
        presets = owner->animation.presets->groups[0];
    } else if (group == 2) {
        presets = owner->animation.presets->groups[1];
    } else if (group == 3) {
        presets = owner->animation.presets->groups[2];
    }
    for (s32 index = 0; index < 2; ++index) {
        if (owner->animation.first != NULL && presets[index].first.duration != 0 &&
            presets[index].first.id == id) {
            if (!rangeIsValid(owner->animation.first)) {
                words5Clear(owner->animation.first);
            }
            rangeInit(owner->animation.first,
                static_cast<f32>(presets[index].first.startPercent) * 0.01f,
                static_cast<f32>(presets[index].first.endPercent) * 0.01f,
                presets[index].first.duration, 0);
        }
        if (owner->animation.second != NULL && presets[index].second.duration != 0 &&
            presets[index].second.id == id) {
            if (!rangeIsValid(owner->animation.second)) {
                words5Clear(owner->animation.second);
            }
            rangeInit(owner->animation.second,
                static_cast<f32>(presets[index].second.startPercent) * 0.01f,
                static_cast<f32>(presets[index].second.endPercent) * 0.01f,
                presets[index].second.duration, 0);
        }
    }
}
}
