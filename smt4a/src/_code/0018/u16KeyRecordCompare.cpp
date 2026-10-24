#include "common.h"

extern "C" {

/* bsearch comparator: orders records by their leading u16 key. */
s32 u16KeyRecordCompare(const u16 *a, const u16 *b)
{
    return *a - *b;
}

} /* extern "C" */
