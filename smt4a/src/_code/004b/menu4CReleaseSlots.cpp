#include "shard/Shard004B.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

extern void asdTMTexTableReleaseNode(s32 a, s32 b);

/* Releases flagged slots whose asdTMTexTableNodeIsLoaded entry is set; returns 1 when no slot pair has any flag left. */
u32 menu4CReleaseSlots(Menu4C *obj)
{
    s32 i;

    for (i = 0; i < 0x40; i++) {
        if (obj->flags1034[i] != 0 && asdTMTexTableNodeIsLoaded(0x1F, i) != 0) {
            asdTMTexTableReleaseNode(0x1F, i);
            obj->flags1034[i] = 0;
        }
    }
    i = 0;
    while (1) {
        u8 *p = (u8 *)obj + i;

        if (p[0x1034] != 0 || p[0x1035] != 0) {
            return 0;
        }
        i += 2;
        if (i >= 0x40) {
            return 1;
        }
    }
    return 1;
}

} /* extern "C" */
