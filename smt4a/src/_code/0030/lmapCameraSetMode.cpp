/* NON_MATCHING: literal pool order (retail: global address before 0.0f) and add r3 vs r2 for &axis.y. */
#include "map/LmapViewGlobals.h"

extern "C" {

void FUN_00395904(void);


/* Sets the camera block's mode and resets its transition state. */
void lmapCameraSetMode(s32 mode)
{
    LmapViewA *camera = g_lmapViewHolder.view;

    camera->moving = 0;
    camera->mode = mode;
    camera->phase = 0;
    camera->unk008 = 0;
    camera->upCopy = camera->up;
    camera->unk298 = 0.0f;
    if (mode != 0) {
        camera->unk210 = 0.0f;
        camera->unk214 = 0.0f;
        camera->flagB4 = 0;
        camera->flagB5 = 0;
        camera->timer = 10;
        camera->step = 0;
        camera->axis.x = 0.0f;
        camera->axis.y = 0.0f;
        camera->axis.z = 1.0f;
        if (mode == 8 || mode == 9) {
            camera->unk298 = 180.0f;
        }
    }
    FUN_00395904();
}

} /* extern "C" */
