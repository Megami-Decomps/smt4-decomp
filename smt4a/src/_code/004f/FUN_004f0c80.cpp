/* NON_MATCHING: 59 lines; second half (channels/angles) matches completely, remaining: retail anchors DAT_005e1518/DAT_005e1524 and g_cameraAlternateProgressStart/Previous as same-TU static globals. */
#include "shard/W5_W5Match8_CameraTransition.h"

/* Same helper as sibling FUN_004f1f78 (and called twice here). */
static __inline void vectorSubtract(W5Match8Vec3 *out, const W5Match8Vec3 *a, const W5Match8Vec3 *b)
{
    out->x = a->x - b->x;
    out->y = a->y - b->y;
    out->z = a->z - b->z;
}

extern "C" {
extern f32 DAT_005e1518;
extern f32 DAT_005e1524;
extern W5Match8Vec3 g_cameraAlternateProgressStart;
extern W5Match8Vec3 g_cameraAlternateProgressPrevious;
f32 easeEvaluate(u32 mode, s32 duration, u32 frame);
void FUN_004f2ae4(W5Match8CameraTransition *, u32);

/* Advances eased camera blend channels and target progress vectors for `frame`. */
void FUN_004f0c80(W5Match8CameraTransition *owner, u32 frame)
{
    struct BlendChannels {
        /* 0x000 */ u8 unk000[0x5BC];
        /* 0x5BC */ f32 primary;
        /* 0x5C0 */ u8 unk5C0[0x34];
        /* 0x5F4 */ f32 angleTarget;
        /* 0x5F8 */ u8 unk5F8[8];
        /* 0x600 */ f32 primaryTarget;
        /* 0x604 */ f32 secondaryTarget;
        /* 0x608 */ W5Match8Vec3 origin;
        /* 0x614 */ u8 unk614[0x24];
        /* 0x638 */ f32 angleStart;
        /* 0x63C */ u8 unk63C[8];
        /* 0x644 */ f32 primaryStart;
        /* 0x648 */ f32 secondaryStart;
        /* 0x64C */ u32 flags;
        /* 0x650 */ u8 unk650[0x74];
        /* 0x6C4 */ f32 scale;
        /* 0x6C8 */ u8 unk6C8[0x24];
        /* 0x6EC */ s32 duration;
        /* 0x6F0 */ u8 unk6F0[0x14];
        /* 0x704 */ f32 angle;
        /* 0x708 */ u8 unk708[0xC];
        /* 0x714 */ f32 secondary;
    };
    union BlendView {
        W5Match8CameraTransition camera;
        BlendChannels channels;
    };
    BlendView *work = (BlendView *)owner;
    if (work->camera.flags & 0x100000)
        return;
    f32 factor = easeEvaluate(0, work->channels.duration, frame);
    work->channels.scale = DAT_005e1518 + (DAT_005e1524 - DAT_005e1518) * factor;
    W5Match8Vec3 delta;
    vectorSubtract(&delta, &work->camera.target, &work->channels.origin);
    work->camera.targetProgress.x = work->channels.origin.x + delta.x * factor;
    work->camera.targetProgress.y = work->channels.origin.y + delta.y * factor;
    work->camera.targetProgress.z = work->channels.origin.z + delta.z * factor;
    W5Match8Vec3 currentDelta;
    vectorSubtract(&currentDelta, &g_cameraAlternateProgressPrevious, &g_cameraAlternateProgressStart);
    work->camera.alternateProgress.x = g_cameraAlternateProgressStart.x + currentDelta.x * factor;
    work->camera.alternateProgress.y = g_cameraAlternateProgressStart.y + currentDelta.y * factor;
    work->camera.alternateProgress.z = g_cameraAlternateProgressStart.z + currentDelta.z * factor;

    f32 primaryDelta = work->channels.primaryTarget - work->channels.primaryStart;
    factor = easeEvaluate(0, work->channels.duration, frame);
    work->channels.primary = work->channels.primaryStart + primaryDelta * factor;
    f32 secondaryDelta = work->channels.secondaryTarget - work->channels.secondaryStart;
    factor = easeEvaluate(0, work->channels.duration, frame);
    work->channels.secondary = work->channels.secondaryStart + secondaryDelta * factor;
    f32 angleDelta = work->channels.angleTarget - work->channels.angleStart;
    factor = easeEvaluate(0, work->channels.duration, frame);
    work->channels.angle = work->channels.angleStart + angleDelta * factor;
    easeEvaluate(0, work->channels.duration, frame);
    FUN_004f2ae4(owner, frame);
}

} /* extern "C" */
