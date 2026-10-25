#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

extern void asdTMTexTableReleaseNode(int index, int node);
void texEntryRelease(void)
{
    asdTMTexTableReleaseNode(36, 0);
    asdTMTexTableFreeEntry(36);
}

} /* extern "C" */
