#include "classes/Obj557f00.h"
extern "C" {
void FUN_00423144(u32 handle);
void FUN_004230c0(u32 handle);
void callbackResetStateAndCount(void *object);
}

/* Stops a playing stream and rewinds it: the body of frameStreamStop, which close() inlines. */
static __inline void streamStop(Obj557f00 *stream)
{
    if (stream->handle != -1) {
        FUN_00423144(stream->handle);
        stream->active = 0;
        stream->pending = 0;
        stream->submitted = 0;
        stream->cursor = 0;
    }
}

void Obj557f00::close()
{
    streamStop(this);
    if (handle != -1) {
        FUN_004230c0(handle);
        handle = -1;
        allocator->vtable->release(allocator, pixels);
        pixels = NULL;
    }
    callbackResetStateAndCount(this);
}
