#include "common.h"

extern "C" {

int aocEntryGetSortOrder(...);

int FUN_0039fd24(u32 a, u32 b)
{
    int valueA = aocEntryGetSortOrder();
    int valueB = aocEntryGetSortOrder(b);

    return valueB - valueA;
}

} /* extern "C" */
