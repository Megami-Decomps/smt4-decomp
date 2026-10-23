/* NON_MATCHING: vector copies use VFP registers instead of retail's integer LDM/STM blocks, changing saved registers and scalar-address scheduling. */
#include "battle/btlCamera.h"
#include <stddef.h>

namespace {
struct CameraResetGlobals { u8 unk00[0x2C]; f32 current, delta; };
struct CameraResetVectors {
    BtlCameraVector3 primaryStart, primaryDelta;
    BtlCameraVector3 alternateStart, alternateDelta;
};
static inline void clearCameraVector(BtlCameraVector3 &value)
{
    value.z = 0.0f;
    value.y = 0.0f;
    value.x = 0.0f;
}
}
extern "C" {
extern CameraResetGlobals g_btlCamera;
extern CameraResetVectors DAT_005e1518;

// Restart scalar/vector interpolation from current camera values unless transitions are locked.
void FUN_004f41b0(BtlCameraA *camera, u32 unused, u32 duration)
{
    // Several required fields cross the canonical camera's unaligned padding spans.
    struct ScalarHistory { f32 current, previous, delta; };
    struct ScalarTrack { ScalarHistory value; u32 duration, frame, mode; };
    struct VectorTrack {
        BtlCameraVector3 current, previous, delta;
        u32 duration, frame, mode;
    };
    struct ResetView {
        u8 unk000[0x5BC];
        u32 source;
        u8 unk5C0[4];
        BtlCameraVector3 targetDelta;
        u8 unk5D0[0x24];
        f32 scalarDelta;
        u8 unk5F8[8];
        f32 distanceDelta, angleDelta;
        BtlCameraVector3 targetStart;
        u8 unk614[0x24];
        f32 savedDistance;
        u8 unk63C[8];
        u32 savedSource, savedMode, flags;
        u8 unk650[0x74];
        BtlCameraVector3 currentTarget;
        u8 unk6D0[0xC];
        f32 currentScalar;
        u8 unk6E0[0xC];
        u32 duration, active;
        u8 unk6F4[0x10];
        f32 currentDistance;
        u8 unk708[0xC];
        u32 currentMode;
        u8 unk718[0xC];
        f32 distanceProgress;
        u8 unk728[0x10];
        BtlCameraVector3 targetProgress;
        u8 unk744[0xC];
        BtlCameraVector3 alternateProgress;
        u8 unk75C[0xA4];
        ScalarTrack primary;
        ScalarTrack angle;
        ScalarHistory fieldOfView;
        ScalarTrack secondary;
        VectorTrack position;
        VectorTrack alternatePosition;
    };
    typedef char ResetViewOffsets[offsetof(ResetView, flags) == 0x64C &&
        offsetof(ResetView, currentTarget) == 0x6C4 &&
        offsetof(ResetView, duration) == 0x6EC &&
        offsetof(ResetView, primary) == 0x800 &&
        offsetof(ResetView, position) == 0x854 &&
        offsetof(ResetView, alternatePosition) == 0x884 && sizeof(ResetView) == sizeof(BtlCameraA) ? 1 : -1];
    ResetView *work = reinterpret_cast<ResetView *>(camera);
    work->flags &= ~0x200000u;
    if ((work->flags & 0x100000) == 0) {
        work->distanceProgress = 0.0f;
        work->primary.value.previous = work->primary.value.current;
        work->angle.value.previous = work->angle.value.current;
        work->secondary.value.previous = work->secondary.value.current;
        work->fieldOfView.previous = work->fieldOfView.current;
        work->position.previous = work->position.current;
        work->alternatePosition.previous = work->alternatePosition.current;
        work->primary.value.delta = 0.0f;
        work->angle.value.delta = 0.0f;
        work->secondary.value.delta = 0.0f;
        work->fieldOfView.delta = 0.0f;
        clearCameraVector(work->position.delta);
        clearCameraVector(work->alternatePosition.delta);
        work->primary.frame = 0;
        work->angle.frame = 0;
        work->secondary.frame = 0;
        work->position.frame = 0;
        work->alternatePosition.frame = 0;
        work->savedDistance = work->currentDistance;
        g_btlCamera.current = work->currentScalar;
        work->savedMode = work->currentMode;
        work->savedSource = work->source;
        work->targetStart = work->targetProgress;
        DAT_005e1518.primaryStart = work->currentTarget;
        DAT_005e1518.alternateStart = work->alternateProgress;
        work->scalarDelta = 0.0f;
        g_btlCamera.delta = 0.0f;
        work->angleDelta = 0.0f;
        work->distanceDelta = 0.0f;
        clearCameraVector(work->targetDelta);
        clearCameraVector(DAT_005e1518.primaryDelta);
        clearCameraVector(DAT_005e1518.alternateDelta);
        work->active = 1;
        work->duration = duration;
        work->flags |= 0x10;
    }
}
}
