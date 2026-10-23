/* NON_MATCHING: rangeInit argument scheduling adds one register move and reorders the second channel's loads. */
#include "gfx/RangeAnimationSelection.h"

extern "C" {
s32 rangeIsValid(Range *);
void objClearFields(Range *);
void rangeInit(Range *, f32, f32, s16, s16);

void FUN_00226a90(RangeAnimationOwnerIV *owner, s32 id, s32 group)
{
    RangeAnimationPresetPair *presets = NULL;
    if (group == 1)
        presets = owner->animation.presets->groups[0];
    else if (group == 2)
        presets = owner->animation.presets->groups[1];
    else if (group == 3)
        presets = owner->animation.presets->groups[2];
    for (s32 index = 0; index < 2; ++index) {
        if (owner->animation.first && presets[index].first.duration != 0 && presets[index].first.id == id) {
            if (!rangeIsValid(owner->animation.first))
                objClearFields(owner->animation.first);
            rangeInit(owner->animation.first,
                static_cast<f32>(presets[index].first.startPercent) * 0.01f,
                static_cast<f32>(presets[index].first.endPercent) * 0.01f,
                presets[index].first.duration, 0);
        }
        if (owner->animation.second && presets[index].second.duration != 0 && presets[index].second.id == id) {
            if (!rangeIsValid(owner->animation.second))
                objClearFields(owner->animation.second);
            rangeInit(owner->animation.second,
                static_cast<f32>(presets[index].second.startPercent) * 0.01f,
                static_cast<f32>(presets[index].second.endPercent) * 0.01f,
                presets[index].second.duration, 0);
        }
    }
}
}
