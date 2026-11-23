#include "shard/Shard0050.h"

extern "C" {

extern void __aeabi_memcpy(void *dest, const void *src, u32 size);

void copy0x70Bytes(u8 *src, u8 *dest)
{
    __aeabi_memcpy(dest, src, 0x70);
}

} /* extern "C" */
