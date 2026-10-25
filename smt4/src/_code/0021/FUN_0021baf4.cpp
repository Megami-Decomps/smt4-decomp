/* NON_MATCHING: fixed-camera vector setup, constant scheduling, and the final helper epilogue differ. */
/* Configures the fixed map camera's look-at vectors, projection, and transition state. */
#include "map/MapCameraWork.h"
#include "script/scrScriptProcess.h"

struct FixedCamera;
extern "C" {
extern MapCameraGlobals DAT_004474f0;
extern FixedCamera g_fixedCamera;
void FUN_002c2044(FixedCamera *camera, u32 enabled);
void FUN_002c1edc(FixedCamera *camera, const MapVector *eye,
    const MapVector *target, const MapVector *up);
void FUN_002c1e30(FixedCamera *camera, u32 enabled, f32 fieldOfView,
    f32 nearDistance, f32 farDistance, f32 aspectRatio);
}

static inline void setCameraVector(MapVector &vector, f32 x, f32 y, f32 z)
{
    vector.x = x;
    vector.y = y;
    vector.z = z;
}

extern "C" void FUN_0021baf4(void)
{
    setCameraVector(DAT_004474f0.work->up, 0.0f, 1.0f, 0.0f);
    setCameraVector(DAT_004474f0.work->targetPosition, 0.0f, 0.0f, 0.0f);
    setCameraVector(DAT_004474f0.work->eye, 0.0f, 300.0f, 300.0f);
    MapCameraWork *work = DAT_004474f0.work;
    work->targetSnapshot = work->targetPosition;
    work->eyeSnapshot = work->eye;
    FUN_002c2044(&g_fixedCamera, 1);
    FUN_002c1edc(&g_fixedCamera, &DAT_004474f0.work->eye,
        &DAT_004474f0.work->targetPosition, &DAT_004474f0.work->up);
    FUN_002c1e30(&g_fixedCamera, 1, 36.0f, 10.0f, 2560000.0f, 1.6666666f);
    FUN_00298d50(reinterpret_cast<u32>(&g_fixedCamera));
    work = DAT_004474f0.work;
    work->clipDistance = 500.0f;
    work->timer = 0.0f;
    work->configured = 1;
    work->counter = 0;
}
