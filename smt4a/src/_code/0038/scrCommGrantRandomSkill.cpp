#include "battle/BtlMainAccess.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

void gameSavedFlagSet(s16 skill);
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *battle, u32 id);
s32 nkmGrowthLearnRandomSkill(u32 record);
void scrSetResult(s32 result);
s32 scrGetArg(s32 index);

u32 scrCommGrantRandomSkill(void)
{
    s32 id = scrGetArg(0);
    u32 record;
    if (id < 0x6d) {
        btlGetMainState();
        record = FUN_003f0e20(btlGetMainState(), id)->sourceId;
    } else {
        record = reinterpret_cast<u32>(gameGetSlotRecord(id - 0x6d));
    }
    s32 skill = nkmGrowthLearnRandomSkill(record);
    if (skill > 0) {
        gameSavedFlagSet(skill);
    }
    scrSetResult(skill);
    return 1;
}

} /* extern "C" */
