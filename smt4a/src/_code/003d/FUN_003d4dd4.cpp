/* NON_MATCHING: VFP intermediate registers differ in the division/conversion expressions; control flow and constants match retail. */
#include "common.h"

extern "C" f32 FUN_001a1ee0(f32 angle);

/* Evaluate linear or quarter-wave interpolation at an integer frame fraction. */
extern "C" f32 FUN_003d4dd4(s32 mode, s32 duration, s32 frame)
{
    f32 result = 0.0f;
    if (duration != 0) {
        if (mode == 0) {
            return (f32)frame / (f32)duration;
        }
        if (mode == 1) {
            return FUN_001a1ee0(((f32)frame * 1.57079632679f / (f32)duration) * 40.7436654315f);
        }
        if (mode == 2) {
            result = FUN_001a1ee0(((f32)frame * 1.57079632679f / (f32)duration + 4.71238898038f) *
                                 40.7436654315f) + 1.0f;
        }
    }
    return result;
}
