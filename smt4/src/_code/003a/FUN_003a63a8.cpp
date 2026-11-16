#include "common.h"

extern "C" {

int aocEntryGetSortOrder(...);

int FUN_003a63a8(u32 a, u32 b)
{
    int valueA = aocEntryGetSortOrder();
    int valueB = aocEntryGetSortOrder(b);

    return valueA - valueB;
}

} /* extern "C" */
