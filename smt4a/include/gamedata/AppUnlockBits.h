#ifndef SMT4A_GAMEDATA_APPUNLOCKBITS_H
#define SMT4A_GAMEDATA_APPUNLOCKBITS_H

#include "common.h"

extern "C" {

u8 *gameDataBlockGetArea2D68(void);

/* Tests the bought-app bit; this is the inline body of gameDataFlagTestBit. */
static __inline u8 appUnlockBitIsSet(u32 bit)
{
    u8 *flags = gameDataBlockGetArea2D68();
    s32 byte = bit / 8;
    s32 position = bit % 8;
    return (flags[byte] & (1 << position)) != 0;
}

} /* extern "C" */

#endif
