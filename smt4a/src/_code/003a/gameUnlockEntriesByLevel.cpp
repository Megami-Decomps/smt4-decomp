#include "common.h"
#include "quest_center/QuestRecordA.h"
#include "gamedata/GameFlags.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

s32 gameFlagEntryGetBit(u16 id, u32 bit);
s32 gameUnlockRecordRequirementsMet(u16 id);
u32 itemDataGetValue(u16 id);

void FUN_00417b70(u16 id);

/* Unlocks every entry 100..399 whose required level the player has reached. */
s32 gameUnlockEntriesByLevel(void)
{
    u16 level = gameGetPlayerData()->level;
    s32 id;

    for (id = 100; id < 400; id++) {
        if (gameFlagEntryGetBit(id, 0) == 0 && gameUnlockRecordRequirementsMet(id) != 0) {
            QuestRecordA *record = questDataGetRecord((u16)id);
            if (record != NULL && record->requiredLevel != 0 && record->requiredLevel <= level) {
                u32 flag = itemDataGetValue(id);
                if (flag != 0) {
                    gameFlagSetValue(flag, 1, 1);
                }
                FUN_00417b70(id);
            }
        }
    }
    return 1;
}

} /* extern "C" */
