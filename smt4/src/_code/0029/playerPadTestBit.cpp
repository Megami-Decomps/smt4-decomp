#include "shard/PadState.h"

extern "C" {

extern PadState *gameGetPlayerData(void);

/* Whether bit `bit` of the pad's halfword at +0x72 is set. */
u8 playerPadTestBit(u32 bit)
{
    PadState *pad = gameGetPlayerData();

    return ((u32)pad->unk72 & (1 << (bit & 0xff))) != 0;
}

} /* extern "C" */
