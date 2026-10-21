#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Reads an optional nested value. */
u32 FUN_00141af8(const OptionalValueOwner *owner)
{
    return owner->value != NULL ? *owner->value : 0;
}

} /* extern "C" */
