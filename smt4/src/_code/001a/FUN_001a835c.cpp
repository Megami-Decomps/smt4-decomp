#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Orders record pointers by their descending floating-point key. */
s32 FUN_001a835c(const FloatSortRecord *const *left, const FloatSortRecord *const *right)
{
    const FloatSortRecord *a = *left;
    const FloatSortRecord *b = *right;
    return (s32)(b->key - a->key);
}

} /* extern "C" */
