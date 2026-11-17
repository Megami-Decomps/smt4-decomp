/* The battle module's globals and object getters (Apocalypse). */
#ifndef SMT4A_BATTLE_BTLGLOBALS_H
#define SMT4A_BATTLE_BTLGLOBALS_H

#include "common.h"
#include "battle/btlMain.h"
#include "battle/btlCamera.h"
#include "battle/btlAction.h"
#include "battle/BtlUnitWork.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

extern BtlActionGlobalsA g_btlAction; /* 0x571138 */
extern BtlCameraA *g_btlCamera;       /* 0x571508 */
extern BtlMainGlobalsA g_btlMain;     /* 0x573920: the battle state, resident files and entry masks */

/* The battle unit the script context `*reference` selects, NULL when it selects none. */
BtlUnitA *btlUnitGet(BtlMainStateA *const *reference);
/* The battle entry whose member id list contains `id`, NULL when none does. */
BtlCombatantEntryA *btlMainFindEntryByListedId(BtlMainStateA *state, s32 id);
/* The data block (BtlUnitDataA, entry + 0x164) of that entry, NULL when none. */
BtlUnitDataA *btlFindEntryBlockByMemberId(BtlMainStateA *state, s32 id);

}

#endif
