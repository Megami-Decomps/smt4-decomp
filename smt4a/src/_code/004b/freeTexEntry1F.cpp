#include "shard/Shard004B.h"

extern "C" {

extern void asdTMTexTableReleaseNode(s32 a, s32 b);
extern void asdTMTexTableFreeEntry(s32 index);

void freeTexEntry1F(void)
{
    asdTMTexTableReleaseNode(0x1F, 0);
    asdTMTexTableFreeEntry(0x1F);
}

} /* extern "C" */
