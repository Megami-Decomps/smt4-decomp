/* NON_MATCHING: 82 lines: written as mathAtan2Angle256's octant fold (matched); retail loads 192 straight into the offset register at entry and leaves the two 192 octants' else arms unpredicated (only the denominator move), and pools its constants in other registers. */
#include "common.h"

extern "C" f32 FUN_001bde20(f32 ratio);

/* Returns the planar heading of (x, y) as an unsigned 16-bit angle (0x10000 per turn): mathAtan2Angle256's
 * octant fold with the base angles taken in [0, 256). */
extern "C" u32 mathAtan2AngleU16(f32 y, f32 x)
{
    if (x == 0.0f && y == 0.0f) {
        return 0;
    }
    f32 denominator;
    f32 numerator;
    f32 offset;
    bool reflected;
    f32 oppositeY = -y;
    /* Fold the point into its principal octant: the ratio's arctangent, then added to or
     * subtracted from the octant's base angle. */
    if (x >= 0.0f) {
        if (y >= 0.0f) {
            if (x >= y) {
                denominator = x;
                numerator = y;
                offset = 0.0f;
                reflected = false;
            } else {
                denominator = y;
                numerator = x;
                offset = 64.0f;
                reflected = true;
            }
        } else {
            if (x >= oppositeY) {
                denominator = x;
                numerator = oppositeY;
                offset = 256.0f;
                reflected = true;
            } else {
                denominator = oppositeY;
                numerator = x;
                offset = 192.0f;
                reflected = false;
            }
        }
    } else {
        x = -x;
        if (y >= 0.0f) {
            if (x >= y) {
                denominator = x;
                numerator = y;
                offset = 128.0f;
                reflected = true;
            } else {
                denominator = y;
                numerator = x;
                offset = 64.0f;
                reflected = false;
            }
        } else {
            if (x >= oppositeY) {
                denominator = x;
                numerator = oppositeY;
                offset = 128.0f;
                reflected = false;
            } else {
                denominator = oppositeY;
                numerator = x;
                offset = 192.0f;
                reflected = true;
            }
        }
    }
    f32 angle;
    if (reflected) {
        angle = offset - FUN_001bde20(numerator / denominator);
    } else {
        angle = FUN_001bde20(numerator / denominator) + offset;
    }
    return (u16)(u32)(angle * 256.0f);
}
