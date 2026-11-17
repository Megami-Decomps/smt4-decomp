/* The battle module's globals and object getters (Shin Megami Tensei IV). */
#ifndef SMT4_BATTLE_BTLGLOBALS_H
#define SMT4_BATTLE_BTLGLOBALS_H

#include "common.h"
#include "battle/btlMain.h"
#include "battle/BtlMainGlobals.h"
#include "battle/btlCamera.h"
#include "battle/btlAction.h"
#include "battle/BattleUnitSlot.h"
#include "shard/W4_Match6_BtlEntry.h"

extern "C" {

extern BtlActionGlobals g_btlAction;  /* 0x434278 */
extern BtlCamera *g_btlMain;          /* 0x4342c8: the battle camera (Apocalypse's g_btlCamera) */
extern BtlMainGlobals g_btlMainState; /* 0x435d90: the battle state and resident files (Apocalypse's g_btlMain) */

/* The battle entry whose member id list contains `id`, NULL when none does. */
BtlEntry *btlMainFindEntryByListedId(BtlMainState *state, s32 id);
/* The data block (BtlUnitData, entry + 0xCC) of that entry, NULL when none. */
BtlUnitData *btlFindEntryBlockByMemberId(BtlMainState *state, s32 id);

}

#endif
