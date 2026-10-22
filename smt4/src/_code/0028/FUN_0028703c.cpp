/* NON_MATCHING: scalar callback arguments use an extra VFP temporary, and the dirty-byte store is scheduled before the previous-value store. */
#include "shard/Shard0034.h"

/* Evaluate the first scalar channel, clamping time at its endpoint. */
extern "C" void FUN_0028703c(ScalarAnimationOwner *owner, f32 time)
{
    if (owner->count <= 0) {
        return;
    }
    ScalarAnimationChannel *channel = owner->channel;
    if (channel != NULL) {
        if (time > channel->end) {
            time = channel->end;
        }
        f32 value = channel->interpolate(channel->start, channel->end, time, channel->work);
        channel->previous = channel->current;
        channel->current = value;
        channel->dirty = 1;
    }
}
