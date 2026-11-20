/* NON_MATCHING: completion-condition lowering and frame/register allocation differ; -O2 candidate. */
#include "shard/W6_W6Match6_ActionController.h"

extern "C" {
s32 state2CIs4(void *);
f32 animationGetFurthestFrame(void *);
void actionSequenceTriggerRangeAnimation(ActionController *, s16, s32);
void FUN_0023c700(ActionController *, s32, s32, s32, s32, s32, f32, f32);
void animationSelectThirdPart(void *);
void actionSequenceDispatchTriggers(ActionController *);
void btlQueueKeyedScalarReflectAction(s32, s32, u32, s32, s32, s32, s32);

// Track animation loops and enter the next action phase when playback finishes.
void actionSequenceUpdateLoopTransition(ActionController *controller)
{
    if (state2CIs4(controller->animation)) {
        s16 frame = (s32)animationGetFurthestFrame(controller->animation);
        s16 previousFrame = controller->previousFrame;
        if (previousFrame > frame) {
            controller->loopLength = previousFrame;
            controller->previousFrame = 0;
            ++controller->loops;
        }
        ActionSequence *sequence = controller->sequence;
        s16 totalFrame = (s16)controller->loopLength * controller->loops + frame;
        bool completed = true;
        if (sequence->flags & 1)
            completed = false;
        if (!completed && controller->tracks[3].unk00 <= totalFrame && !(controller->flags & 0x2000)) {
            controller->flags |= 0x2000;
            completed = !(sequence->flags & 1);
        }
        if (completed && controller->loops)
            controller->flags |= 0x1000;
        ActionTrack *track = (sequence->flags & 1) ? &controller->tracks[1] : &controller->tracks[2];
        if (track->startFrame == totalFrame) {
            FUN_0023c700(controller, controller->actor->id, controller->actor->id, 7, 0, 3,
                         (f32)sequence->startX, (f32)sequence->startY);
        }
        actionSequenceTriggerRangeAnimation(controller, totalFrame, 2);
        controller->previousFrame = (s32)animationGetFurthestFrame(controller->animation);
    }
    if (!state2CIs4(controller->animation) || (controller->flags & 0x1000)) {
        animationSelectThirdPart(controller->animation);
        controller->state = 12;
        actionSequenceDispatchTriggers(controller);
        s16 kind = controller->sequence->kind;
        if (kind == 15 || kind == 16) {
            btlQueueKeyedScalarReflectAction(0, 0, 0x1000107, 0, 0, 0, 0);
            return;
        }
        btlQueueKeyedScalarReflectAction(0, 0, 0x1000109, 0, 0, 0, 0);
    }
}
}
