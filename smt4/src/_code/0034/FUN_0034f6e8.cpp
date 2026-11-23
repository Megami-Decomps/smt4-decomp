#include "classes/Obj557f00.h"

extern "C" {
void FUN_0034ec10(u32 handle);
void FUN_0034eb8c(u32 handle);
void soundResetPairState(void *object);

/* Stops a playing stream and rewinds it: the body of frameStreamStop, which the close inlines. */
static __inline void streamStop(Obj557f00 *stream)
{
    if (stream->handle != -1) {
        FUN_0034ec10(stream->handle);
        stream->active = 0;
        stream->pending = 0;
        stream->submitted = 0;
        stream->cursor = 0;
    }
}

/* Closes the frame stream (Obj557f00::close): stops it, releases its handle and ring buffer, then resets the base. */
void FUN_0034f6e8(Obj557f00 *stream)
{
    streamStop(stream);
    if (stream->handle != -1) {
        FUN_0034eb8c(stream->handle);
        stream->handle = -1;
        stream->allocator->vtable->release(stream->allocator, stream->pixels);
        stream->pixels = NULL;
    }
    soundResetPairState(stream);
}

} /* extern "C" */
