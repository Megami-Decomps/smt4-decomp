/* The indexed flag bytes of the saved game data's second flag block (smt4a). */
#ifndef SMT4A_GAMEDATA_FLAGSB_H
#define SMT4A_GAMEDATA_FLAGSB_H

#include "common.h"

extern "C" {

/* The flag byte `index` of the second flag block. */
u8 *flagsBGetPtr(s32 index);

/* Sets the low two flag bits of flag byte `index` and clears bit 2. */
void flagsBSetStateBits(s32 index);

/* Bit 0, bit 1 and bit 2 of flag byte `index` of the second flag block. */
u8 flagsBGetBit0(s32 index);
u32 flagsBGetBit1(s32 index);
u32 flagsBGetBit2(s32 index);

/* Sets bit 2 of flag byte `index` of the second flag block to `enabled`. */
void flagsBSetBit2(s32 index, s8 enabled);

/* Stores `value` (0/1) into bit 1 of flag byte `index` of the second flag block. */
void gameFlagsSetAlternateMode(s32 index, s8 value);

} /* extern "C" */

#endif
