/* The battle module's globals and object getters (Apocalypse). */
#ifndef SMT4A_BATTLE_BTLGLOBALS_H
#define SMT4A_BATTLE_BTLGLOBALS_H

#include "common.h"
#include "battle/btlMain.h"
#include "battle/btlCamera.h"
#include "battle/btlAction.h"
#include "battle/BtlUnitWork.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlEntryLookup.h"

extern "C" {

extern BtlActionGlobalsA g_btlAction; /* 0x571138 */
extern BtlCameraA *g_btlCamera;       /* 0x571508 */
extern BtlMainGlobalsA g_btlMain;     /* 0x573920: the battle state, resident files and entry masks */

}

#endif
