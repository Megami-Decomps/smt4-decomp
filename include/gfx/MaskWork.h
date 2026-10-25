#ifndef GFX_MASKWORK_H
#define GFX_MASKWORK_H
#include "gfx/Variant.h"
#include <stddef.h>

struct MaskWorkNode {
    MaskWorkNode *previous;
    MaskWorkNode *next;
    Variant payload;
};
struct MaskWorkList {
    MaskWorkNode *previous;
    MaskWorkNode *next;
    void *allocator;
    bool empty() const { return next == reinterpret_cast<const MaskWorkNode *>(this); }
};
// The initialized body of an allocated mask state, including the two tail fields.
struct MaskWorkBody {
    MaskWorkBody();
    MaskWorkList output;
    MaskWorkList pending;
    void *storage;
    u8 *baseline;
    u32 byteCount;
    u8 active;
};
struct MaskWorkState {
    union {
        u8 unk00[8];
        struct {
            MaskWorkState *previous;
            MaskWorkState *next;
        } links;
    };
    MaskWorkList output; // 0x08
    MaskWorkList pending; // 0x14
    u8 unk20[4];
    u8 *baseline; // 0x24
    MaskWorkBody *body() { return reinterpret_cast<MaskWorkBody *>(&output); }
};
struct MaskAllocatedState : MaskWorkState {
    u32 unk28;
    u8 selected;
};
struct MaskStateList {
    MaskWorkState *previous;
    MaskWorkState *next;
    void *allocator;
};
struct MaskProcessor {
    void *allocator;
    union {
        u8 unk04[0xc];
        MaskStateList states; // 0x04
    };
    u32 byteCount; // 0x10
};
struct MaskSourceGroup {
    union {
        u8 unk00[8];
        struct {
            MaskSourceGroup *previous;
            MaskSourceGroup *next;
        } links;
    };
    MaskWorkList actions; // 0x08
};
struct MaskSourceProcessor : MaskProcessor {
    MaskSourceGroup **sources; // 0x14
};
typedef char MaskWorkLayoutCheck[sizeof(Variant) == 0x14 && sizeof(MaskWorkNode) == 0x1c &&
    sizeof(MaskWorkList) == 0xc && sizeof(MaskWorkState) == 0x28 && sizeof(MaskProcessor) == 0x14 &&
    offsetof(MaskWorkNode, payload) == 8 && offsetof(MaskWorkState, pending) == 0x14 &&
    offsetof(MaskWorkState, baseline) == 0x24 && offsetof(MaskSourceGroup, actions) == 8 &&
    offsetof(MaskSourceProcessor, sources) == 0x14 ? 1 : -1];
typedef char MaskAllocatedStateLayoutCheck[
    offsetof(MaskAllocatedState, selected) == 0x2c && sizeof(MaskAllocatedState) == 0x30 &&
    offsetof(MaskSourceGroup, links.next) == 4 && sizeof(MaskSourceGroup) == 0x14 ? 1 : -1];
typedef char MaskStateListLayoutCheck[
    offsetof(MaskProcessor, states) == 4 && sizeof(MaskStateList) == 0xc &&
    offsetof(MaskWorkState, links.next) == 4 ? 1 : -1];
typedef char MaskWorkBodyLayoutCheck[
    sizeof(MaskWorkBody) == 0x28 && offsetof(MaskWorkBody, pending) == 0xc &&
    offsetof(MaskWorkBody, baseline) == 0x1c && offsetof(MaskWorkBody, active) == 0x24 &&
    offsetof(MaskWorkState, output) + offsetof(MaskWorkBody, baseline) ==
        offsetof(MaskWorkState, baseline) ? 1 : -1];
#endif
