/* NON_MATCHING: dataflow and block layout now match (scale defaults to 0.1f, the camera is read inside the else); only register numbering differs (retail: camera base r5 / mode r6, constants loaded s1,s2,s0). */
#include "common.h"

// Projection data lies beyond the shared ProjectionCamera prefix.
struct CameraScaleView {
    u8 unk000[0x588];
    f32 height; // 0x588
    u8 unk58c[0x24];
    f32 distance; // 0x5b0
    u8 unk5b4[0xc];
    f32 fieldOfView; // 0x5c0
};
struct CameraScaledDisplay {
    u8 unk00[0x3c];
    s8 mode; // 0x3c
    u8 unk3d[3];
    f32 scale; // 0x40
    u8 unk44[0xc];
    u32 flags; // 0x50
};
extern "C" {
extern CameraScaleView *g_btlCamera;
f32 FUN_0050dda4(f32 angle);

// Derive display scale from the battle camera's perspective, with optional distance compensation.
void FUN_004cb9d0(CameraScaledDisplay *display)
{
    if (display->flags & 0x200000) {
        display->scale = 1.0f;
    } else {
        CameraScaleView *camera = g_btlCamera;
        s32 mode = display->mode;
        f32 scale = 0.1f;
        f32 height = camera->height;
        f32 halfAngle = camera->fieldOfView * 0.5f;
        f32 angle = halfAngle * 0.0055555557f * 3.1415927f;
        f32 projectedScale = height / (120.0f / FUN_0050dda4(angle));
        if (mode == 0)
            scale = projectedScale;
        else if (mode == 1)
            scale = (projectedScale / camera->distance) * (camera->distance - 15.0f);
        else if (mode == 2)
            scale = (projectedScale / camera->distance) * (camera->distance - -20.0f);
        display->scale = scale;
    }
}
}
