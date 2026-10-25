/* Returns whether flag `bit` is set in the flag array. */
#include "common.h"
#include "shard/gameDataFlagTestBit.h"

extern "C" {

extern u8 *gameDataBlockGetArea2D68(void);

u8 gameDataFlagTestBit(u32 bit)
{
    u8 *flags = gameDataBlockGetArea2D68();
    s32 byte = bit / 8;
    s32 position = bit % 8;

    return (flags[byte] & (1 << position)) != 0;
}

}
