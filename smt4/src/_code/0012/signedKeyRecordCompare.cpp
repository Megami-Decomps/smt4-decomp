#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Orders records by their signed key. */
s32 signedKeyRecordCompare(const SignedRecordKey32 *left, const SignedRecordKey32 *right)
{
    return left->key - right->key;
}

} /* extern "C" */
