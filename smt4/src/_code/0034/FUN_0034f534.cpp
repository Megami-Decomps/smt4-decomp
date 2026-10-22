/* NON_MATCHING: ring-buffer cursor and resource-size calculations use different saved registers. */
/* Submits a contiguous block to the frame stream's ring buffer, wrapping when necessary. */
#include "classes/Obj557f00.h"

extern "C" {
u64 resourceGetWideHandle(u32 index);
u64 runtimeShiftLeftWide(u64 value, u32 shift);
s32 FUN_0034e618(u32 handle, const void *buffer, u32 size);
void rt_memcpy(void *destination, const void *source, u32 size);

u8 FUN_0034f534(Obj557f00 *stream, const void *source, u32 size)
{
    u32 submitted = (u32)stream->submitted;
    u64 consumed = runtimeShiftLeftWide(resourceGetWideHandle(stream->handle), stream->description->height);
    u32 available = stream->capacity - (submitted - (u32)consumed);
    u32 offset = stream->cursor;
    u32 tailSpace = stream->capacity - offset;
    if (tailSpace < size) {
        available -= tailSpace;
        offset = 0;
    }
    if (size <= available) {
        u8 *destination = stream->pixels + offset;
        if (destination != NULL) {
            rt_memcpy(destination, source, size);
            s32 result = FUN_0034e618(stream->handle, destination, size);
            if (result != 0) {
                stream->submitted += size;
                stream->cursor = (destination - stream->pixels) + size;
            }
            return result != 0;
        }
    }
    return 0;
}
}
