/* NON_MATCHING: look-at arithmetic is fused; input VFP packing and the saved eye pointer differ. */
#include "status/StatusCamera.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"
#include "script/scrScriptProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern StatusCameraWork *g_statusCamera;
void asdGxSetViewport(s32, s32, s32, s32);
void cameraMatrixCacheReset(StatusCameraWork *, u32);
void cameraMatrixCacheSetLookAt(StatusCameraWork *, const Vec3 *, const Vec3 *, const Vec3 *);
void stereoCameraSetPerspective(StatusCameraWork *, u32, f32, f32, f32, f32);
void asdCameraRegister(StatusCameraWork *);
void FUN_002c159c(StatusCameraWork *, f32, f32);

void statusCameraSetup(const Vec3 *eye, const Vec3 *direction, const Vec3 *reference,
                 f32 nearClip, f32 farClip, f32 fieldOfView, f32 distance, f32 scale)
{
    if (!g_statusCamera) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\status\\StatusCamera.cpp", 109);
        g_statusCamera = static_cast<StatusCameraWork *>(
            asdMemAlloc(0x100, 0x100, 0, sizeof(StatusCameraWork), 1));
    }
    StatusCameraWork *work = g_statusCamera;
    memClear(work, sizeof(*work));
    work->lens.fov = fieldOfView;
    work->lens.nearClip = nearClip;
    work->lens.farClip = farClip;
    work->dir = *direction;
    work->eye = *eye;
    work->unk520 = *reference;
    work->dist = distance;
    Vec3 up;
    up.z = up.x = 0.0f;
    up.y = 1.0f;
    Vec3 target = work->eye;
    target.x += work->dir.x * work->dist;
    target.y += work->dir.y * work->dist;
    target.z += work->dir.z * work->dist;
    asdGxSetViewport(200, 0, 200, 240);
    cameraMatrixCacheReset(work, 1);
    cameraMatrixCacheSetLookAt(work, &work->eye, &target, &up);
    stereoCameraSetPerspective(work, 1, work->lens.fov, work->lens.nearClip, work->lens.farClip, 1.6666666f);
    FUN_00298d50(reinterpret_cast<u32>(work));
    asdCameraRegister(work);
    FUN_002c159c(work, scale, 1.0f);
}
}
