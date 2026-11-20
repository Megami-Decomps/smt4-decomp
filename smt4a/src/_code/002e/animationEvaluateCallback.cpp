/* NON_MATCHING: the dirty-byte store is scheduled before the previous-value store (retail stores previous, then sets dirty). */
#include "shard/Shard0034.h"

/* Evaluate the first scalar channel, clamping time at its endpoint. */
extern "C" void animationEvaluateCallback(ScalarAnimationOwner *owner, f32 time)
{
    if (owner->count <= 0) {
        return;
    }
    ScalarAnimationChannel *channel = owner->channel;
    if (channel != NULL) {
        f32 end = scalarAnimationEnd(channel);
        if (time > end) {
            time = end;
        }
        f32 value = channel->interpolate(channel->range, time, channel->work);
        channel->previous = channel->current;
        channel->current = value;
        channel->dirty = 1;
    }
}
