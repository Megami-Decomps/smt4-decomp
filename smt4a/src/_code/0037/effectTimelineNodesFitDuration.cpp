#include "common.h"
#include "shard/Resource.h"

namespace {

struct HandlerNodeView {
    u8 unk00[0x80];           // 0x00
    s32 startFrame;          // 0x80
    u8 unk84[0x0c];           // 0x84
    Resource* resource;       // 0x90
    u8 unk94[0x18];           // 0x94
    HandlerNodeView* next;    // 0xac
};

struct HandlerOwnerView {
    u8 unk00[0x84];           // 0x00
    s32 duration;            // 0x84
    u8 unk88[4];              // 0x88
    HandlerNodeView* head;    // 0x8c
};

}

extern "C" {

// Duration reported by the node's handler, -1 when it has none.
static s32 nodeDuration(Resource *resource)
{
    s32 (*duration)(void *) = g_handlerTable[resource->type].duration;
    if (duration == NULL) {
        return -1;
    }
    return duration(resource->data);
}

// Longest end frame over the owner's nodes (-1 when empty); 0 as soon as one node reports a zero duration.
static s32 nodesLongestEnd(const HandlerOwnerView *owner)
{
    s32 longest = -1;
    for (const HandlerNodeView *node = owner->head; node != NULL; node = node->next) {
        s32 length = nodeDuration(node->resource);
        if (length == 0) {
            return 0;
        }
        s32 end = length + node->startFrame;
        if (longest < end) {
            longest = end;
        }
    }
    return longest;
}

/* Checks whether every node has a known duration that ends two frames before the owner's bound. */
u32 effectTimelineNodesFitDuration(HandlerOwnerView *owner)
{
    s32 longest = nodesLongestEnd(owner);
    if (longest == 0 || owner->duration < longest + 2) {
        return 0;
    }
    return 1;
}

}
