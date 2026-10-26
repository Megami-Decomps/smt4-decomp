#include "common.h"
#include "code/Code002a.h"

struct TaggedDispatch {
    u8 tag; // 0x00
    u8 unk01[15];
    u32 payload; // 0x10
};
extern "C" s32 resourceRunOperationIfUnblocked(u32 *payload);
extern "C" s32 resourceRunEmbeddedOperationIfUnblocked(u32 *payload);

// Dispatch the tagged payload to its specialized handler.
extern "C" s32 FUN_002a482c(const void *selection)
{
    TaggedDispatch *object = static_cast<TaggedDispatch *>(const_cast<void *>(selection));
    if (object->tag != 1)
        return resourceRunOperationIfUnblocked(&object->payload);
    return resourceRunEmbeddedOperationIfUnblocked(&object->payload);
}
