/* NON_MATCHING: the interpolation callback takes its start/end as one by-value ScalarRange pair (vldmia) and the nullable endpoint guard now matches; remaining: the channel lookup chain uses writeback loads and the dirty/previous stores are scheduled differently. */
#include "shard/Shard0034.h"

/* Evaluate the selected model's first scalar animation channel. */
extern "C" void FUN_002101cc(ModelPropertyController *controller, f32 time)
{
    if (controller->count <= 0) {
        return;
    }
    ScalarAnimationChannel *channel = modelPropertyScalarChannel(controller->node, 0);
    if (channel != NULL) {
        f32 end = scalarAnimationEnd(modelPropertyScalarChannel(controller->node, 0));
        if (time > end) {
            time = end;
        }
        f32 value = channel->interpolate(channel->range, time, channel->work);
        channel->previous = channel->current;
        channel->current = value;
        channel->dirty = 1;
    }
}
