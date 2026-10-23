/* NON_MATCHING: aligned size multiplication strength reduction, sum order and saved registers differ. */
#include "gfx/ModelMemoryRequirements.h"
extern "C" {
u32 FUN_00141ff8(u32 resource);
s32 FUN_00142014(u32 resource, u32 id, ModelBufferRequirements *requirements);
s32 FUN_0014204c(u32 resource, ModelObjectRequirements *requirements);

static __inline u32 modelAlignedStorage(u32 bytes)
{
    return (bytes + 3) & ~3u;
}

/* Include each buffer's aligned allocator header and all model-related object storage. */
s32 FUN_0012201c(u32 unused, u32 resource)
{
    u32 count = FUN_00141ff8(resource);
    u32 bytes = modelAlignedStorage(count * 0x48);
    for (u32 index = 0; index < count; ++index) {
        ModelBufferRequirements buffers = {0, 0};
        if (FUN_00142014(resource, index | 0x04000000, &buffers) && buffers.bytes && buffers.count > 0) {
            for (s32 buffer = 0; buffer < buffers.count; ++buffer)
                bytes = ((bytes + 0x3F) & ~0x1Fu) + ((buffers.bytes + 3) & ~3u);
        }
    }
    ModelObjectRequirements objects;
    if (FUN_0014204c(resource, &objects)) {
        bytes += modelAlignedStorage(objects.modelCount * 0x558);
        bytes += modelAlignedStorage(objects.materialCount * 0x460);
        bytes += modelAlignedStorage(objects.animationCount * 0x2BD4);
        bytes += modelAlignedStorage(objects.instanceCount * 0xCC);
    }
    return bytes;
}
}
