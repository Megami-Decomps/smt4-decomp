/* NON_MATCHING: angle is now built from named half-angle with three separate multiplies (matches retail's three vmuls); remaining: constant register numbering (retail loads 0.5/1/180/pi into s2,s1,s0) and pool order */
#include "common.h"

struct BattleCameraProjection {
    /* 0x000 */ u8 unk000[0x588];
    /* 0x588 */ float height;
    /* 0x58C */ u8 unk58C[0x24];
    /* 0x5B0 */ float distance;
    /* 0x5B4 */ u8 unk5B4[0xC];
    /* 0x5C0 */ float fieldOfView;
};

extern "C" {
extern BattleCameraProjection* g_btlCamera;
float FUN_0050dda4(float angle);

// Compute a projection scale at the camera's current distance or either offset plane.
float FUN_004cb90c(s32 plane)
{
    BattleCameraProjection* camera = g_btlCamera;
    float scale = 0.1f;
    float height = camera->height;
    float halfAngle = camera->fieldOfView * 0.5f;
    float angle = halfAngle * 0.0055555557f * 3.1415927f;
    float tangent = FUN_0050dda4(angle);
    float projected = height / (120.0f / tangent);
    switch (plane) {
    case 0:
        scale = projected;
        break;
    case 1:
        scale = (projected / camera->distance) * (camera->distance - 15.0f);
        break;
    case 2:
        scale = (projected / camera->distance) * (camera->distance - -20.0f);
        break;
    }
    return scale;
}
}
