#include "classes/Obj557f00.h"

extern "C" {

u8 FUN_0034f6cc(Obj557f00 *stream, Obj557f00Allocator *allocator, const Obj557f00Description *description);
s32 FUN_0034e310(s32 width, s32 height, u32 format);

/* Opens the frame stream (Obj557f00::open): binds the allocator and the frame description, allocates `depth` 16-bit
 * frames as the ring buffer and creates the stream's handle; 1 on success. */
u32 frameStreamOpen(Obj557f00 *stream, Obj557f00Allocator *allocator, const Obj557f00Description *description, s32 depth,
                 u32 format)
{
    if (!FUN_0034f6cc(stream, allocator, description)) {
        return 0;
    }
    stream->capacity = description->width * description->height * depth * 2;
    stream->pixels = (u8 *)stream->allocator->vtable->allocate(stream->allocator, stream->capacity, 32);
    if (stream->pixels == NULL) {
        return 0;
    }
    stream->handle = FUN_0034e310(description->width, description->height, format);
    if (stream->handle == -1) {
        stream->allocator->vtable->release(stream->allocator, stream->pixels);
        stream->pixels = NULL;
        return 0;
    }
    stream->submitted = 0;
    stream->cursor = 0;
    return 1;
}

} /* extern "C" */
