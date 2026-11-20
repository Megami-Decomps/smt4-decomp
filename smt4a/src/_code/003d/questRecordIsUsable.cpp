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


/* Body of recordCategoryNineIsActiveInMode24 (proven in smt4, inlined in smt4 questIsOfferable). */
static __inline s32 questIsModeNineRecord(u32 recordId)
{
    if (recordId < ITEM_FIRST_LATE_ID) {
        return 0;
    }
    const QuestRecordA *record = questDataGetRecord(recordId);
    if (record == NULL) {
        return 0;
    }
    if (record->kind == ITEM_GROUP_KEY && g_gameState.mapId == GAME_MODE_KEY_ITEMS_LOCKED) {
        return 1;
    }
    return 0;
}

/* Returns whether item `id` is currently usable. */
u32 questRecordIsUsable(u32 id)
{
    if (!gameUnlockRecordRequirementsMet(id)) {
        return 0;
    }
    const QuestRecordA *record = questDataGetRecord(id);
    if (gameFlagEntryGetBit(id, 3) && record->kind != ITEM_GROUP_KEY) {
        return 0;
    }
    if (id >= ITEM_FIRST_LATE_ID) {
        if (questIsModeNineRecord(id)) {
            return 0;
        }
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
