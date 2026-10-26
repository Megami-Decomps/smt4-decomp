/* NON_MATCHING: the cast (member hasFlags -> bics + conditional move) and the stream getter (addne/moveq) have retail's shape; retail still computes the field address as `0x38 + index * 4` from a hoisted constant 56 (and 257 as 56 + 201) and loads the flag word after the mask constant, built folds +0x38 into a writeback load */
#include "shard/S1NwGfx.h"

extern "C" void (*g_gfxReleaseCallback)(void *allocation, u32 kind, u32 count, u32 handle);

/* Release each allocated vertex stream, then mark the resource as unbound. */
extern "C" void FUN_0036f790(void *object)
{
    VertexBufferResource *resource = VertexBufferResource::cast(object);
    u32 count = resource->count;
    if (count != 0) {
        for (s32 index = 0; index < 6; ++index) {
            VertexBufferStorage *stream = resource->stream((u8)index);
            if (stream->allocation != NULL) {
                g_gfxReleaseCallback(stream->allocation, 0x101, count, stream->handle);
                stream->handle = 0;
            }
        }
        resource->count = 0;
    }
}
