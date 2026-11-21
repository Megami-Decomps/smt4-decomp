#include "common.h"

extern "C" f32 FUN_002378fc(f32 ratio);

/* Returns the signed planar heading of (x, y), 256 angle units per turn (64 = a quarter turn). */
extern "C" f32 mathAtan2Angle256(f32 y, f32 x)
{
    if (x == 0.0f && y == 0.0f) {
        return 0.0f;
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
                offset = 0.0f;
                reflected = true;
            } else {
                denominator = oppositeY;
                numerator = x;
                offset = -64.0f;
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
                offset = -128.0f;
                reflected = false;
            } else {
                denominator = oppositeY;
                numerator = x;
                offset = -64.0f;
                reflected = true;
            }
        }
    }
    if (reflected) {
        return offset - FUN_002378fc(numerator / denominator);
    }
    return FUN_002378fc(numerator / denominator) + offset;
}
