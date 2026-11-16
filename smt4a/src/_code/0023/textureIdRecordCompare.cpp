#include "common.h"

extern "C" {

/* Compares record keys for sorting. */
s32 textureIdRecordCompare(const s16 *left, const s16 *right)
{
    return *left - *right;
}

} /* extern "C" */
