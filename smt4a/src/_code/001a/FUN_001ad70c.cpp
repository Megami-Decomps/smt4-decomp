/* NON_MATCHING: uninitialized failure return and invariant-count loop recovered; retail retains a second saved container pointer. */
/* Finds an indexed EPL block payload in an ATBC or ABCH model container. */
#include "shard/S3AsdModelAttr.h"
#include "AsdSDK/AsdMemCopy.h"

extern "C" {
extern const char g_asdModelContainerAtbcMagic[];
extern const char g_asdModelContainerAbchMagic[];
extern const char DAT_0053d1a0[];
s32 rt_memcmp(const void *left, const void *right, u32 bytes);
void *FUN_001ad70c(const AsdAtbcHeader *container, s32 index)
{
    void *payload; // Retail leaves the failure result uninitialized.
    if (rt_memcmp(container, g_asdModelContainerAtbcMagic, 4) == 0 ||
        rt_memcmp(container, g_asdModelContainerAbchMagic, 4) == 0) {
        s32 count = container->count;
        if (count > 0 && count > index) {
            const AsdEplBlockHeader *block = (const AsdEplBlockHeader *)
                ((const u8 *)container + container->firstOffset);
            for (s32 current = 0; count != 0; ++current) {
                if (rt_memcmp(block, DAT_0053d1a0, 7) != 0) {
                    break;
                }
                AsdEplBlockHeader header;
                FUN_002e59f8(block, &header, sizeof(header));
                payload = (void *)(block + 1);
                if (index == current) {
                    break;
                }
                block = (const AsdEplBlockHeader *)((const u8 *)block + header.size);
            }
        }
    }
    return payload;
}
}
