#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Compares record keys. */
s32 FUN_00145c78(const UnsignedRecordKey32 *left, const UnsignedRecordKey32 *right)
{
    return left->key - right->key;
}

} /* extern "C" */
