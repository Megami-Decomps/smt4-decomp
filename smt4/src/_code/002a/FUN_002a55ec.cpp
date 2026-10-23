/* NON_MATCHING: initial channel lookup/call registers and the final dirty-byte store scheduling differ. */
#include "shard/Shard0034.h"
#include <stddef.h>

extern "C" void FUN_002a55ec(ModelPropertyController *controller, s32 index, f32 time)
{
    struct AnimationSelectionFields {
        u8 prefix[0x64];
        const void **clips;
        u8 reserved[4];
        s32 selected;
    };
    struct ChannelMethods {
        u8 prefix[0x24];
        void (*selectClip)(ScalarAnimationChannel *, const void *);
    };
    typedef char SelectionFieldOffsets[
        offsetof(AnimationSelectionFields, clips) == 0x64 &&
        offsetof(AnimationSelectionFields, selected) == 0x6C ? 1 : -1];

    controller->value = 1.0f;
    if (index < 0 || controller->count <= 0 || index >= controller->count)
        return;
    ScalarAnimationChannel *channel = modelPropertyScalarChannel(controller->node, 0);
    if (channel == NULL)
        return;

    /* Keep padding fields and the virtual slot in local views of the shared channel types. */
    AnimationSelectionFields *selection = reinterpret_cast<AnimationSelectionFields *>(controller);
    const ChannelMethods *methods = *reinterpret_cast<const ChannelMethods *const *>(channel);
    methods->selectClip(channel, selection->clips[index]);
    selection->selected = index;
    if (time != 0.0f) {
        f32 end = controller->count > 0
            ? scalarAnimationEnd(modelPropertyScalarChannel(controller->node, 0)) : 0.0f;
        if (time > end)
            time = end;
        f32 value = channel->interpolate(channel->start, channel->end, time, channel->work);
        f32 previous = channel->current;
        channel->current = value;
        channel->previous = previous;
        channel->dirty = 1;
    }
}
