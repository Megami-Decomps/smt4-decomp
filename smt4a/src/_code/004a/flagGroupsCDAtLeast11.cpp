#include "shard/Shard004A.h"

extern "C" {

extern u8 asdTMTexTableNodeIsLoaded(u32 group, s32 index);

/* True when at least 11 of the 6+5 entries of groups 0xC and 0xD are set. */
u8 flagGroupsCDAtLeast11(void)
{
    s32 count = 0;
    s32 i;

    for (i = 0; i < 6; i++) {
        if (asdTMTexTableNodeIsLoaded(0xC, i) != 0) {
            count++;
        }
    }
    for (i = 0; i < 5; i++) {
        if (asdTMTexTableNodeIsLoaded(0xD, i) != 0) {
            count++;
        }
    }
    return count >= 11;
}

} /* extern "C" */
