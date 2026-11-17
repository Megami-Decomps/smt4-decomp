/* Script command: result = the halfword at +0x46 of the unit the argument names (below 109: through the battle state, else the table entry argument - 109). Returns 1. */
#include "battle/BtlMainAccess.h"
#include "common.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {


struct BattleSlot002cfd90 {
    /* 0x000 */ u8 unk000[0x27c];
    /* 0x27c */ StatBlock *unit;
};

u32 scrGetArg(u32 index);
void scrSetResult(u32 value);
BattleSlot002cfd90 *btlMainFindEntryByListedId(void *state, u32 index);

u32 scrCommGetUnitValue(void)
{
    s32 arg = scrGetArg(0);
    StatBlock *unit;

    if (arg < 109) {
        unit = btlMainFindEntryByListedId(static_cast<void *>(btlGetMainState()), arg)->unit;
    } else {
        unit = gameGetUnitRecord(arg - 109);
    }
    scrSetResult(unit->id);
    return 1;
}

}
