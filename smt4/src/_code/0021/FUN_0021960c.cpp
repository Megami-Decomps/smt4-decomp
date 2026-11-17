#include "common.h"
#include "gamedata/ConsumableRecord.h"

extern "C" {

struct Entry0021960c {
    /* 0x00 */ u16 id;
};

/* Comparator: the difference of the key bytes (+0x6F) of the records the two entries' ids refer to. */
s32 FUN_0021960c(Entry0021960c *a, Entry0021960c *b)
{
    ConsumableRecord *first = dataTable08Sub1GetRecord(a->id);
    ConsumableRecord *second = dataTable08Sub1GetRecord(b->id);

    return first->rank - second->rank;
}

}
