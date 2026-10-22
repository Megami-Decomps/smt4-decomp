/* NON_MATCHING: channel lookup allocates r1/r2 oppositely, folds the nullable endpoint query, and schedules the scalar callback/stores differently. */
#include "shard/Shard0034.h"

/* Evaluate the selected model's first scalar animation channel. */
extern "C" void FUN_002101cc(ModelPropertyController *controller, f32 time)
{
    if (controller->count <= 0) {
        return;
    }
    ScalarAnimationChannel *channel = modelPropertyScalarChannel(controller->node, 0);
    if (channel != NULL) {
        f32 end = scalarAnimationEnd(channel);
        if (time > end) {
            time = end;
        }
        f32 value = channel->interpolate(channel->start, channel->end, time, channel->work);
        channel->previous = channel->current;
        channel->current = value;
        channel->dirty = 1;
    }
}
