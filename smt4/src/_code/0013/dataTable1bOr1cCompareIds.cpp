#include "common.h"

extern "C" {

/* Compares table record identifiers. */
s32 dataTable1bOr1cCompareIds(const u16 *left, const u16 *right)
{
    return *left - *right;
}

} /* extern "C" */
