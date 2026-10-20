#include "shard/Shard004A.h"

extern "C" {

extern s32 dataTableGetEntry0102Value(u16 id);

/* Orders two records by dataTableGetEntry0102Value of their ids (ascending). */
s32 compareByRankAscending(u16 *a, u16 *b)
{
    s32 first = dataTableGetEntry0102Value(*a);
    s32 second = dataTableGetEntry0102Value(*b);

    return first - second;
}

} /* extern "C" */
