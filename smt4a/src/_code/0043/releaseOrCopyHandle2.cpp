#include "shard/Shard0043.h"

extern "C" {

extern void wordPairCopy(u32 first, s32 copy);
extern void clearTwoWords(u32 first);

/* With `copy` set runs wordPairCopy on the pair, else clearTwoWords on the first; returns the first. */
u32 releaseOrCopyHandle2(u32 first, s32 copy)
{
    if (copy != 0) {
        wordPairCopy(first, copy);
    } else {
        clearTwoWords(first);
    }
    return first;
}

} /* extern "C" */
