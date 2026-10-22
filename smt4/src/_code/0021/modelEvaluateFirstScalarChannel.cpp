/* NON_MATCHING: ARMCC eliminates the inlined endpoint's redundant null guard and reorders paired scalar loads/stores. */
#include "shard/Shard0034.h"

/* Evaluate the first scalar channel, clamping time to the channel's endpoint. */
extern "C" void modelEvaluateFirstScalarChannel(LegacyModelPropertyController *controller, f32 time)
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
        f32 previous = channel->current;
        channel->current = value;
        channel->previous = previous;
        channel->dirty = 1;
    }
}
