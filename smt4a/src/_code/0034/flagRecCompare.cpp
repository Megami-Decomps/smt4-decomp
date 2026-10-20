#include "shard/Shard0034.h"

extern "C" {

extern u16 dataTableGetEntry0102Value(u32 id);

/* Comparison of two records: unflagged ones sort first, otherwise by dataTableGetEntry0102Value of the id. */
s32 flagRecCompare(FlagRec *a, FlagRec *b)
{
    s32 result;

    if (a->flag == 0) {
        if (b->flag == 0) {
            return 0;
        }
        return 1;
    }
    if (b->flag == 0) {
        result = -1;
    } else {
        s32 rankA = dataTableGetEntry0102Value(a->id);
        s32 rankB = dataTableGetEntry0102Value(b->id);

        result = rankB - rankA;
    }
    return result;
}

} /* extern "C" */
