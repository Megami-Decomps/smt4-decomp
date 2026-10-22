/* NON_MATCHING: Retail vldr s3, [r0, #4] differs from recovered vldr s1, [r0, #4]. */
#include "common.h"
#include <math.h>

struct DirectionSourceView {
    u8 unk00[0x04];
    f32 unk04; // 0x04
    u8 unk08[0x04];
    f32 unk0C; // 0x0C
    f32 unk10; // 0x10
    u8 unk14[0x04];
    f32 unk18; // 0x18
};

struct GameStateView {
    u8 unk00[0x460];
    u8 unk460; // 0x460
};

struct NaviMainView {
    u8 unk00[0x48];
    f32 unk48; // 0x48
};

struct DirectionVector {
    f32 x;
    f32 y;
    f32 z;
};

extern "C" {
extern GameStateView g_gameState;
extern NaviMainView* g_naviMain;
DirectionSourceView* FUN_00152f54(void);
f32 FUN_001b640c(f32 directionX, f32 directionZ);
}

// Normalize the horizontal direction and compute its angle, allowing the navigation override.
extern "C" f32 FUN_00492adc(void)
{
    const DirectionSourceView* source = FUN_00152f54();
    DirectionVector direction = {
        source->unk10 - source->unk04,
        0.0f,
        source->unk18 - source->unk0C
    };
    f32 inverseLength = 1.0f / sqrtf(direction.x * direction.x
                                  + direction.y * direction.y
                                  + direction.z * direction.z);
    direction.x *= inverseLength;
    direction.z *= inverseLength;

    f32 angle = 360.0f + FUN_001b640c(direction.x, direction.z) * 1.40625f;
    union {
        f32 value;
        s32 bits;
    } angleRepresentation;
    angleRepresentation.value = angle;
    if (angleRepresentation.bits > 0x43B40000)
        angle -= 360.0f;

    if (g_gameState.unk460 != 0)
        angle = g_naviMain->unk48;

    return angle;
}
