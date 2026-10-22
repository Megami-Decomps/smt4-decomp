#include "battle/btlCamera.h"
extern "C" {
extern BtlCameraA* g_btlCamera;
s32 scrGetArg(u32);
void mathVectorClear(f32*);
void FUN_004f1c5c(BtlCameraA*, s32);
void FUN_004f1edc(BtlCameraA*);

// Resets the battle camera to its stored coordinates or clears its current coordinates.
u32 FUN_003b1d34(void)
{
    s32 mode = scrGetArg(0);
    BtlCameraA* camera = g_btlCamera;
    if (camera != NULL) {
        if (mode == 0) {
            FUN_004f1c5c(camera, 0);
            FUN_004f1edc(camera);
            camera->unk3C = 0;
            camera->unk38 = 1;
            camera->unk0C = camera->unk14;
            camera->unk10 = camera->unk18;
        } else if (mode == 1) {
            mathVectorClear(camera->vector);
            camera->unk3C = 0;
            camera->unk38 = 1;
            camera->unk0C = 0.0f;
            camera->unk10 = 0.0f;
        }
    }
    return 1;
}
}
