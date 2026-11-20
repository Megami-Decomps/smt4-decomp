/* NON_MATCHING: Camera pointer reloads and saved-vector copy grouping differ. */
#include "common.h"
#include "map/LmapViewGlobals.h"
#include "map/mapDepart.h"
#include <stddef.h>
#include "title/titleMain.h"
#include "shard/W6_W6Match3_EffectColor.h"

struct LocalCamera;

extern "C" {
extern LocalCamera g_localCamera;

void cameraMatrixCacheSetLookAt(LocalCamera *, const MapVector *, const MapVector *,
                  const MapVector *);
void stereoCameraSetPerspective(LocalCamera *, s32, f32, f32, f32, f32);

void FUN_00303710(void)
{
    /* The model manager (an Obj557c48) takes the camera in its word at 0x0C. */
    struct ModelManagerCameraPrefix {
        u8 unk00[0xC];
        LocalCamera *camera;
    };

    g_lmapViewHolder.view->up.x = 0.0f;
    g_lmapViewHolder.view->up.y = 1.0f;
    g_lmapViewHolder.view->up.z = 0.0f;

    g_lmapViewHolder.view->target.x = 0.0f;
    g_lmapViewHolder.view->target.y = 0.0f;
    g_lmapViewHolder.view->target.z = 0.0f;

    g_lmapViewHolder.view->eye.x = 0.0f;
    g_lmapViewHolder.view->eye.y = 300.0f;
    g_lmapViewHolder.view->eye.z = 300.0f;

    g_lmapViewHolder.view->savedTarget = g_lmapViewHolder.view->target;
    g_lmapViewHolder.view->savedEye = g_lmapViewHolder.view->eye;

    asdCameraInitializeDefaults(reinterpret_cast<AsdCamera *>(&g_localCamera), 1);
    cameraMatrixCacheSetLookAt(&g_localCamera,
                 &g_lmapViewHolder.view->eye,
                 &g_lmapViewHolder.view->target,
                 &g_lmapViewHolder.view->up);
    stereoCameraSetPerspective(&g_localCamera, 1, 36.0f, 10.0f, 2560000.0f,
                 1.66666662693023681640625f);
    FUN_0036b824(reinterpret_cast<u32>(&g_localCamera));

    LmapViewA *view = g_lmapViewHolder.view;
    reinterpret_cast<ModelManagerCameraPrefix *>(view->modelManager)->camera = &g_localCamera;
    view->parameterA0 = 500.0f;
    view->parameterA4 = 0.0f;
    view->enabled = 1;
    view->state = 0;
}
}
