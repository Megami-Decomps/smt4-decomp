#ifndef GAMEDATA_GAME_FLAG_WRITE_A_H
#define GAMEDATA_GAME_FLAG_WRITE_A_H

#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"

extern "C" void encounterRefreshOnFlagChange(u32 flag, u32 value);

/* Notifies the encounter system before setting or clearing a saved game flag. */
static __inline void gameFlagWrite(u32 flag, u32 value)
{
    u8 *bits = gameFlagBlockGet();
    encounterRefreshOnFlagChange(flag, value);
    u32 shift = flag & 7;
    u32 index = flag >> 3;
    if (value) {
        bits[index] |= 1 << shift;
    } else {
        s32 keep = ~(1 << shift);
        bits[index] &= keep;
    }
}

#endif
