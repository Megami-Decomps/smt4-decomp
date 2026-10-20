#include "shard/Shard003A.h"

extern "C" {

extern void asdTMTexTableReleaseNode(s32 a, s32 b);
extern void asdTMTexTableFreeEntry(s32 index);

void freeTexTable24(void)
{
    asdTMTexTableReleaseNode(0x24, 0);
    asdTMTexTableFreeEntry(0x24);
}

} /* extern "C" */
