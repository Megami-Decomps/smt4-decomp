#include "shard/Shard0034.h"

extern "C" {

extern SwapSlot DAT_005b3268;

/* Stores a new value, returning the previous one. */
u32 swapSlotExchange(u32 value)
{
    u32 previous = DAT_005b3268.value;

    DAT_005b3268.value = value;
    return previous;
}

} /* extern "C" */
