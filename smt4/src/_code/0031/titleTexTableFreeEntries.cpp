#include "common.h"

extern "C" {

int asdTMTexTableFreeEntry(int table);
int asdTMTexTableReleaseNode(int table, int index);

void titleTexTableFreeEntries(void)
{
    asdTMTexTableReleaseNode(0x2f, 0);
    asdTMTexTableFreeEntry(0x2f);
}

} /* extern "C" */
