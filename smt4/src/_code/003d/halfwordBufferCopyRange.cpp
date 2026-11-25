/* NON_MATCHING: retail caps the available count in r0 before copying it to r4;
 * the build selects the final count directly in r4 with the opposite comparison. */
#include "shard/W6_W6Match3_HalfwordBuffer.h"
#include <string.h>

/* Copies as many halfwords as remain from the requested buffer offset. */
extern "C" u32 halfwordBufferCopyRange(HalfwordBufferHandle *handle, u16 *destination,
                                         u32 requested, u32 offset)
{
    const HalfwordBuffer *buffer = handle->buffer;
    u32 available = buffer->count;
    if (offset >= available) {
        return 0;
    }
    u32 remaining = available - offset;
    u32 count = requested;
    if (remaining < count) {
        count = remaining;
    }
    memcpy(destination, buffer->data + offset, count * sizeof(u16));
    return count;
}
