#include "shard/Shard003A.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

extern void asdTMTexTableReleaseNode(s32 a, s32 b);

void freeTexTable24(void)
{
    asdTMTexTableReleaseNode(0x24, 0);
    asdTMTexTableFreeEntry(0x24);
}

} /* extern "C" */
