#include "battle/btlCamera.h"

static __inline void copyVector(BtlCameraVector3 *destination, const BtlCameraVector3 *source)
{
    *destination = *source;
}

extern "C" {
f32 FUN_003d4dd4(s32 mode, s32 duration, s32 frame);

/* Interpolates the position for this frame, then snaps to the endpoint on completion. */
void FUN_004f1edc(BtlCameraA *work)
{
    BtlCameraVector3 delta;
    delta.x = work->span.to.x - work->span.from.x;
    delta.y = work->span.to.y - work->span.from.y;
    delta.z = work->span.to.z - work->span.from.z;
    f32 factor = FUN_003d4dd4(0, static_cast<s32>(work->settleMode), static_cast<s32>(work->settleState));
    work->position.x = work->span.from.x + delta.x * factor;
    work->position.y = work->span.from.y + delta.y * factor;
    work->position.z = work->span.from.z + delta.z * factor;
    ++work->settleState;
    if (static_cast<s32>(work->settleState) > static_cast<s32>(work->settleMode)) {
        copyVector(&work->position, &work->span.to);
        work->flags &= ~0x80000u;
    }
}
}
