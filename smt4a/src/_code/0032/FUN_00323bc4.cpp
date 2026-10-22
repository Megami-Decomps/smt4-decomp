/* NON_MATCHING: Retail keeps the unknown-duration sentinel in r8 across the loop; this build rematerializes it in r0 per child. */
#include "AsdSDK/Source/Gfx/Effect/EffectTimeline.h"

extern "C" {

/* Checks whether every child has a known duration contained in the parent timeline. */
u32 FUN_00323bc4(const EffectTimelinePart *part)
{
    s32 maximum = -1;
    for (const EffectTimelinePart *child = part->children; child != NULL; child = child->next) {
        s32 (*duration)(void *) = g_handlerTable[child->block->type].timeline.duration;
        s32 length = -1;
        if (duration != NULL) {
            length = duration(child->block->data);
            if (length == 0) {
                return 0;
            }
        }
        s32 endFrame = length + child->startFrame;
        if (maximum < endFrame) {
            maximum = endFrame;
        }
    }
    if (maximum == 0 || part->duration < maximum) {
        return 0;
    }
    return 1;
}
}
