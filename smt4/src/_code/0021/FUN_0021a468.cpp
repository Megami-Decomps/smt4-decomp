/* NON_MATCHING: retail hoists the -1 'no handler' length into a callee-saved register (mvnne r7) before the loop; built re-materialises it (mvneq). */
#include "shard/Resource.h"

struct TimelineNode {
    u8 unk00[0x80];
    s32 startOffset;      // 0x80
    u8 unk84[0xc];
    Resource *resource;   // 0x90
    u8 unk94[0x18];
    TimelineNode *next;   // 0xac
};

struct TimelineOwner {
    u8 unk00[0x8c];
    TimelineNode *first;  // 0x8c
};

extern "C" {

// Duration reported by the resource type's handler, -1 when it has none.
static __inline s32 resourceDuration(Resource *resource)
{
    s32 (*duration)(void *) = g_handlerTable[resource->type].timeline.duration;
    if (duration == NULL) {
        return -1;
    }
    return duration(resource->data);
}

// Longest end time over the owner's nodes (-1 when empty); 0 as soon as one handler reports a zero duration.
s32 FUN_0021a468(TimelineOwner *owner)
{
    s32 longest = -1;
    for (TimelineNode *node = owner->first; node != NULL; node = node->next) {
        s32 length = resourceDuration(node->resource);
        if (length == 0) {
            return 0;
        }
        s32 end = length + node->startOffset;
        if (longest < end) {
            longest = end;
        }
    }
    return longest;
}

} /* extern "C" */
