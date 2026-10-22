/* NON_MATCHING: the three color channel conversions land in different VFP/core registers (retail converts blue into s2 first). */
#include "shard/W6_W6Match6_ActionController.h"

extern "C" {
bool FUN_0034c9a0(void *animation);
f32 FUN_00226bc0(void *animation);
void FUN_003ddb50(s32 a, s32 b, s16 frame, f32 red, f32 green, f32 blue);
void FUN_00226a90(ActionController *controller, s16 frame, s32 phase);
void animationSelectSecondPart(void *animation);
void actionSequenceUpdateLoopTransition(ActionController *controller);

// Play the first action phase: flash the sequence's color on its start frame, then move on to the
// loop phase once the animation part finishes.
void FUN_00226fc0(ActionController *controller)
{
    if (!FUN_0034c9a0(controller->animation)) {
        s32 frame = (s32)FUN_00226bc0(controller->animation);
        if (controller->tracks[0].unk00 == frame) {
            ActionSequence *sequence = controller->sequence;
            FUN_003ddb50(0, 0, controller->tracks[0].startFrame, sequence->color[0] * 0.01f,
                         sequence->color[1] * 0.01f, sequence->color[2] * 0.01f);
        }
        FUN_00226a90(controller, frame, 1);
    }
    if (FUN_0034c9a0(controller->animation)) {
        animationSelectSecondPart(controller->animation);
        controller->state = 10;
        actionSequenceUpdateLoopTransition(controller);
    }
}
}
