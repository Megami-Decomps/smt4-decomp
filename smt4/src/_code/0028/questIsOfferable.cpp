/* NON_MATCHING: questId/record saved registers are swapped (retail r5/r6) and retail predicates `mov r0, questId` before the id >= 0x15e branch. */
#include "map/mapDepart.h"
#include "shard/W6_W6Match5_SecondarySort.h"

struct QuestAvailabilityRecord {
    struct Metadata {
        u16 id;
        u8 unk02[4];
        u8 kind;
        u8 flags;
    };
    union {
        SecondarySortRecord prefix;
        Metadata metadata;
    };
    /* 0x154 */ u8 unk154[0x56];
    /* 0x1aa */ u16 excludedQuests[2];
    /* 0x1ae */ u16 route;
    /* 0x1b0 */ u16 hideStartFlag;
    /* 0x1b2 */ u16 hideEndFlag;
};

struct QuestRuntimeStatus {
    u8 flags;
    u8 unk01[3];

    u32 completed() const { return (flags & 8) >> 3; }
};

extern "C" {
extern GameState g_gameState;
u32 questRequirementsMet(u16 questId);
const QuestRuntimeStatus *questGetRuntimeStatus(u16 questId);
u32 questIsCompleted(s32 questId);
s32 gameFlagIsSet(u32 flag);

bool questIsOfferable(u16 questId)
{
    if (questRequirementsMet(questId) == 0) {
        return false;
    }
    const QuestAvailabilityRecord *record = reinterpret_cast<const QuestAvailabilityRecord *>(dataTable1bOr1cGetRecord(questId));
    if (record->excludedQuests[0] != 0 && questIsCompleted(record->excludedQuests[0]) != 0) {
        return false;
    }
    if (record->excludedQuests[1] != 0 && questIsCompleted(record->excludedQuests[1]) != 0) {
        return false;
    }
    u32 completed = questGetRuntimeStatus(questId)->completed();
    if (completed != 0 && (record->metadata.flags & 2) == 0) {
        return false;
    }
    if (questId >= 0x15e) {
        const QuestAvailabilityRecord *current = reinterpret_cast<const QuestAvailabilityRecord *>(dataTable1bOr1cGetRecord(questId));
        if (current != NULL && current->metadata.kind == 9 && g_gameState.unk000 == 0x18) {
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
