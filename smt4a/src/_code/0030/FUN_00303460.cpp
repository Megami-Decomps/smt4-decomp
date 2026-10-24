/* NON_MATCHING: literal pool order (retail: global address before 0.0f) and add r3 vs r2 for &axis.y. */
#include "map/lmapMain.h"

extern "C" {

void FUN_00395904(void);

extern LmapExtraGlobalsA DAT_005806a0;

/* Sets the camera block's mode and resets its transition state. */
void FUN_00303460(s32 mode)
{
    LmapExtraA *camera = DAT_005806a0.extra;

    camera->cameraTransition.flag220 = 0;
    camera->camera.mode = mode;
    camera->camera.unk004 = 0;
    camera->camera.unk008 = 0;
    camera->camera.upCopy = camera->camera.up;
    camera->cameraTransition.unk298 = 0.0f;
    if (mode != 0) {
        camera->cameraTransition.unk210F = 0.0f;
        camera->cameraTransition.unk214F = 0.0f;
        camera->flagB4 = 0;
        camera->flagB5 = 0;
        camera->timer = 10;
        camera->step = 0;
        camera->axis.x = 0.0f;
        camera->axis.y = 0.0f;
        camera->axis.z = 1.0f;
        if (mode == 8 || mode == 9) {
            camera->cameraTransition.unk298 = 180.0f;
        }
    }
    FUN_00395904();
}

} /* extern "C" */
