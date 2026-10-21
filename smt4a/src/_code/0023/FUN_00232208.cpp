/* NON_MATCHING: armcc loads the right record and key before the left; retail loads the left record first. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Orders record pointers by their descending floating-point key. */
s32 FUN_00232208(const FloatSortRecord *const *left, const FloatSortRecord *const *right)
{
    return (s32)((*right)->key - (*left)->key);
}

} /* extern "C" */
