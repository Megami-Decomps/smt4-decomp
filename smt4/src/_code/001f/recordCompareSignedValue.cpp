#include "shard/W5_W5Match2_ScalarRecord.h"

extern "C" {

/* Order records by their first signed halfword. */
s32 recordCompareSignedValue(const ScalarRecord *left, const ScalarRecord *right)
{
    return (s16)left->value - (s16)right->value;
}

}
