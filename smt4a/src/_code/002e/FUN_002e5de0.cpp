/* NON_MATCHING: armcc keeps the slope pointer in r4 rather than lr, groups key reads differently and emits a different initial next-key guard. */
#include "common.h"

struct InterpolationKey {
    s32 value;
    s32 time;
    u8 unk08[0x10];
};
struct InterpolationTrack {
    u8 unk00[0x54];
    InterpolationKey keys[4]; // 0x54
};
extern "C" void FUN_00229264(f32 *current, f32 slope, f32 target);

// Advance a four-key scalar track, skipping coincident key times.
extern "C" void FUN_002e5de0(const InterpolationTrack *track, s32 *frame, s8 *index, s32 *duration, f32 *current, f32 *slope, f32 *target)
{
    if (*index >= 4)
        return;
    ++*frame;
    if (*frame > *duration) {
        *frame = 0;
        *slope = 0.0f;
        if (*index < 3) {
            for (s32 step = 1; *index + step < 4; ++step) {
                s32 elapsed = track->keys[*index + step].time - track->keys[*index].time;
                *duration = elapsed;
                if (elapsed > 0) {
                    *slope = static_cast<f32>(track->keys[*index + step].value - track->keys[*index].value) /
                             static_cast<f32>(track->keys[*index + step].time - track->keys[*index].time);
                    *target = static_cast<f32>(track->keys[*index + step].value);
                    *index += step;
                    return;
                }
            }
        }
        return;
    }
    FUN_00229264(current, *slope, *target);
}
