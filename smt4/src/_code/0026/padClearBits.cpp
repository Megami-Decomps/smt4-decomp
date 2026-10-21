#include "shard/PadState.h"

extern "C" {

extern PadState *gameGetPlayerData(void);

/* Clears the given bits of the pad's halfword at +0x72. */
void padClearBits(u16 mask)
{
    PadState *pad = gameGetPlayerData();

    pad->unk72 = pad->unk72 & ~mask;
}

} /* extern "C" */
