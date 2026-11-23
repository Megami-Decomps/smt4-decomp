/* Returns whether flag `bit` is set in the flag array. */
#include "gamedata/AppUnlockBits.h"
#include "shard/W6_W6Match8_StatGrowth.h"

extern "C" {

u8 gameDataFlagTestBit(u32 bit)
{
    u8 *flags = gameDataBlockGetArea2D68();
    s32 byte = bit / 8;
    s32 position = bit % 8;

    return (flags[byte] & (1 << position)) != 0;
}

}
