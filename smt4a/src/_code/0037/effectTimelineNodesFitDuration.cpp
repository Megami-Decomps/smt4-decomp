#include "common.h"

namespace {

struct HandlerDataView {
    u8 unk00[4];              // 0x00
    u16 handlerIndex;         // 0x04
    u8 unk06[2];              // 0x06
    u32 handlerArgument;      // 0x08
};

struct HandlerNodeView {
    u8 unk00[0x80];           // 0x00
    s32 startFrame;          // 0x80
    u8 unk84[0x0c];           // 0x84
    HandlerDataView* data;    // 0x90
    u8 unk94[0x18];           // 0x94
    HandlerNodeView* next;    // 0xac
};

struct HandlerOwnerView {
    u8 unk00[0x84];           // 0x00
    s32 duration;            // 0x84
    u8 unk88[4];              // 0x88
    HandlerNodeView* head;    // 0x8c
};

typedef s32 (*HandlerCallback)(u32 argument);

struct HandlerEntryView {
    u8 unk00[0x40];           // 0x00
    HandlerCallback callback; // 0x40
};

}

extern "C" {
extern HandlerEntryView g_handlerTable[];

// Duration reported by the node's handler, -1 when it has none.
static s32 nodeDuration(HandlerDataView *data)
{
    HandlerCallback duration = g_handlerTable[data->handlerIndex].callback;
    if (duration == NULL) {
        return -1;
    }
    return duration(data->handlerArgument);
}

// Longest end frame over the owner's nodes (-1 when empty); 0 as soon as one node reports a zero duration.
static s32 nodesLongestEnd(const HandlerOwnerView *owner)
{
    s32 longest = -1;
    for (const HandlerNodeView *node = owner->head; node != NULL; node = node->next) {
        s32 length = nodeDuration(node->data);
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
