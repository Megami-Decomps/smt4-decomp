#include "common.h"

extern "C" {

extern void FUN_002ae898(void);
extern void asdTMTexTableFreeEntry(int index);
void FUN_002ae7d4(void)
{
    FUN_002ae898();
    asdTMTexTableFreeEntry(36);
}

} /* extern "C" */
