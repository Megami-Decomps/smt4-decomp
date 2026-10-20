#include "common.h"

extern "C" {

typedef struct Record0021963c {
    /* 0x00 */ u8 unk00[0x6f];
    /* 0x6f */ u8 rank;
} Record0021963c;

Record0021963c *dataTable08Sub1GetRecord(u32 id);

/* Sort comparator over record ids: lower rank first. */
s32 dataTable08Sub1CompareRank(const u16 *first, const u16 *second)
{
    Record0021963c *firstRecord = dataTable08Sub1GetRecord(*first);
    Record0021963c *secondRecord = dataTable08Sub1GetRecord(*second);

    return firstRecord->rank - secondRecord->rank;
}

} /* extern "C" */
