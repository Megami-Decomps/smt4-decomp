/* NON_MATCHING: constant multiplications are reassociated and the result uses fewer saved VFP registers than retail. */
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
    CameraScaleView *camera = g_btlCamera;
    if (display->flags & 0x200000) {
        display->scale = 1.0f;
    } else {
        s32 mode = display->mode;
        f32 height = camera->height;
        f32 angle = camera->fieldOfView * 0.5f * 0.0055555557f * 3.1415927f;
        f32 projectedScale = height / (120.0f / FUN_0050dda4(angle));
        f32 scale = projectedScale;
        if (mode != 0) {
            if (mode == 1)
                scale = (projectedScale / camera->distance) * (camera->distance - 15.0f);
            else if (mode == 2)
                scale = (projectedScale / camera->distance) * (camera->distance - -20.0f);
            else
                scale = 0.1f;
        }
        display->scale = scale;
    }
}
}
