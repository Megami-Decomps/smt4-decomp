#include "AsdSDK/Source/Gfx/Effect/EffectTimeline.h"

extern "C" {

// Duration reported by the resource type's handler, -1 when it has none.
static s32 resourceDuration(Resource *resource)
{
    s32 (*duration)(void *) = g_handlerTable[resource->type].duration;
    if (duration == NULL) {
        return -1;
    }
    return duration(resource->data);
}

// Longest end frame over the part's children (-1 when empty); 0 as soon as one child reports a zero duration.
static s32 childrenLongestEnd(const EffectTimelinePart *part)
{
    s32 longest = -1;
    for (const EffectTimelinePart *child = part->children; child != NULL; child = child->next) {
        s32 length = resourceDuration(child->block);
        if (length == 0) {
            return 0;
        }
        s32 end = length + child->startFrame;
        if (longest < end) {
            longest = end;
        }
    }
    return longest;
}

/* Checks whether every child has a known duration contained in the parent timeline. */
u32 FUN_00323bc4(const EffectTimelinePart *part)
{
    s32 longest = childrenLongestEnd(part);
    if (longest == 0 || part->duration < longest) {
        return 0;
    }
    return 1;
}
}
