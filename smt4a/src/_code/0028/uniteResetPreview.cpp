#include "shard/W5_W5Match2_UniteWork.h"
#include "gfx/CameraMotion.h"

extern "C" {
extern UniteWork *g_unite;
void FUN_003fe86c(void *object, s32 motion, s32 mode, f32 blend, f32 start);

/* Restarts the fusion preview: both demon models' motions, the camera pose and the 480-frame
 * timer. */
void uniteResetPreview(void)
{
    UniteWork *unite = g_unite;
    if (unite != NULL) {
        FUN_003fe86c(unite->previewA.firstModel->object, 0, 2, 480.0f, 0.0f);
        FUN_003fe86c(unite->previewA.secondModel->object, 0, 2, 480.0f, 0.0f);
        controllerRefreshAtUnitScale(reinterpret_cast<AnimatedObject *>(unite->previewA.camera), reinterpret_cast<CameraMotionOutput *>(unite->previewA.cameraPose), 0);
        FUN_003f9ac4(reinterpret_cast<AnimatedObject *>(unite->previewA.camera), reinterpret_cast<CameraMotionOutput *>(unite->previewA.cameraPose), 0, 480.0f);
        unite->previewA.frames = 480;
        unite->previewA.resetCount++;
    }
}
}
