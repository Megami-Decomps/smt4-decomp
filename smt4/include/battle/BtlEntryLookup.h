/* The battle's unit and entry getters (Shin Megami Tensei IV). battle/BtlGlobals.h includes this header; a
 * unit that declares the camera module's statics (BtlCameraStatics) includes only this one. */
#ifndef SMT4_BATTLE_BTLENTRYLOOKUP_H
#define SMT4_BATTLE_BTLENTRYLOOKUP_H

#include "common.h"
#include "battle/btlMain.h"
#include "battle/BattleUnitSlot.h"
#include "shard/W4_Match6_BtlEntry.h"

extern "C" {

/* The battle entry whose member id list contains `id`, NULL when none does. */
BtlEntry *btlMainFindEntryByListedId(BtlMainState *state, s32 id);
/* The data block (BtlUnitData, entry + 0xCC) of that entry, NULL when none. */
BtlUnitData *btlFindEntryBlockByMemberId(BtlMainState *state, s32 id);

}

#endif
