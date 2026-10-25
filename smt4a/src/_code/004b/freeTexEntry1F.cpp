#include "shard/Shard004B.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

extern void asdTMTexTableReleaseNode(s32 a, s32 b);

void freeTexEntry1F(void)
{
    asdTMTexTableReleaseNode(0x1F, 0);
    asdTMTexTableFreeEntry(0x1F);
}

} /* extern "C" */
