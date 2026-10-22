/* NON_MATCHING: retail leaves the payload return register uninitialized on failure and retains a constant-count loop. */
/* Finds an indexed EPL block payload in an ATBC or ABCH model container. */
#include "shard/S3AsdModelAttr.h"

extern "C" {
extern const char g_asdModelContainerAtbcMagic[];
extern const char g_asdModelContainerAbchMagic[];
extern const char DAT_0053d1a0[];
s32 rt_memcmp(const void *left, const void *right, u32 bytes);
void FUN_002e59f8(const void *source, void *destination, u32 bytes);

void *FUN_001ad70c(const AsdAtbcHeader *container, s32 index)
{
    void *payload = NULL;
    if (rt_memcmp(container, g_asdModelContainerAtbcMagic, 4) == 0 ||
        rt_memcmp(container, g_asdModelContainerAbchMagic, 4) == 0) {
        if (container->count > 0 && container->count > index) {
            const AsdEplBlockHeader *block = (const AsdEplBlockHeader *)
                ((const u8 *)container + container->firstOffset);
            for (s32 current = 0; block != NULL; ++current) {
                if (rt_memcmp(block, DAT_0053d1a0, 7) != 0) {
                    break;
                }
                AsdEplBlockHeader header;
                FUN_002e59f8(block, &header, sizeof(header));
                payload = (void *)(block + 1);
                if (current == index) {
                    break;
                }
                block = (const AsdEplBlockHeader *)((const u8 *)block + header.size);
            }
        }
    }
    return payload;
}
}
