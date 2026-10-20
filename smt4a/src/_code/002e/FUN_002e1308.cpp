#include "common.h"

extern "C" {

void FUN_001add24(int a);
void FUN_0019a7f4(int a, int b);
void asdTMTexTableFreeEntry(int index);

void FUN_002e1308(void)
{
    FUN_001add24(31);
    FUN_0019a7f4(26, 0);
    asdTMTexTableFreeEntry(26);
}

} /* extern "C" */
