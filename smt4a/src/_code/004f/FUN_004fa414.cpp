/* NON_MATCHING: range-call argument scheduling and queued-event subobject base addressing differ from retail. */
#include "gfx/RangeAnimationSelection.h"
#include "shard/W6_W6Match2_AnimationVisualState.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
u8 animationVisualIsComplete(const AnimationVisualState *visual);
f32 animationGetModeChannelValue(AnimationVisualState *visual);
void FUN_004fea10(s32 actor, u32 flags, s32 value);
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
    struct EventParametersView {
        u8 prefix00[8];
        u8 flags;
        u8 padding09[3];
        s16 firstArgument, firstFrame, firstValue;
        s16 secondArgument, secondFrame, secondValue;
        s16 pairFrame, pairValue;
        u8 padding1C[0x6C];
        s16 firstRangeStart, firstRangeEnd;
        u8 padding8C[4];
        s16 secondRangeStart, secondRangeEnd;
    };
    typedef char EventParametersOffsetsCheck[
        offsetof(EventParametersView, flags) == 8 &&
        offsetof(EventParametersView, firstArgument) == 0xC &&
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
            s32 index = work->animation.events.roster->combatant.parameterIndex;
            FUN_004f5238(work, index, index, 6, 1, 3, 0, 1, 0,
                         (f32)parameters->firstRangeStart, (f32)parameters->firstRangeEnd);
        }
        if (timings[3] == frame) {
            parameters = (EventParametersView *)work->animation.presets;
            s32 index = work->animation.events.roster->combatant.parameterIndex;
            FUN_004f5238(work, index, index, 6, 2, 3, 0, 1, 0,
                         (f32)parameters->secondRangeStart, (f32)parameters->secondRangeEnd);
        }
        parameters = (EventParametersView *)work->animation.presets;
        if (parameters->firstFrame == frame)
            btlReflectQueuePairedParameters(0, 0, parameters->firstValue, 10,
                work->animation.events.roster, parameters->firstArgument, 0, 0, ~0u);
        if (parameters->secondFrame == frame)
            btlReflectQueuePairedParameters(0, 0, parameters->secondValue, 9,
                work->animation.events.roster, parameters->secondArgument, 0, 0, ~0u);
        if (parameters->pairFrame == frame)
            btlReflectSetValuePair(0, 0, parameters->pairValue, 0, 0);
        FUN_004f6254(work, (s16)frame, 3);
    }
    if (animationVisualIsComplete(work->animation.events.visual))
        work->animation.events.state = 13;
}
}
