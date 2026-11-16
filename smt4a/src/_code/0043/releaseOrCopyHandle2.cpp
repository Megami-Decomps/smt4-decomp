#include "shard/Shard0043.h"

extern "C" {

extern void ARM_common_memcpy4_8(u32 first, s32 copy);
extern void clearTwoWords(u32 first);

/* With `copy` set runs ARM_common_memcpy4_8 on the pair, else clearTwoWords on the first; returns the first. */
u32 releaseOrCopyHandle2(u32 first, s32 copy)
{
    if (copy != 0) {
        ARM_common_memcpy4_8(first, copy);
    } else {
        clearTwoWords(first);
    }
    return first;
}

} /* extern "C" */
