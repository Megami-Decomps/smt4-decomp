#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Orders record pointers by their ascending floating-point key. */
s32 FUN_00221bf4(const FloatSortRecord *const *left, const FloatSortRecord *const *right)
{
    return (s32)((*left)->key - (*right)->key);
}

} /* extern "C" */
