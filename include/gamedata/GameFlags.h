#ifndef GAMEDATA_GAME_FLAGS_H
#define GAMEDATA_GAME_FLAGS_H

#include "common.h"

/* Set or clear one bit in a packed game flag block. */
static __inline void flagBitWrite(u8 *flags, u32 id, s32 value)
{
    u32 index = id >> 3;
    u32 bits = flags[index];
    u32 mask = 1u << (id & 7);
    if (value != 0) {
        bits |= mask;
    } else {
        bits &= ~mask;
    }
    flags[index] = bits;
}

/* Set a saved game flag and optionally dispatch its change notification. */
extern "C" void gameFlagSetValue(u32 id, s32 value, s32 notify);

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
u32 FUN_003bf87c(void);
#ifdef __cplusplus
}
#endif

#endif
