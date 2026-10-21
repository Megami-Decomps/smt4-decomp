/* NON_MATCHING: retail uses vldr s0, [pc, #136] where the compiled block uses vldr s6, [pc, #112]. */
#include "common.h"

struct DistanceEntry {
    u8 unknown_00[0x0C]; // 0x00
    f32 x;               // 0x0C
    f32 y;               // 0x10
    f32 z;               // 0x14
    u8 unknown_18[0xF8]; // 0x18
    s32 height;          // 0x110
};

extern "C" f32 sqrtf(f32 value);

extern "C" s32 FUN_00221a94(const DistanceEntry* const* left,
                            const DistanceEntry* const* right)
{
    const DistanceEntry* leftEntry = *left;
    const DistanceEntry* rightEntry = *right;

    const f32 leftX = 0.0f - leftEntry->x;
    const f32 leftY = 0.0f - leftEntry->y;
    const f32 leftZ = 0.0f -
        (leftEntry->z + static_cast<f32>(leftEntry->height) * 10.0f);

    const f32 rightX = 0.0f - rightEntry->x;
    const f32 rightY = 0.0f - rightEntry->y;
    const f32 rightZ = 0.0f -
        (rightEntry->z + static_cast<f32>(rightEntry->height) * 10.0f);

    f32 leftSquared = leftX * leftX;
    leftSquared += leftY * leftY;
    leftSquared += leftZ * leftZ;
    const f32 leftDistance = sqrtf(leftSquared) * 100.0f;

    f32 rightSquared = rightX * rightX;
    rightSquared += rightY * rightY;
    rightSquared += rightZ * rightZ;
    const f32 rightDistance = sqrtf(rightSquared) * 100.0f;

    return static_cast<s32>(leftDistance - rightDistance);
}
