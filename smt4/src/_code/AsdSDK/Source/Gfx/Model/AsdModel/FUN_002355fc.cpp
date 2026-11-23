/* NON_MATCHING: 52 lines: retail copies the frame into s0 for the section search (an inlined lookup taking the
 * frame), keeps the section count live to re-derive the end and the last section, and computes the mode index
 * before the type index in the dispatch. */
#include "gfx/ScalarAnimationNode.h"

extern "C" {
f32 animCurveAdjustFrame(const ScalarAnimationNode *node, f32 frame);
typedef f32 (*ScalarAnimationEvaluator)(const void *keys, f32 frame);
extern ScalarAnimationEvaluator DAT_00471bc0[8][8];

// Evaluate additive, constant, or sectioned scalar animation at the adjusted frame.
f32 FUN_002355fc(ScalarAnimationNode *node, f32 frame)
{
    frame = animCurveAdjustFrame(node, frame);
    u32 flags = node->flags;
    if (flags & 1) {
        ScalarAnimationNode *first = node->first.get();
        ScalarAnimationNode *second = node->second.get();
        f32 firstValue = FUN_002355fc(first, frame);
        f32 secondValue = FUN_002355fc(second, frame);
        return firstValue + secondValue;
    }
    if (flags & 2)
        return node->constant;

    ScalarAnimationSection *section;
    if (flags & 4) {
        section = node->sections[0].get();
    } else {
        ResourceRelativePointer<ScalarAnimationSection> *first = node->sections;
        ResourceRelativePointer<ScalarAnimationSection> *end = first + node->count;
        bool found = false;
        for (ResourceRelativePointer<ScalarAnimationSection> *current = first; current < end; ++current) {
            ScalarAnimationSection *candidate = current->get();
            if (frame < candidate->end) {
                section = candidate;
                found = true;
                break;
            }
        }
        if (!found)
            section = (end - 1)->get();
    }
    f32 start = section->start;
    if (start > frame)
        frame = start;
    flags = section->flags;
    if (flags & 1)
        return section->constant;
    u32 type = (flags & 0x1C) >> 2;
    u32 mode = (flags & 0xE0) >> 5;
    return DAT_00471bc0[type][mode](section->keys, frame - start);
}
}
