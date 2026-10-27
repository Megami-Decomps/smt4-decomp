/* NON_MATCHING: retail separately preserves the equal header and magic pointers in r4 and r6. */
#include "shard/S3AsdModelAttr.h"

extern "C" {
extern const char g_asdModelContainerAtbcMagic[];
extern const char g_asdModelContainerAbchMagic[];
s32 rt_memcmp(const void *left, const void *right, u32 size);

static bool isAnimationContainer(const void *data)
{
    return rt_memcmp(data, g_asdModelContainerAtbcMagic, 4) == 0 ||
           rt_memcmp(data, g_asdModelContainerAbchMagic, 4) == 0;
}

s32 asdAtbcGetEntryCount(const AsdAtbcHeader *header)
{
    s32 count = 0;
    if (isAnimationContainer(header)) {
        count = header->count;
    }
    return count;
}
}
