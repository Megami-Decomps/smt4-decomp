/* NON_MATCHING: retail separately preserves the equal header and magic pointers in r4 and r6. */
#include "shard/S3AsdModelAttr.h"

extern "C" {
extern const char g_asdModelContainerAtbcMagic[];
extern const char g_asdModelContainerAbchMagic[];
s32 rt_memcmp(const void *left, const void *right, u32 size);

// Read the entry count only from a recognized ATBC/ABCH container.
s32 asdAtbcGetEntryCount(const AsdAtbcHeader *header)
{
    const char *magic = header->magic;
    s32 count = 0;
    if (rt_memcmp(magic, g_asdModelContainerAtbcMagic, 4) == 0 ||
        rt_memcmp(magic, g_asdModelContainerAbchMagic, 4) == 0) {
        count = header->count;
    }
    return count;
}
}
