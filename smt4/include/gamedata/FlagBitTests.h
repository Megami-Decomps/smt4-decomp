/* Bit tests on game flag words (smt4). */
#ifndef SMT4_GAMEDATA_FLAGBITTESTS_H
#define SMT4_GAMEDATA_FLAGBITTESTS_H

#include "common.h"

extern "C" {

/* Whether bit `bit` of the flag halfword at +0x44 of `record` is set. */
u8 flagWordTestBit(const void *record, u32 bit);

/* Whether bit `index` of the map block's bit set is set. */
u8 mapBlockBitTest(s32 index);

} /* extern "C" */

#endif
