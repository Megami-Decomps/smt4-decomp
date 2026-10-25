#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

int asdTMTexTableReleaseNode(int table, int index);

void titleTexTableFreeEntries(void)
{
    asdTMTexTableReleaseNode(0x2f, 0);
    asdTMTexTableFreeEntry(0x2f);
}

} /* extern "C" */
