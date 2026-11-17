/* battle/btlUI.c (Shin Megami Tensei IV): the module global g_btlUi, whose `ui` member points at
 * the 0xF040-byte BtlUi block. g_btlUiBlock names that member on its own. */
#ifndef BATTLE_BTLUIGLOBAL_H
#define BATTLE_BTLUIGLOBAL_H

#include "battle/btlUI.h"

extern "C" {
extern BtlUiGlobals g_btlUi;  /* 0x439c88 */
extern BtlUi *g_btlUiBlock;   /* 0x439ca8: g_btlUi.ui */
}

#endif
