#include "common.h"

extern "C" {

extern void asdTMTexTableReleaseNode(int index, int node);
extern void asdTMTexTableFreeEntry(int index);
void FUN_002ae7cc(void)
{
    asdTMTexTableReleaseNode(36, 0);
    asdTMTexTableFreeEntry(36);
}

} /* extern "C" */
