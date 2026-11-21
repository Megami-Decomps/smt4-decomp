/* NON_MATCHING: the look-at setup matches with IV's plain static setCameraVector (FUN_0021baf4); the perspective call's argument schedule (retail: r0, s3, r1, s2-s0) points at stereoCameraSetPerspective's real parameter order, and the closing stores use other scratch registers. */
#include "common.h"
#include "map/LmapViewGlobals.h"
#include "map/mapDepart.h"
#include <stddef.h>
#include "title/titleMain.h"
#include "shard/W6_W6Match3_EffectColor.h"
#include "classes/Obj557c48.h"

struct LocalCamera;

extern "C" {
extern LocalCamera g_localCamera;

void cameraMatrixCacheSetLookAt(LocalCamera *, const MapVector *, const MapVector *,
                  const MapVector *);
void stereoCameraSetPerspective(LocalCamera *, s32, f32, f32, f32, f32);

} /* extern "C" */

/* Sets one look-at vector (IV's FUN_0021baf4 has the same helper). */
static void setCameraVector(MapVector &vector, f32 x, f32 y, f32 z)
{
    vector.x = x;
    vector.y = y;
    vector.z = z;
}

/* Resets the local map camera: its look-at vectors, projection and the view's camera parameters. */
extern "C" void lmapCameraResetLocal(void)
{
    setCameraVector(g_lmapViewHolder.view->up, 0.0f, 1.0f, 0.0f);
    setCameraVector(g_lmapViewHolder.view->target, 0.0f, 0.0f, 0.0f);
    setCameraVector(g_lmapViewHolder.view->eye, 0.0f, 300.0f, 300.0f);
    LmapViewA *view = g_lmapViewHolder.view;
    view->savedTarget = view->target;
    view->savedEye = view->eye;

    asdCameraInitializeDefaults(reinterpret_cast<AsdCamera *>(&g_localCamera), 1);
    cameraMatrixCacheSetLookAt(&g_localCamera,
                 &g_lmapViewHolder.view->eye,
                 &g_lmapViewHolder.view->target,
                 &g_lmapViewHolder.view->up);
    stereoCameraSetPerspective(&g_localCamera, 1, 36.0f, 10.0f, 2560000.0f,
                 1.66666662693023681640625f);
    FUN_0036b824(reinterpret_cast<u32>(&g_localCamera));

    view = g_lmapViewHolder.view;
    view->modelManager->camera = &g_localCamera;
    view->parameterA0 = 500.0f;
    view->parameterA4 = 0.0f;
    view->enabled = 1;
    view->state = 0;
}
