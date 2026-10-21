#include "common.h"

extern "C" {

/* Compares demon record identifiers. */
s32 devilCompareRecordIds(const u16 *left, const u16 *right)
{
    return *left - *right;
}

} /* extern "C" */
