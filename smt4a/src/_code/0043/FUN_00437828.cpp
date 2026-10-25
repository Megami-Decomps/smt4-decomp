/* NON_MATCHING: retail performs an additional list-end walk before selection; list/sentinel/selection register lifetimes differ. */
#include "gfx/MaskWork.h"
#include <new>
extern "C" {
void *FUN_004387f0(void *allocator, u32 units);
s32 FUN_00434d04(MaskWorkBody *body, void *allocator, u32 count, s32 clear);
void FUN_00436d04(MaskProcessor *processor, u8 *mask);
u32 FUN_0043756c(MaskSourceProcessor *processor, MaskWorkState **state);
u32 FUN_004372bc(MaskProcessor *processor, MaskWorkState **state);
u32 FUN_00436d88(MaskProcessor *processor, MaskWorkState **state);
u32 maskWorkProcessGroupedActions(MaskProcessor *processor, MaskWorkState **state);

// Index the source list, build its first mask and propagate actions before marking the chosen source.
u32 FUN_00437828(MaskSourceProcessor *processor, void *allocator,
    MaskSourceGroup *sources, MaskSourceGroup **chosen)
{
    processor->allocator = allocator;
    u32 count = 0;
    for (MaskSourceGroup *source = sources->links.next; source != sources; source = source->links.next)
        ++count;
    processor->byteCount = count;
    processor->sources = static_cast<MaskSourceGroup **>(FUN_004387f0(allocator, (count * 4 + 15) >> 4));
    if (processor->sources == NULL)
        return 0;
    count = 0;
    for (MaskSourceGroup *source = sources->links.next; source != sources; source = source->links.next)
        processor->sources[count++] = source;

    processor->states.allocator = processor->allocator;
    MaskWorkState *state = static_cast<MaskWorkState *>(FUN_004387f0(processor->states.allocator, 3));
    if (state == NULL)
        return 0;
    new (state->body()) MaskWorkBody;
    MaskWorkState *sentinel = reinterpret_cast<MaskWorkState *>(&processor->states);
    state->links.previous = sentinel->links.previous;
    state->links.next = sentinel;
    sentinel->links.previous = state;
    state->links.previous->links.next = state;
    if (FUN_00434d04(state->body(), processor->allocator, processor->byteCount, 1) == 0)
        return 0;
    state->baseline[0] = 1;
    FUN_00436d04(processor, state->baseline);
    MaskWorkState *argument = state;
    if (FUN_0043756c(processor, &argument) == 0)
        return 0;

    for (state = processor->states.next; state != sentinel; state = state->links.next) {
        if (!state->pending.empty()) {
            argument = state;
            if (FUN_004372bc(processor, &argument) == 0)
                return 0;
            if (!state->pending.empty()) {
                argument = state;
                if (FUN_00436d88(processor, &argument) == 0)
                    return 0;
                if (!state->pending.empty()) {
                    argument = state;
                    if (maskWorkProcessGroupedActions(processor, &argument) == 0)
                        return 0;
                }
            }
        }
    }

    MaskSourceGroup *target = *chosen;
    for (state = processor->states.next; state != sentinel; state = state->links.next) {
        u8 selected = 0;
        for (u32 index = 0; index < processor->byteCount; ++index) {
            if (state->baseline[index] != 0 && processor->sources[index] == target) {
                selected = 1;
                break;
            }
        }
        static_cast<MaskAllocatedState *>(state)->selected = selected;
    }
    return 1;
}
}
