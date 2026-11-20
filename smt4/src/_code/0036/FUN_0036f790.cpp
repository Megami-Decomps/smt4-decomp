/* NON_MATCHING: the stream loop now has retail's shape (56 and 257 hoisted, the slot address 56 + index * 4 + resource);
 * the cast's flag test is laid out differently (retail: bics then moveq r6, r0) and get() adds this + offset where
 * retail adds offset + this. */
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
