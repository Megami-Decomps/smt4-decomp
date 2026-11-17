/* NON_MATCHING: the look-at vector setup now matches (plain static setCameraVector); only the aspect constant (s3) is loaded after `mov r1, #1` here, before it in retail. */
/* Configures the fixed map camera's look-at vectors, projection, and transition state. */
#include "script/scrScriptProcess.h"
#include "map/LmapViewGlobals.h"

struct FixedCamera;
extern "C" {
extern FixedCamera g_fixedCamera;
void FUN_002c2044(FixedCamera *camera, u32 enabled);
void FUN_002c1edc(FixedCamera *camera, const MapVector *eye,
    const MapVector *target, const MapVector *up);
void FUN_002c1e30(FixedCamera *camera, u32 enabled, f32 fieldOfView,
    f32 nearDistance, f32 farDistance, f32 aspectRatio);
}

/* The map camera's perspective: 36 degree field of view, clip planes at 10 and 2560000, 5:3 aspect. */
static __inline void fixedCameraSetDefaultPerspective(FixedCamera *camera, u32 enabled)
{
    FUN_002c1e30(camera, enabled, 36.0f, 10.0f, 2560000.0f, 1.6666666f);
}

static void setCameraVector(MapVector &vector, f32 x, f32 y, f32 z)
{
    vector.x = x;
    vector.y = y;
    vector.z = z;
}

extern "C" void FUN_0021baf4(void)
{
    setCameraVector(DAT_004474f0.view->up, 0.0f, 1.0f, 0.0f);
    setCameraVector(DAT_004474f0.view->target, 0.0f, 0.0f, 0.0f);
    setCameraVector(DAT_004474f0.view->eye, 0.0f, 300.0f, 300.0f);
    LmapView *work = DAT_004474f0.view;
    work->savedTarget = work->target;
    work->savedEye = work->eye;
    FUN_002c2044(&g_fixedCamera, 1);
    FUN_002c1edc(&g_fixedCamera, &DAT_004474f0.view->eye,
        &DAT_004474f0.view->target, &DAT_004474f0.view->up);
    fixedCameraSetDefaultPerspective(&g_fixedCamera, 1);
    FUN_00298d50(reinterpret_cast<u32>(&g_fixedCamera));
    work = DAT_004474f0.view;
    work->clipDistance = 500.0f;
    work->timer = 0.0f;
    work->enabled = 1;
    work->state = 0;
}
