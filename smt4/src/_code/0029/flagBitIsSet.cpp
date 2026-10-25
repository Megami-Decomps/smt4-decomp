#include "common.h"
#include "util/CalleeContracts.h"
#include "shard/flagBitIsSet.h"

extern "C" {

u8 *gameDataGetFlagBits(void);

/* Tests flag number `bit` in the flag set returned by gameDataGetFlagBits. */
u8 flagBitIsSet(u32 bit)
{
    u8 *bits = gameDataGetFlagBits();
    u32 byte = bit >> 3;
    u32 shift = bit & 7;

    return (bits[byte] & (1 << shift)) != 0;
}

} /* extern "C" */
