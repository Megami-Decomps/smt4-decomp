#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

int asdTMTexTableReleaseNode(int table, int index);

void spriteTable2aFree(void)
{
    asdTMTexTableReleaseNode(0x2a, 0);
    asdTMTexTableFreeEntry(0x2a);
}

} /* extern "C" */
