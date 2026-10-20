#include "common.h"

extern "C" {

typedef struct Record0036024c {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u8 rank;
} Record0036024c;

Record0036024c *contentEntryFindById2(u32 id);

/* Sort comparator over record ids: lower rank first. */
s32 FUN_0036024c(const u16 *first, const u16 *second)
{
    Record0036024c *firstRecord = contentEntryFindById2(*first);
    Record0036024c *secondRecord = contentEntryFindById2(*second);

    return firstRecord->rank - secondRecord->rank;
}

} /* extern "C" */
