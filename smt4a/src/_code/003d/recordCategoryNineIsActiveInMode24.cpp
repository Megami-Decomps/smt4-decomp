#include "quest_center/QuestRecordA.h"
#include "game/GameStateA.h"

// Category-nine records are active only in game mode 24.
extern "C" s32 recordCategoryNineIsActiveInMode24(u32 recordId)
{
    if (recordId < 0x15e) {
        return 0;
    }
    QuestRecordA* record = questDataGetRecord(recordId);
    if (record == NULL) {
        return 0;
    }
    if (record->kind == 9 && g_gameState.mapId == 24) {
        return 1;
    }
    return 0;
}
