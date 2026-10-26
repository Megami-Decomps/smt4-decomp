/* NON_MATCHING: the channel lookup chain (table, index, stride, targets) and the nullable endpoint guard match; retail keeps the constant channel 0 in a register (mla r0,r0,r3,r2 with r2 = 0) where armcc folds it into a plain mul, and the callback load/vldmia and dirty/previous stores are scheduled differently. */
#include "shard/Shard0034.h"

/* Evaluate the first scalar channel, clamping time to the channel's endpoint. */
extern "C" void modelEvaluateFirstScalarChannel(LegacyModelPropertyController *controller, f32 time)
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
        f32 previous = channel->current;
        channel->current = value;
        channel->previous = previous;
        channel->dirty = 1;
    }
}
