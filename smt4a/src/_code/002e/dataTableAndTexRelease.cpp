#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

void dataTableFree(int a);
void asdTMTexTableReleaseNode(int a, int b);

void dataTableAndTexRelease(void)
{
    dataTableFree(31);
    asdTMTexTableReleaseNode(26, 0);
    asdTMTexTableFreeEntry(26);
}

} /* extern "C" */
