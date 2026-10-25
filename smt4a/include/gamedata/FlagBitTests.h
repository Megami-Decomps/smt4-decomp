/* Bit and value tests on the game flags block (smt4a). */
#ifndef SMT4A_GAMEDATA_FLAGBITTESTS_H
#define SMT4A_GAMEDATA_FLAGBITTESTS_H

#include "common.h"

extern "C" {

/* Whether bit `index` of the game flags block's bit set is set. */
u8 gameFlagsBitTest(s32 index);

/* Signed byte `index` of the flag value table in the game flags block. */
s8 gameFlagsValueGet(s32 index);

/* Bit 7 of the flag byte of the state entry of the key pair (`groupId`, `itemId`). */
u8 flagsBit7Get(u32 groupId, u32 itemId);

} /* extern "C" */

#endif
