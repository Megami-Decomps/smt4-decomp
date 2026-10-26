/* NON_MATCHING: integer-key interpolation and native advance tail call are recovered; paired field loads, branch layout and VFP scheduling differ. */
#include "common.h"

struct IntegerCurveKey {
    /* 0x00 */ s32 value;
    /* 0x04 */ s32 frame;
    /* 0x08 */ u8 unk08[0x10];
};

struct IntegerCurve {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ IntegerCurveKey keys[4];
};

extern "C" void FUN_00291008(f32 *value, f32 increment, f32 target);

// Advance a four-key integer curve, skipping non-increasing frame times.
extern "C" void FUN_00212224(const IntegerCurve *curve, s32 *frame, s8 *keyIndex,
                            s32 *duration, f32 *value, f32 *increment, f32 *target)
{
    if (*keyIndex >= 4)
        return;
    ++*frame;
    if (*duration < *frame) {
        *frame = 0;
        *increment = 0;
        s32 advance = 1;
        if (*keyIndex < 3) {
            for (; *keyIndex + advance < 4; ++advance) {
                *duration = curve->keys[*keyIndex + advance].frame - curve->keys[*keyIndex].frame;
                if (*duration > 0) {
                    *increment = (f32)(curve->keys[*keyIndex + advance].value - curve->keys[*keyIndex].value) /
                                 (f32)(curve->keys[*keyIndex + advance].frame - curve->keys[*keyIndex].frame);
                    *target = (f32)curve->keys[*keyIndex + advance].value;
                    *keyIndex += advance;
                    break;
                }
            }
        }
    } else {
        FUN_00291008(value, *increment, *target);
    }
}
