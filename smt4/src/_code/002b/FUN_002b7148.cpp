#include "common.h"
#include "shard/W6_W6Match5_SecondarySort.h"


extern "C" {
/* Reads or updates the current object state. */
void FUN_002bc7f4(u32 parameter, u32 *value);
u32 FUN_002b7148(void)
{
    u32 cursor;
    FUN_002bc7f4(0x208, &cursor);
    return cursor;
}
}
