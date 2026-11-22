#include "shard/W6_W6Match6_ActionController.h"

extern "C" {
bool FUN_0034c9a0(void *animation);
f32 animationGetFurthestFrame(void *animation);
void btlReflectCreateTint(s32 a, s32 b, s32 frame, f32 red, f32 green, f32 blue);
void actionSequenceTriggerRangeAnimation(ActionController *controller, s16 frame, s32 phase);
void animationSelectSecondPart(void *animation);
void actionSequenceUpdateLoopTransition(ActionController *controller);

// Play the first action phase: flash the sequence's color on its start frame, then move on to the
// loop phase once the animation part finishes.
void FUN_00226fc0(ActionController *controller)
{
    if (!FUN_0034c9a0(controller->animation)) {
        s32 frame = (s32)animationGetFurthestFrame(controller->animation);
        if (controller->tracks[0].unk00 == frame) {
            btlReflectCreateTint(0, 0, controller->tracks[0].startFrame, controller->sequence->color[0] * 0.01f,
                         controller->sequence->color[1] * 0.01f, controller->sequence->color[2] * 0.01f);
        }
        actionSequenceTriggerRangeAnimation(controller, frame, 1);
    }
    if (FUN_0034c9a0(controller->animation)) {
        animationSelectSecondPart(controller->animation);
        controller->state = 10;
        actionSequenceUpdateLoopTransition(controller);
    }
}
}
