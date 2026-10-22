#include "common.h"

extern "C" {

/* Compares halfword keys for the record lookup. */
s32 dataCompareLookupHalfwordKeys(const u16 *left, const u16 *right)
{
    return *left - *right;
}

} /* extern "C" */
