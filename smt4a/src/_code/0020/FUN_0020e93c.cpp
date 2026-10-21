/* NON_MATCHING: retail uses vldr s7, [pc, #136] where the compiled block uses vldr s7, [pc, #120]. */
#include "common.h"

struct DistanceEntry {
    u8 reserved00[0x0C]; // 0x00
    f32 x;              // 0x0C
    f32 y;              // 0x10
    f32 z;              // 0x14
    u8 reserved18[0xF8]; // 0x18
    s32 zStep;          // 0x110
};

extern "C" f32 sqrtf(f32 value);

extern "C" s32 FUN_0020e93c(const DistanceEntry* const* left,
                           const DistanceEntry* const* right) {
    const DistanceEntry* leftEntry = *left;
    const DistanceEntry* rightEntry = *right;

    f32 leftZ = leftEntry->z + static_cast<f32>(leftEntry->zStep) * 10.0f;
    f32 rightZ = rightEntry->z + static_cast<f32>(rightEntry->zStep) * 10.0f;

    f32 leftXDelta = 0.0f - leftEntry->x;
    f32 leftYDelta = 0.0f - leftEntry->y;
    f32 leftZDelta = 0.0f - leftZ;
    f32 rightXDelta = 0.0f - rightEntry->x;
    f32 rightYDelta = 0.0f - rightEntry->y;
    f32 rightZDelta = 0.0f - rightZ;

    f32 leftSquared = leftXDelta * leftXDelta;
    leftSquared += leftYDelta * leftYDelta;
    leftSquared += leftZDelta * leftZDelta;
    f32 leftDistance = sqrtf(leftSquared) * 100.0f;

    f32 rightSquared = rightXDelta * rightXDelta;
    rightSquared += rightYDelta * rightYDelta;
    rightSquared += rightZDelta * rightZDelta;
    f32 rightDistance = sqrtf(rightSquared) * 100.0f;

    return static_cast<s32>(rightDistance - leftDistance);
}
