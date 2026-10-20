#include "shard/Shard0031.h"

extern "C" {

extern s32 DAT_005702f8;
extern Entry98 *FUN_002a398c(s32 index);

/* True when entry `index` exists and its unkD8 is positive. */
u32 entryIsValid(s32 index)
{
    if (DAT_005702f8 - index - 1 < 0 || FUN_002a398c(index)->unkD8 <= 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
