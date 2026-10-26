#include "gfx/RangeAnimationSelection.h"
#include "shard/W6_W6Match2_AnimationVisualState.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/BtlMainAccess.h"

extern "C" {
u8 animationVisualIsComplete(const AnimationVisualState *visual);
f32 animationGetModeChannelValue(AnimationVisualState *visual);
void FUN_004f5238(RangeAnimationOwner *work, s32 first, s32 second, s32 kind,
                  s32 mode, s32 channel, s32 option, s32 enabled, s32 last,
                  f32 start, f32 end);
u32 btlReflectQueuePairedParameters(s32 actor, u32 flags, u32 value, u32 parameter,
                                    BattleRosterRecordA *target, u32 first,
                                    u32 second, u32 third, u32 fourth);
void btlReflectSetValuePair(s32 actor, u32 flags, s32 value, s32 first, s32 second);
void FUN_004f6254(RangeAnimationOwner *work, s16 frame, s32 mode);

void FUN_004fa414(RangeAnimationOwner *work)
{
    // These last two range pairs extend beyond the published preset prefix.
    struct EventFrame {
        s16 argument, frame, value;
    };
    struct EventFrames {
        EventFrame first, second;
        s16 pairFrame, pairValue;
    };
    struct EventParametersView {
        u8 prefix00[8];
        u8 flags;
        u8 padding09[3];
        EventFrames frames;
        u8 padding1C[0x6C];
        s16 firstRangeStart, firstRangeEnd;
        u8 padding8C[4];
        s16 secondRangeStart, secondRangeEnd;
    };
    typedef char EventParametersOffsetsCheck[
        offsetof(EventParametersView, flags) == 8 &&
        offsetof(EventParametersView, frames) == 0xC &&
        offsetof(EventParametersView, firstRangeStart) == 0x88 &&
        offsetof(EventParametersView, secondRangeStart) == 0x90 &&
        sizeof(EventParametersView) == 0x94 ? 1 : -1];

    if (!animationVisualIsComplete(work->animation.events.visual)) {
        s32 frame = (s32)animationGetModeChannelValue(work->animation.events.visual);
        if (work->animation.events.timings[2] == frame)
            FUN_004fea10(0, 0, work->animation.events.timings[3]);
        EventParametersView *parameters = (EventParametersView *)work->animation.presets;
        const s16 *timings = parameters->flags & 1 ?
            work->animation.events.timings + 4 : work->animation.events.timings + 8;
        if (timings[2] == frame) {
            FUN_004f5238(work, work->animation.events.roster->combatant.parameterIndex,
                         work->animation.events.roster->combatant.parameterIndex, 6, 1, 3, 0, 1, 0,
                         (f32)parameters->firstRangeStart, (f32)parameters->firstRangeEnd);
        }
        if (timings[3] == frame) {
            FUN_004f5238(work, work->animation.events.roster->combatant.parameterIndex,
                         work->animation.events.roster->combatant.parameterIndex, 6, 2, 3, 0, 1, 0,
                         (f32)((EventParametersView *)work->animation.presets)->secondRangeStart,
                         (f32)((EventParametersView *)work->animation.presets)->secondRangeEnd);
        }
        parameters = (EventParametersView *)work->animation.presets;
        EventFrames *frames = &parameters->frames;
        if (frames->first.frame == frame)
            btlReflectQueuePairedParameters(0, 0, frames->first.value, 10,
                work->animation.events.roster, frames->first.argument, 0, 0, ~0u);
        if (frames->second.frame == frame)
            btlReflectQueuePairedParameters(0, 0, frames->second.value, 9,
                work->animation.events.roster, frames->second.argument, 0, 0, ~0u);
        if (frames->pairFrame == frame)
            btlReflectSetValuePair(0, 0, frames->pairValue, 0, 0);
        FUN_004f6254(work, (s16)frame, 3);
    }
    if (animationVisualIsComplete(work->animation.events.visual))
        work->animation.events.state = 13;
}
}
