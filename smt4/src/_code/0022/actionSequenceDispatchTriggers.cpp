#include "shard/W6_W6Match6_ActionController.h"

extern "C" {
s32 FUN_0034c944(void *animation);
f32 FUN_00226bc0(void *animation);
void actionCreateKindFive(s32, s32, s32);
void FUN_0023c700(ActionController *, s32, s32, s32, s32, s32, f32, f32);
u32 FUN_0023f27c(s32, u32, u32, u32, void *, s32, s32, s32, s32);
void btlReflectSetValuePair(s32, s32, s32, s32, s32);
void FUN_00226a90(ActionController *, s16, s32);

// Dispatch sequence actions when the animation reaches their trigger frames.
void actionSequenceDispatchTriggers(ActionController *controller)
{
    if (!FUN_0034c944(controller->animation)) {
        s32 frame = (s32)FUN_00226bc0(controller->animation);
        if (controller->tracks[0].trigger == frame)
            actionCreateKindFive(0, 0, controller->tracks[0].value);
        ActionSequence *sequence = controller->sequence;
        ActionTrack *track = (sequence->flags & 1) ? &controller->tracks[1] : &controller->tracks[2];
        if (track->trigger == frame) {
            FUN_0023c700(controller, controller->actor->id, controller->actor->id, 7, 1, 3,
                         (f32)sequence->firstX, (f32)sequence->firstY);
        }
        if (track->value == frame) {
            FUN_0023c700(controller, controller->actor->id, controller->actor->id, 7, 2, 3,
                         (f32)controller->sequence->secondX, (f32)controller->sequence->secondY);
        }
        ActionEvents *events = &controller->sequence->events;
        if (events->entries[0].frame == frame)
            FUN_0023f27c(0, 0, events->entries[0].action, 10, controller->actor, events->entries[0].argument, 0, 0, -1);
        if (events->entries[1].frame == frame)
            FUN_0023f27c(0, 0, events->entries[1].action, 9, controller->actor, events->entries[1].argument, 0, 0, -1);
        if (events->extraFrame == frame)
            btlReflectSetValuePair(0, 0, events->extraAction, 0, 0);
        FUN_00226a90(controller, (s16)frame, 3);
    }
    if (FUN_0034c944(controller->animation))
        controller->state = 13;
}
}
