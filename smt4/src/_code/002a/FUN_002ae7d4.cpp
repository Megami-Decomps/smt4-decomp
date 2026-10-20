#include "common.h"

extern "C" {

extern void asdTMTexTableReleaseNode(void);
extern void asdTMTexTableFreeEntry(int index);
void FUN_002ae7d4(void)
{
    asdTMTexTableReleaseNode();
    asdTMTexTableFreeEntry(36);
}

} /* extern "C" */
