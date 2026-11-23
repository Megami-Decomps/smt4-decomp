#include "classes/Obj557f00.h"

extern "C" {
void FUN_00423144(u32 handle);

/* Stops a playing stream and rewinds it: clears its flags, the submitted total and the ring cursor. */
void frameStreamStop(Obj557f00 *stream)
{
    if (stream->handle != -1) {
        FUN_00423144(stream->handle);
        stream->active = 0;
        stream->pending = 0;
        stream->submitted = 0;
        stream->cursor = 0;
    }
}

} /* extern "C" */
