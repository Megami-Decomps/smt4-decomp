#include "battle/BattleUnitSlot.h"
#include "battle/BtlEntryLookup.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlScript.h"
#include "gamedata/FlagBitTests.h"
#include "script/ScriptArgs.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {

/* Tests an indexed bit of a battle entry's flag halfword, or of a saved unit record. */
s32 scrCommBattleUnitFlagBitIsSet(void)
{
    s32 id = scrGetArg(0);
    u32 bit = (u16)scrGetArg(1);

    btlUnitGet((BtlMainState *const *)g_btlScriptUnit);
    if (id < BTL_ENTRY_COUNT) {
        BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), id);
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
        if (flagWordTestBit(gameGetUnitRecord(id - BTL_ENTRY_COUNT), bit)) {
            scrSetResult(1);
        } else {
            scrSetResult(0);
        }
    }
    return 1;
}

} /* extern "C" */
