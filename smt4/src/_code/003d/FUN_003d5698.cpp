/* NON_MATCHING: adjacent snapshot globals are separately addressed, with different vector register/store grouping. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"

extern "C" {
extern f32 DAT_00493518;
extern f32 DAT_00493524;
extern BattleVector3 DAT_00493530;
extern BattleVector3 DAT_0049353c;
f32 FUN_00227280(s32 mode, s32 duration, u32 frame);
void FUN_003d7298(BattleVectorTransition *, u32);

/* Evaluate the shared-frame scalar and vector channels, then the extended channels. */
void FUN_003d5698(BattleVectorTransition *owner, u32 frame)
{
    struct BlendChannels {
        u8 unk000[0x5A4];
        f32 primary;
        u8 unk5A8[0x34];
        f32 angleTarget;
        u8 unk5E0[8];
        f32 primaryTarget;
        f32 secondaryTarget;
        BattleVector3 origin;
        u8 unk5FC[0x24];
        f32 angleStart;
        u8 unk624[8];
        f32 primaryStart;
        f32 secondaryStart;
        u32 flags;
        u8 unk638[0x20];
        f32 scale;
        u8 unk65C[0x24];
        s32 duration;
        u8 unk684[0x14];
        f32 angle;
        u8 unk69C[0xC];
        f32 secondary;
    };
    union BlendView {
        BattleVectorTransition vectors;
        BlendChannels channels;
    };
    typedef char BlendChannelOffsets[
        offsetof(BlendChannels, primaryTarget) == 0x5E8 &&
        offsetof(BlendChannels, primaryStart) == 0x62C &&
        offsetof(BlendChannels, scale) == 0x658 &&
        offsetof(BlendChannels, duration) == 0x680 &&
        offsetof(BlendChannels, secondary) == 0x6A8 ? 1 : -1];
    BlendView *work = (BlendView *)owner;
    if (work->vectors.flags & 0x100000)
        return;
    f32 factor = FUN_00227280(0, work->channels.duration, frame);
    work->channels.scale = DAT_00493518 + (DAT_00493524 - DAT_00493518) * factor;
    BattleVector3 delta = {
        work->vectors.destination.x - work->channels.origin.x,
        work->vectors.destination.y - work->channels.origin.y,
        work->vectors.destination.z - work->channels.origin.z
    };
    work->vectors.elapsed.x = work->channels.origin.x + delta.x * factor;
    work->vectors.elapsed.y = work->channels.origin.y + delta.y * factor;
    work->vectors.elapsed.z = work->channels.origin.z + delta.z * factor;
    BattleVector3 currentDelta = {
        DAT_0049353c.x - DAT_00493530.x,
        DAT_0049353c.y - DAT_00493530.y,
        DAT_0049353c.z - DAT_00493530.z
    };
    work->vectors.current.x = DAT_00493530.x + currentDelta.x * factor;
    work->vectors.current.y = DAT_00493530.y + currentDelta.y * factor;
    work->vectors.current.z = DAT_00493530.z + currentDelta.z * factor;

    f32 primaryDelta = work->channels.primaryTarget - work->channels.primaryStart;
    factor = FUN_00227280(0, work->channels.duration, frame);
    work->channels.primary = work->channels.primaryStart + primaryDelta * factor;
    f32 secondaryDelta = work->channels.secondaryTarget - work->channels.secondaryStart;
    factor = FUN_00227280(0, work->channels.duration, frame);
    work->channels.secondary = work->channels.secondaryStart + secondaryDelta * factor;
    f32 angleDelta = work->channels.angleTarget - work->channels.angleStart;
    factor = FUN_00227280(0, work->channels.duration, frame);
    work->channels.angle = work->channels.angleStart + angleDelta * factor;
    FUN_00227280(0, work->channels.duration, frame);
    FUN_003d7298(owner, frame);
}
}
