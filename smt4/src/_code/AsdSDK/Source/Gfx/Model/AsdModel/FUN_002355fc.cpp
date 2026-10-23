/* NON_MATCHING: relative-pointer register lifetimes, section-search loop lowering, and dispatch indexing differ. */
#include "gfx/ScalarAnimationNode.h"

extern "C" {
f32 thresholdDispatchOutsideRange(const ScalarAnimationNode *node, f32 frame);
typedef f32 (*ScalarAnimationEvaluator)(const void *keys, f32 frame);
extern ScalarAnimationEvaluator DAT_00471bc0[8][8];

// Evaluate additive, constant, or sectioned scalar animation at the adjusted frame.
f32 FUN_002355fc(ScalarAnimationNode *node, f32 frame)
{
    frame = thresholdDispatchOutsideRange(node, frame);
    u32 flags = node->flags;
    if (flags & 1) {
        ScalarAnimationNode *first = node->first.get();
        ScalarAnimationNode *second = node->second.get();
        f32 firstValue = FUN_002355fc(first, frame);
        return firstValue + FUN_002355fc(second, frame);
    }
    if (flags & 2)
        return node->constant;

    ScalarAnimationSection *section;
    if (flags & 4) {
        section = node->sections[0].get();
    } else {
        ResourceRelativePointer<ScalarAnimationSection> *first = node->sections;
        ResourceRelativePointer<ScalarAnimationSection> *end = first + node->count;
        ResourceRelativePointer<ScalarAnimationSection> *current = first;
        for (; current < end; ++current) {
            if (frame < current->get()->end)
                break;
        }
        if (current == end)
            section = (end - 1)->get();
        else
            section = current->get();
    }
    f32 start = section->start;
    if (start > frame)
        frame = start;
    flags = section->flags;
    if (flags & 1)
        return section->constant;
    return DAT_00471bc0[(flags & 0x1C) >> 2][(flags & 0xE0) >> 5](section->keys, frame - start);
}
}
