/* The battle's unit and entry getters (Apocalypse). battle/BtlGlobals.h includes this header; a unit that
 * declares the camera module's statics (BtlCameraStatics) includes only this one. */
#ifndef SMT4A_BATTLE_BTLENTRYLOOKUP_H
#define SMT4A_BATTLE_BTLENTRYLOOKUP_H

#include "common.h"
#include "battle/btlMain.h"
#include "battle/BtlUnitWork.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

/* The battle unit the script context `*reference` selects, NULL when it selects none. */
BtlUnitA *btlUnitGet(BtlMainStateA *const *reference);
/* The battle entry whose member id list contains `id`, NULL when none does. */
BtlCombatantEntryA *btlMainFindEntryByListedId(BtlMainStateA *state, s32 id);
/* The data block (BtlUnitDataA, entry + 0x164) of that entry, NULL when none. */
BtlUnitDataA *btlFindEntryBlockByMemberId(BtlMainStateA *state, s32 id);

}

#endif
