#include "map/mapDepart.h"
#include "quest_center/QuestRecord.h"
#include "quest_center/QuestStatus.h"
#include "game/GameState.h"

struct QuestRuntimeStatus {
    u8 flags;
    u8 unk01[3];

    u32 completed() const { return (flags & 8) >> 3; }
};

extern "C" {
u32 questRequirementsMet(u16 questId);
u32 questIsCompleted(s32 questId);
s32 gameFlagIsSet(u32 flag);

// The body of recordCategoryNineIsActiveInMode24, which retail inlines here.
static __inline s32 questIsModeNineRecord(u32 recordId)
{
    if (recordId < 0x15e) {
        return 0;
    }
    const QuestRecord *record = questDataGetRecord(recordId);
    if (record == NULL) {
        return 0;
    }
    if (record->kind == 9 && g_gameState.mapId == 24) {
        return 1;
    }
    return 0;
}

bool questIsOfferable(u16 questId)
{
    if (questRequirementsMet(questId) == 0) {
        return false;
    }
    const QuestRecord *record = questDataGetRecord(questId);
    if (record->excludedQuests[0] != 0 && questIsCompleted(record->excludedQuests[0]) != 0) {
        return false;
    }
    if (record->excludedQuests[1] != 0 && questIsCompleted(record->excludedQuests[1]) != 0) {
        return false;
    }
    u32 completed = reinterpret_cast<const QuestRuntimeStatus *>(questGetRuntimeStatus(questId))->completed();
    if (completed != 0 && (record->flags & 2) == 0) {
        return false;
    }
    if (questId >= 0x15e) {
        if (questIsModeNineRecord(questId)) {
            return false;
        }
    } else {
        switch (record->route) {
        case 0:
            if (gameFlagIsSet(0x223) || gameFlagIsSet(0x224) || gameFlagIsSet(0x295)) {
                return false;
            }
            break;
        case 1:
            if (!gameFlagIsSet(0x223)) {
                return false;
            }
            break;
        case 2:
            if (!gameFlagIsSet(0x224)) {
                return false;
            }
            break;
        }
    }
    if ((record->hideStartFlag == 0 || !gameFlagIsSet(record->hideStartFlag) ||
         (record->hideEndFlag != 0 && gameFlagIsSet(record->hideEndFlag))) && !gameFlagIsSet(0x560)) {
        return true;
    }
    return false;
}
}
