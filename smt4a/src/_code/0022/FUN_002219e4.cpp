#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Orders priority records by their two signed bytes in descending order. */
s32 FUN_002219e4(const SignedBytePriority *left, const SignedBytePriority *right)
{
    s32 difference = right->primary - left->primary;
    if (difference == 0) {
        difference = right->secondary - left->secondary;
    }
    return difference;
}

} /* extern "C" */
