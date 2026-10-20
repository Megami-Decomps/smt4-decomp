#include "common.h"

extern "C" {

extern int dataTableGetEntry0102Value(u16 id);

typedef struct Entry {
    /* 0x0 */ u16 id;
    /* 0x2 */ u16 valid;
} Entry;

/* Orders invalid entries after valid ones; valid ones by the value dataTableGetEntry0102Value gives their id. */
u32 FUN_001f628c(Entry *a, Entry *b)
{
    u32 result;

    if (a->valid == 0) {
        if (b->valid == 0) {
            return 0;
        }
        return 1;
    }
    if (b->valid == 0) {
        result = 0xffffffff;
    } else {
        result = dataTableGetEntry0102Value(a->id) - dataTableGetEntry0102Value(b->id);
    }
    return result;
}

} /* extern "C" */
