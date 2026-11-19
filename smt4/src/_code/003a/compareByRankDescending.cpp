#include "common.h"

extern "C" {

extern int dataTableGetEntry0102Value(u16 id);

int compareByRankDescending(u16 *a, u16 *b)
{
    int valueA = dataTableGetEntry0102Value(*a);
    int valueB = dataTableGetEntry0102Value(*b);

    return valueB - valueA;
}

} /* extern "C" */
