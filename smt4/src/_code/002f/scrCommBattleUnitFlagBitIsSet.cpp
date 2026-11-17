/* NON_MATCHING: the bit tests and the shared set/clear blocks now match; retail places the shared `bl scrSetResult; b <return>` block right after the entry test (the build puts it at the end with its own return). */
#include "battle/BattleUnitSlot.h"
#include "battle/BtlEntryLookup.h"
#include "battle/BtlMainAccess.h"
#include "gamedata/FlagBitTests.h"
#include "script/ScriptArgs.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {


extern u32 g_btlScriptUnit; /* 0x43427c */

/* Script command: tests flag bit arg1 of the battle entry with listed id arg0 (ids from 0x6d on are game unit records). */
s32 scrCommBattleUnitFlagBitIsSet(void)
{
    s32 id = scrGetArg(0);
    u32 bit = (u16)scrGetArg(1);
    bool set;

    btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit));
    if (id < 0x6d) {
        BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), id);

        if (entry != NULL) {
            set = entry->data.statusFlags & (1 << bit);
        } else {
            scrSetResult(0);
            return 1;
        }
    } else {
        set = flagWordTestBit(gameGetUnitRecord(id - 0x6d), bit);
    }
    if (!set) {
        scrSetResult(0);
    } else {
        scrSetResult(1);
    }
    return 1;
}

} /* extern "C" */
