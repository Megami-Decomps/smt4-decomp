#include "common.h"

extern "C" {

void dataTableFree(int a);
void asdTMTexTableReleaseNode(int a, int b);
void asdTMTexTableFreeEntry(int index);

void FUN_002e1308(void)
{
    dataTableFree(31);
    asdTMTexTableReleaseNode(26, 0);
    asdTMTexTableFreeEntry(26);
}

} /* extern "C" */
