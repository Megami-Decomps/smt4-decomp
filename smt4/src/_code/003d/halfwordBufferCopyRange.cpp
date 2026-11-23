/* NON_MATCHING: count stays in r4 rather than passing through r0; min selection and copy setup scheduling differ. */
#include "shard/W6_W6Match3_HalfwordBuffer.h"

extern "C" void* __aeabi_memcpy(void* destination, const void* source, u32 size); // declcheck: local (the shared declaration does not compile here or changes this unit)

// Copy as many halfwords as remain from the requested buffer offset.
extern "C" u32 halfwordBufferCopyRange(HalfwordBufferHandle* handle, u16* destination,
                           u32 requested, u32 offset)
{
    u32 count = handle->buffer->count;
    if (offset >= count)
        return 0;
    count -= offset;
    if (requested <= count)
        count = requested;
    __aeabi_memcpy(destination, handle->buffer->data + offset, count * sizeof(u16));
    return count;
}
