/* NON_MATCHING: retail loads the range before the callback pointer and stores the previous value before setting the dirty byte. */
#include "shard/Shard0034.h"

/* Advances the scalar channel by its step, passing the new position through its interpolation callback. */
extern "C" void scalarAnimationAdvance(ScalarAnimationChannel *channel)
{
    if (channel->step != 0.0f) {
        f32 time = channel->current + channel->step;
        f32 position = channel->interpolate(channel->range, time, channel->work);
        channel->previous = channel->current;
        channel->current = position;
        channel->dirty = 1;
    }
}
