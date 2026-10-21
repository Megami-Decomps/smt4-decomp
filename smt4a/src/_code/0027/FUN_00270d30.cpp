#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Orders records by their integer-truncated primary and secondary keys. */
s32 FUN_00270d30(const FloatPriorityRecord *left, const FloatPriorityRecord *right)
{
    s32 difference = (s32)left->primary - (s32)right->primary;
    if (difference == 0) {
        difference = (s32)left->secondary - (s32)right->secondary;
    }
    return difference;
}

} /* extern "C" */
