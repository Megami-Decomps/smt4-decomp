#include "common.h"

extern "C" {

s32 dataTableGetEntry0102Value(u16 id);

typedef struct Ref {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 valid;
} Ref;

/* Orders two references: an invalid one sorts after a valid one (returns 1 / -1, 0 when both are invalid); two valid ones compare by dataTableGetEntry0102Value of their ids. */
u32 entryCompareByDataValue(Ref *a, Ref *b)
{
    u32 result;
    s32 first;
    s32 second;

    if (a->valid == 0) {
        if (b->valid == 0) {
            return 0;
        }
        return 1;
    }
    if (b->valid == 0) {
        result = 0xFFFFFFFF;
    } else {
        first = dataTableGetEntry0102Value(a->id);
        second = dataTableGetEntry0102Value(b->id);
        result = first - second;
    }
    return result;
}

} /* extern "C" */
