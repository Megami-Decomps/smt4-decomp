#include "shard/Shard0050.h"

extern "C" {

extern void rt_memcpy(void *dest, const void *src, u32 size);

void copy0x70Bytes(u8 *src, u8 *dest)
{
    rt_memcpy(dest, src, 0x70);
}

} /* extern "C" */
