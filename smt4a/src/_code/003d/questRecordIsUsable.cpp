/* NON_MATCHING: the quest ID and record occupy swapped saved registers, and late-record lookup sets up its argument after the range branch. */
#include "quest_center/QuestRecordA.h"
#include "quest_center/QuestUnlock.h"
#include "game/GameStateA.h"
#include "shard/W5_W5Match7_SceneState.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "gamedata/GameDataAccess.h"

extern "C" {

#define ITEM_GROUP_KEY 9
#define ITEM_FIRST_LATE_ID 0x15E
#define GAME_MODE_KEY_ITEMS_LOCKED 24
#define GAME_FLAG_ITEMS_LOCKED 0x560


/* Returns whether item `id` is currently usable. */
u32 questRecordIsUsable(u32 id)
{
    QuestRecordA *record;
    QuestRecordA *late;

    if (!gameUnlockRecordRequirementsMet(id)) {
        return 0;
    }
    record = questDataGetRecord(id);
    if (gameFlagEntryGetBit(id, 3) && record->kind != ITEM_GROUP_KEY) {
        return 0;
    }
    if (id >= ITEM_FIRST_LATE_ID && (late = questDataGetRecord(id)) != NULL
        && late->kind == ITEM_GROUP_KEY && g_gameState.mapId == GAME_MODE_KEY_ITEMS_LOCKED) {
        return 0;
    }
    if (record->lockFlag != 0 && gameFlagIsSet(record->lockFlag)
        && (record->unlockFlag == 0 || !gameFlagIsSet(record->unlockFlag))) {
        return 0;
    }
    if (gameFlagIsSet(GAME_FLAG_ITEMS_LOCKED)) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
