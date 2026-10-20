#include "common.h"

extern "C" {

int asdTMTexTableFreeEntry(int table);
int FUN_002ae898(int table, int index);

void FUN_00310098(void)
{
    FUN_002ae898(0x2f, 0);
    asdTMTexTableFreeEntry(0x2f);
}

} /* extern "C" */
