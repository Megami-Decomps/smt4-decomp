/* battle/btlUI.c (Apocalypse): the module global g_btlUi, whose `ui` member points at the
 * 0x12FD0-byte BtlUiA block. g_btlUiBlock names that member on its own. */
#ifndef BATTLE_BTLUIGLOBAL_H
#define BATTLE_BTLUIGLOBAL_H

#include "battle/btlUI.h"

extern "C" {
extern BtlUiGlobalsA g_btlUi;  /* 0x57a9b8 */
extern BtlUiA *g_btlUiBlock;   /* 0x57a9c8: g_btlUi.ui */

void btlUiCopyStatePairs(BtlUiA *owner, u8 *confirmed, u64 *targets, u64 *extra);
} /* extern "C" */

#endif
