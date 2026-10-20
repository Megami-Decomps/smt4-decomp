#include "shard/Shard0043.h"

extern "C" {

extern void FUN_001a9110(u32 first, s32 copy);
extern void clearTwoWords(u32 first);

/* With `copy` set runs FUN_001a9110 on the pair, else clearTwoWords on the first; returns the first. */
u32 releaseOrCopyHandle(u32 first, s32 copy)
{
    if (copy != 0) {
        FUN_001a9110(first, copy);
    } else {
        clearTwoWords(first);
    }
    return first;
}

} /* extern "C" */
