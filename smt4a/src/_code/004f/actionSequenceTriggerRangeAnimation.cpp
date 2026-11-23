#include "gfx/RangeAnimationSelection.h"

extern "C" {
s32 rangeIsValid(Range *range);
void words5Clear(Range *range);
void rangeInit(Range *range, f32 start, f32 end, s16 duration, s16 delay);

/* Applies the matching percentage-based range presets to both animation channels. */
void actionSequenceTriggerRangeAnimation(RangeAnimationOwner *owner, s32 id, s32 group)
{
    RangeAnimationPresetPair *presets = NULL;
    switch (group) {
    case 1:
        presets = owner->animation.presets->groups[0];
        break;
    case 2:
        presets = owner->animation.presets->groups[1];
        break;
    case 3:
        presets = owner->animation.presets->groups[2];
        break;
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
