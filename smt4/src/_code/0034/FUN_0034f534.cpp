/* NON_MATCHING: only the commit's 64-bit add differs: retail loads the two words separately and stores the low word
 * on its own (str with writeback, then stm of the high word and cursor); this build loads them with ldm and stores all
 * three with one stm. The reserve/commit split follows retail's inlined bodies (the destination and size are copied to
 * other registers across the copy) and is shared with the twin. */
#include "classes/Obj557f00.h"

extern "C" {
u64 resourceGetWideHandle(s32 index);
u64 __aeabi_llsl(u64 value, u32 shift);
u32 deferredTransferEnqueue(u32 index, void *data, u32 size);
void rt_memcpy(void *destination, const void *source, u32 size);

/* Returns where `size` bytes fit in the stream's ring buffer, wrapping to its start when the tail is
 * too short, or NULL when the unconsumed data leaves no room. */
static __inline u8 *streamReserve(Obj557f00 *stream, u32 size)
{
    u64 previous = stream->submitted;
    u64 consumed = __aeabi_llsl(resourceGetWideHandle(stream->handle), stream->description->height);
    u32 available = stream->capacity - (u32)(previous - consumed);
    u32 tailSpace = stream->capacity - stream->cursor;
    u32 offset = stream->cursor;
    if (tailSpace < size) {
        available -= tailSpace;
        offset = 0;
    }
    if (size > available)
        return NULL;
    return stream->pixels + offset;
}

/* Queues the reserved block for transfer and advances the ring past it. */
static __inline bool streamCommit(Obj557f00 *stream, u8 *destination, u32 size)
{
    if (deferredTransferEnqueue(stream->handle, destination, size) == 0)
        return false;
    stream->submitted += size;
    stream->cursor = (destination - stream->pixels) + size;
    return true;
}

/* Copies a contiguous block into the frame stream's ring buffer and queues it (Obj557f00::read). */
u8 FUN_0034f534(Obj557f00 *stream, void *source, u32 size)
{
    u8 *destination = streamReserve(stream, size);
    if (destination == NULL)
        return 0;
    rt_memcpy(destination, source, size);
    return streamCommit(stream, destination, size);
}
}
