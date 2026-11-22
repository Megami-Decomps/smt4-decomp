/* NON_MATCHING: 18 lines. Retail loads the perspective's far clip before its near clip (and pools 0.1 after
 * 25600), and stores the two -1 sentinels and `state` one slot later than this build schedules them
 * (`str r0, [r4, #40]!`); the rest is retail's. */
#include "common.h"
#include "battle/btlCamera.h"
#include "status/StatusCamera.h"
#include "gfx/CameraPerspective.h"
#include "script/scrScriptProcess.h"

extern "C" {

void cameraPoseApplyPreset(BtlCamera *camera, u32 preset, s32 destination);
void cameraMatrixCacheReset(AsdCamera *camera, s32 enabled);
void cameraMatrixCacheSetLookAt(AsdCamera *camera, const Vec3 *eye, const Vec3 *target, const Vec3 *up);
void stereoCameraSetPerspective(AsdCamera *camera, u32 pivot, CameraPerspective perspective);
void asdCameraRegister(AsdCamera *camera);
u32 shakeEffectAlloc(void);
void eventCommandSetPendingCleanup(u32 value);

/* Clears a camera vector (z first, as the battle vector clears do). */
static __inline void btlCameraVectorClear(BtlCameraVector3 *vector)
{
    vector->x = vector->y = vector->z = 0.0f;
}

/* Resets the battle camera to its idle pose, aims its view along the pose and registers it with the camera
   manager, then clears every channel. */
void eventCameraInitialize(BtlCamera *camera)
{
    cameraPoseApplyPreset(camera, 0, 0);
    camera->altEyeRise = 0.0f;
    camera->altFovShift = 0.0f;
    camera->unk7D0 = 0.0f;
    camera->altRoll = 0.0f;
    btlCameraVectorClear(&camera->altEyeShift);
    btlCameraVectorClear(&camera->altLookShift);
    camera->altEyeRiseFrame = 0;
    camera->altFovShiftFrame = 0;
    camera->altRollFrame = 0;
    camera->altEyeShiftFrame = 0;
    camera->altLookShiftFrame = 0;

    Vec3 up;
    up.x = 0.0f;
    up.y = 1.0f;
    up.z = 0.0f;
    Vec3 target = *(const Vec3 *)&camera->offset;
    Vec3 offset;
    vec3Scale(&offset, (const Vec3 *)&camera->direction, camera->distance);
    vec3Add(&target, &target, &offset);
    camera->roll = 0.0f;
    camera->debugScalar = 5.0f;
    camera->debugScalarWide = 0.8f;
    cameraMatrixCacheReset(btlCameraView(camera), 1);
    cameraMatrixCacheSetLookAt(btlCameraView(camera), (const Vec3 *)&camera->offset, &target, &up);
    CameraPerspective perspective;
    perspective.fovy = camera->fov;
    perspective.nearZ = 0.1f;
    perspective.farZ = 25600.0f;
    perspective.aspect = 1.6666666f;
    stereoCameraSetPerspective(btlCameraView(camera), 1, perspective);
    FUN_00298d50((u32)btlCameraView(camera));
    asdCameraRegister(btlCameraView(camera));

    btlCameraVectorClear(&camera->jitter);
    btlCameraVectorClear(&camera->sway);
    btlCameraSetFlags(camera, 0x80);
    camera->eyeRise = 0.0f;
    camera->eyeDip = 0.0f;
    camera->fovShift = 0.0f;
    camera->unk6B8 = 0.0f;
    camera->roll = 0.0f;
    btlCameraVectorClear(&camera->position);
    btlCameraVectorClear(&camera->eyeSlide);
    btlCameraVectorClear(&camera->eyeShift);
    btlCameraVectorClear(&camera->lookShift);
    btlCameraVectorClear(&camera->movePoints[0]);
    btlCameraVectorClear(&camera->movePoints[1]);
    camera->editorValue = 0;
    btlCameraVectorClear(&camera->eyeOrigin);
    btlCameraVectorClear(&camera->lookOrigin);
    btlCameraVectorClear(&camera->unk770);
    btlCameraVectorClear(&camera->eyeLocal);
    btlCameraVectorClear(&camera->lookLocal);
    camera->eyeDipFrame = 0;
    camera->fovShiftFrame = 0;
    camera->rollFrame = 0;
    camera->eyeShiftFrame = 0;
    camera->lookShiftFrame = 0;
    camera->unk75C = -1;
    camera->moveFrame = 0;
    camera->unk760 = -1;
    camera->shakeEffect = shakeEffectAlloc();
    eventCommandSetPendingCleanup(camera->shakeEffect);
    camera->shake.words[0] = 0;
    camera->shake.words[1] = 0;
    camera->shake.words[2] = 0;
    camera->shake.words[3] = 0;
    camera->shake.words[4] = 0;
    camera->shakeExtra.words[0] = 0;
    camera->shakeExtra.words[1] = 0;
    camera->shakeExtra.words[2] = 0;
    camera->shakeExtra.words[3] = 0;
    camera->state = 1;
    camera->shakeExtra.words[4] = 0;
}

} /* extern "C" */
