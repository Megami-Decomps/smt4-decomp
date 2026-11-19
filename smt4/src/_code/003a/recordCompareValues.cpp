#include "common.h"

extern "C" {

int aocEntryGetSortOrder(...);

int recordCompareValues(u32 a, u32 b)
{
    int valueA = aocEntryGetSortOrder();
    int valueB = aocEntryGetSortOrder(b);

    return valueA - valueB;
}

} /* extern "C" */
