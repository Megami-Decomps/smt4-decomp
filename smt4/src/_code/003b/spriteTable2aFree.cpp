#include "common.h"

extern "C" {

int asdTMTexTableFreeEntry(int table);
int FUN_002ae898(int table, int index);

void spriteTable2aFree(void)
{
    FUN_002ae898(0x2a, 0);
    asdTMTexTableFreeEntry(0x2a);
}

} /* extern "C" */
