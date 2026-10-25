#include "common.h"

/* bsearch comparator for add-on lookup records: orders by their leading u16 id. */
extern "C" s32 lookupRecordCompareIds(const u16 *first, const u16 *second)
{
    return *first - *second;
}
