/* NON_MATCHING: the self-relative stream getter folds its +0x38 field address into the load, recomputes the base, and branches rather than using conditional add/move. */
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
