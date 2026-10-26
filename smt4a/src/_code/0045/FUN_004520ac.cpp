/* NON_MATCHING: zero result now kept in r4 like retail; built folds the relative-pointer null test into `addsne` and uses r0 for temporaries (retail resolves the child with addne/moveq and a separate cmp, keeping the context in r0). */
#include "shard/S1NwGfx.h"

struct TaggedResource {
    u32 tag; // 0x00
    u8 unk04[0x18]; // 0x04
    RelativePointer child; // 0x1c
};
struct ResourceContext;

extern "C" {
void FUN_00451a70(ResourceContext* context, TaggedResource* resource);

// Applies a tagged child block from a valid parent resource.
u32 FUN_004520ac(ResourceContext* context, TaggedResource* resource)
{
    u32 result = 0;
    if (resource != NULL && (~resource->tag & 0x80000001)) {
        resource = NULL;
    }
    TaggedResource* child = static_cast<TaggedResource*>(resource->child.get());
    if (child != NULL && (~child->tag & 0x80000002)) {
        child = NULL;
    }
    if (child != NULL) {
        FUN_00451a70(context, child);
    }
    return result;
}
}
