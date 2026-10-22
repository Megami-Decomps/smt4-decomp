/* NON_MATCHING: retail uses a shared aligned-copy tail and packed conditional byte stores. */
#include "common.h"

extern "C" {
void rt_memcpy(void *destination, const void *source, u32 bytes);

void FUN_002e5f10(void *destination, const void *source, u32 bytes)
{
    u8 *write = static_cast<u8 *>(destination);
    const u8 *read = static_cast<const u8 *>(source);
    u32 distance = reinterpret_cast<u32>(write) - reinterpret_cast<u32>(read);
    if (reinterpret_cast<u32>(write) < reinterpret_cast<u32>(read) ||
        bytes <= distance) {
        rt_memcpy(destination, source, bytes);
        return;
    }
    write += bytes;
    read += bytes;
    while (bytes != 0) {
        *--write = *--read;
        --bytes;
    }
}
}
