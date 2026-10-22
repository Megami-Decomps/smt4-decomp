/* NON_MATCHING: octant block layout, phase-constant materialization, and VFP allocation differ. */
#include "common.h"

extern "C" f32 FUN_002378fc(f32 ratio);

// Signed planar heading, with 256 angle units per turn.
extern "C" f32 FUN_0024c418(f32 y, f32 x)
{
    if (x == 0.0f && y == 0.0f) {
        return 0.0f;
    }
    const f32 quarterTurn = 64.0f;
    const f32 halfTurn = 128.0f;
    f32 denominator;
    f32 offset = 0.0f;
    bool reflected;
    f32 oppositeY = -y;
    // Fold the point into its principal octant; x becomes the minor-axis coordinate.
    if (x >= 0.0f) {
        if (y >= 0.0f) {
            if (x >= y) {
                denominator = x;
                x = y;
                reflected = false;
            } else {
                denominator = y;
                offset = quarterTurn;
                reflected = true;
            }
        } else {
            if (x >= oppositeY) {
                denominator = x;
                x = oppositeY;
                reflected = true;
            } else {
                denominator = oppositeY;
                offset = -quarterTurn;
                reflected = false;
            }
        }
    } else {
        x = -x;
        if (y >= 0.0f) {
            if (x >= y) {
                denominator = x;
                x = y;
                offset = halfTurn;
                reflected = true;
            } else {
                denominator = y;
                offset = quarterTurn;
                reflected = false;
            }
        } else {
            if (x >= oppositeY) {
                denominator = x;
                x = oppositeY;
                offset = -halfTurn;
                reflected = false;
            } else {
                denominator = oppositeY;
                offset = -quarterTurn;
                reflected = true;
            }
        }
    }
    if (reflected) {
        return offset - FUN_002378fc(x / denominator);
    }
    return FUN_002378fc(x / denominator) + offset;
}
