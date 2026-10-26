#include "shard/Shard004A.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {

extern void asdTMTexTableLoadSprites(s32 id);

void resetFlagGroupsCD(void)
{
    s32 i;

    asdTMTexTableLoadSprites(0xC);
    asdTMTexTableLoadSprites(0xD);
    for (i = 0; i < 6; i++) {
        asdTMTexLoadMainHeap(0xC, i);
    }
    for (i = 0; i < 5; i++) {
        asdTMTexLoadMainHeap(0xD, i);
    }
}

} /* extern "C" */
