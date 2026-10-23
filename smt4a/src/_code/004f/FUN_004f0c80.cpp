/* NON_MATCHING: adjacent snapshot globals are separately addressed, with different vector register/store grouping. */
#include "shard/W5_W5Match8_CameraTransition.h"

extern "C" {
extern f32 DAT_005e1518;
extern f32 DAT_005e1524;
extern W5Match8Vec3 g_cameraAlternateProgressStart;
extern W5Match8Vec3 g_cameraAlternateProgressPrevious;
f32 FUN_003d4dd4(s32 mode, s32 duration, u32 frame);
void FUN_004f2ae4(W5Match8CameraTransition *, u32);

/* Evaluate the common-frame camera channels, then the extended transition channels. */
void FUN_004f0c80(W5Match8CameraTransition *owner, u32 frame)
{
    struct BlendChannels {
        u8 unk000[0x5BC];
        f32 primary;
        u8 unk5C0[0x34];
        f32 angleTarget;
        u8 unk5F8[8];
        f32 primaryTarget;
        f32 secondaryTarget;
        W5Match8Vec3 origin;
        u8 unk614[0x24];
        f32 angleStart;
        u8 unk63C[8];
        f32 primaryStart;
        f32 secondaryStart;
        u32 flags;
        u8 unk650[0x74];
        f32 scale;
        u8 unk6C8[0x24];
        s32 duration;
        u8 unk6F0[0x14];
        f32 angle;
        u8 unk708[0xC];
        f32 secondary;
    };
    union BlendView {
        W5Match8CameraTransition camera;
        BlendChannels channels;
    };
    typedef char BlendChannelOffsets[
        offsetof(BlendChannels, primaryTarget) == 0x600 &&
        offsetof(BlendChannels, primaryStart) == 0x644 &&
        offsetof(BlendChannels, scale) == 0x6C4 &&
        offsetof(BlendChannels, duration) == 0x6EC &&
        offsetof(BlendChannels, secondary) == 0x714 ? 1 : -1];
    BlendView *work = (BlendView *)owner;
    if (work->camera.flags & 0x100000)
        return;
    f32 factor = FUN_003d4dd4(0, work->channels.duration, frame);
    work->channels.scale = DAT_005e1518 + (DAT_005e1524 - DAT_005e1518) * factor;
    W5Match8Vec3 delta = {
        work->camera.target.x - work->channels.origin.x,
        work->camera.target.y - work->channels.origin.y,
        work->camera.target.z - work->channels.origin.z
    };
    work->camera.targetProgress.x = work->channels.origin.x + delta.x * factor;
    work->camera.targetProgress.y = work->channels.origin.y + delta.y * factor;
    work->camera.targetProgress.z = work->channels.origin.z + delta.z * factor;
    W5Match8Vec3 currentDelta = {
        g_cameraAlternateProgressPrevious.x - g_cameraAlternateProgressStart.x,
        g_cameraAlternateProgressPrevious.y - g_cameraAlternateProgressStart.y,
        g_cameraAlternateProgressPrevious.z - g_cameraAlternateProgressStart.z
    };
    work->camera.alternateProgress.x = g_cameraAlternateProgressStart.x + currentDelta.x * factor;
    work->camera.alternateProgress.y = g_cameraAlternateProgressStart.y + currentDelta.y * factor;
    work->camera.alternateProgress.z = g_cameraAlternateProgressStart.z + currentDelta.z * factor;

    f32 primaryDelta = work->channels.primaryTarget - work->channels.primaryStart;
    factor = FUN_003d4dd4(0, work->channels.duration, frame);
    work->channels.primary = work->channels.primaryStart + primaryDelta * factor;
    f32 secondaryDelta = work->channels.secondaryTarget - work->channels.secondaryStart;
    factor = FUN_003d4dd4(0, work->channels.duration, frame);
    work->channels.secondary = work->channels.secondaryStart + secondaryDelta * factor;
    f32 angleDelta = work->channels.angleTarget - work->channels.angleStart;
    factor = FUN_003d4dd4(0, work->channels.duration, frame);
    work->channels.angle = work->channels.angleStart + angleDelta * factor;
    FUN_003d4dd4(0, work->channels.duration, frame);
    FUN_004f2ae4(owner, frame);
}
}
