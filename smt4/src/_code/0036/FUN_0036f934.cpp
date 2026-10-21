/* NON_MATCHING: compiler folds child-pointer/tag validation into shorter branches and rematerializes return zero; retail keeps explicit null conversion/checks and preserves zero in R4. */
#include "shard/S1NwGfx.h"

struct TaggedResource {
    u32 tag; // 0x00
    u8 unk04[0x18]; // 0x04
    RelativePointer child; // 0x1c
};
struct ResourceContext;

extern "C" {
void FUN_0036f464(ResourceContext* context, TaggedResource* resource);

// Applies a tagged child block from a valid parent resource.
u32 FUN_0036f934(ResourceContext* context, TaggedResource* resource)
{
    if (resource != NULL && (~resource->tag & 0x80000001)) {
        resource = NULL;
    }
    TaggedResource* child = static_cast<TaggedResource*>(resource->child.get());
    if (child != NULL && (~child->tag & 0x80000002)) {
        child = NULL;
    }
    if (child != NULL) {
        FUN_0036f464(context, child);
    }
    return 0;
}
}
