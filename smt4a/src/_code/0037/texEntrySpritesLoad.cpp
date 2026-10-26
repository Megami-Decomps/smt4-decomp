#include "shard/Shard0037.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {

extern void asdTMTexTableLoadSprites(s32 id);

void texEntrySpritesLoad(void)
{
    asdTMTexTableLoadSprites(0x24);
    asdTMTexLoadMainHeap(0x24, 0);
}

} /* extern "C" */
