/* NON_MATCHING: retail loads the entry's flag halfword into r1 and branches to two shared 'mov r0,#1/#0; b scrSetResult' blocks at the end of the function; the build tests with ands and falls through */
#include "battle/BattleUnitSlot.h"
#include "battle/BtlMainAccess.h"
#include "gamedata/FlagBitTests.h"
#include "script/ScriptArgs.h"

extern "C" {

typedef struct MainEntry002f7cc4 {
    /* 0x000 */ u8 unk000[0x1c6];
    /* 0x1c6 */ u16 flagBits;
} MainEntry002f7cc4;

MainEntry002f7cc4 *btlMainFindEntryByListedId(void *state, s32 id);
void *gameGetUnitRecord(s32 index);

extern u32 g_btlScriptUnit; /* 0x43427c */

/* Script command: tests flag bit arg1 of the battle entry with listed id arg0 (ids from 0x6d on are game unit records). */
s32 scrCommBattleUnitFlagBitIsSet(void)
{
    s32 id = scrGetArg(0);
    u32 bit = (u16)scrGetArg(1);
    s32 set;

    btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit));
    if (id < 0x6d) {
        MainEntry002f7cc4 *entry = btlMainFindEntryByListedId(btlGetMainState(), id);

        if (entry == NULL) {
            scrSetResult(0);
            return 1;
        }
        if (entry->flagBits & (1 << bit)) {
            set = 1;
        } else {
            set = 0;
        }
    } else {
        if (flagWordTestBit(gameGetUnitRecord(id - 0x6d), bit) != 0) {
            set = 1;
        } else {
            set = 0;
        }
    }
    scrSetResult(set);
    return 1;
}

} /* extern "C" */
