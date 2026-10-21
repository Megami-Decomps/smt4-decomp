#include "shard/W5_W5Match2_ScalarRecord.h"

extern "C" {

/* Order records by their first unsigned halfword. */
s32 mapRecordCompareValue(const ScalarRecord *left, const ScalarRecord *right)
{
    return left->value - right->value;
}

}
