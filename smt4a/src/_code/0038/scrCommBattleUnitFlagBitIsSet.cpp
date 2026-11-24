#include "battle/BtlEntryLookup.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlScript.h"
#include "gamedata/SaveSlotRecord.h"
#include "script/ScriptArgs.h"

extern "C" {

s32 bitsAt60Test(void *slot, u32 flag);

enum { SAVED_UNIT_ID_BASE = 109 };

/* Tests an indexed bit of a battle entry's flag halfword, or of a saved unit record. */
s32 scrCommBattleUnitFlagBitIsSet(void)
{
    s32 id = scrGetArg(0);
    u16 bit = scrGetArg(1);

    btlUnitGet((BtlMainStateA *const *)g_btlScriptUnit);
    if (id < SAVED_UNIT_ID_BASE) {
        BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), id);
        if (entry != NULL) {
            if (entry->data.statusFlags & (1u << bit)) {
                scrSetResult(1);
            } else {
                scrSetResult(0);
            }
            return 1;
        }
        scrSetResult(0);
    } else {
        if (bitsAt60Test(gameGetSlotRecord(id - SAVED_UNIT_ID_BASE), bit)) {
            scrSetResult(1);
        } else {
            scrSetResult(0);
        }
    }
    return 1;
}

} /* extern "C" */
