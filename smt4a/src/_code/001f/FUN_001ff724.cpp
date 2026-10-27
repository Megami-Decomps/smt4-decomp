/* NON_MATCHING: only register assignment differs: retail keeps the menu in r6, the quest record in r7 and the alternate count in r8, while the build rotates them (count r6, menu r7, record r8); a branch-to-next after the default arm of the mode switch adds one row. */
#include "common.h"
#include "gamedata/GameDataAccess.h"
#include "quest_center/QuestRequirement.h"
#include "shard/W5_W5Match7_DataRecord.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

/* The quest menu past UiQuestApoc's modelled prefix (only the fields used here). */
struct QuestMenu {
    /* 0x000 */ u8 unk000[0x93D];
    /* 0x93D */ s8 filtered;
    /* 0x93E */ u8 unk93E[7];
    /* 0x945 */ s8 mode;
    /* 0x946 */ u8 unk946[2];
    /* 0x948 */ ScrollSelection primaryCursor;
    /* 0x9AC */ ScrollSelection alternateCursor;
    /* 0xA10 */ u16 primaryList[99];
    /* 0xAD6 */ u16 alternateList[250];
};

struct SelectionPair {
    u32 first;
    u32 second;
};

typedef char QuestMenuOffsetCheck[
    offsetof(QuestMenu, primaryCursor) == 0x948 && offsetof(QuestMenu, alternateCursor) == 0x9AC &&
    offsetof(QuestMenu, primaryList) == 0xA10 && offsetof(QuestMenu, alternateList) == 0xAD6 ? 1 : -1];

extern "C" {
extern QuestMenu *g_uiQuest;
void *sysMemClear(void *destination, u32 size);
void rt_memclr(void *destination, u32 size);
void qsort(void *elements, u32 count, u32 elementSize, int (*compare)(const void *, const void *));
int dataTable1bOr1cCompareRecordKeys(const void *first, const void *second);
u32 FUN_001bd100(u32 id);
s32 FUN_003df004(u32 quest, s32 index, QuestRequirementProgress *progress);
u32 partyEntryFlagsBit1(s32 index);
u32 partyEntryFlagsBit3(s32 index);
u8 idIsAtLeast350(u32 value);
s32 FUN_00284dbc(u32 id);
void FUN_00203b40(ScrollSelection *list, s32 count, s32 columns, s32 first, s32 second, s32 third);
void FUN_002a4964(ScrollSelection *list, s32 index);
void uiQuestSortListByEntryKind(s32 mode);
s32 uiSearchPrimary(ScrollSelection *list);
s32 objectApplyIfUnblocked(ScrollSelection *list);
SelectionPair *gameDataGetIndexedPair(s32 index);
void scrollOwnerSetValue(ScrollSelection *list, s32 value);
void flaggedEntrySetValueA(ScrollSelection *list, s32 value);

/* Whether one of the quest's requirements still blocks it from the alternate list. */
static __inline bool questRequirementBlocks(u32 id)
{
    for (s32 index = 0; 4 > index; index++) {
        QuestRequirementProgress progress;
        if (FUN_003df004(id, index, &progress) != 0 &&
            ((partyEntryFlagsBit3(id) != 0 && FUN_00284dbc(id) == 0) || progress.remaining > 0))
            return true;
    }
    return false;
}

/* Rebuilds the quest menu's two lists (available quests and accepted ones) and restores the cursors. */
void FUN_001ff724(void)
{
    QuestMenu *menu = g_uiQuest;
    s32 primaryCount;
    s32 alternateCount;
    alternateCount = primaryCount = 0;
    sysMemClear(menu->primaryList, 0xC6);
    rt_memclr(menu->alternateList, 500);
    for (u16 id = 0; id < 400; id++) {
        if (id < 0x15E && gameFlagEntryGetBit(id, 0) == 0)
            continue;
        if (id < 0x15E || FUN_001ad9b4(id) != NULL) {
            if (FUN_001bd100(id) != 0) {
                menu->primaryList[primaryCount++] = id;
            } else {
                bool include = true;
                if (menu->filtered != 0) {
                    ItemDataRecord *quest = FUN_001ad9b4(id);
                    if (quest == NULL || quest->ordering.sortGroup != 0)
                        continue;
                    if (questRequirementBlocks(id))
                        continue;
                    if (idIsAtLeast350(id) == 0 && quest->filter.kind != 0) {
                        switch (menu->mode) {
                        case 0:
                            include = false;
                            break;
                        case 1:
                            if (quest->filter.kind != 1)
                                include = false;
                            break;
                        case 9:
                        case 10:
                        case 11:
                        case 12:
                        case 13:
                            break;
                        default:
                            if (quest->filter.kind == 1)
                                include = false;
                            break;
                        }
                    }
                    if (include)
                        menu->alternateList[alternateCount++] = id;
                } else {
                    menu->alternateList[alternateCount++] = id;
                }
            }
        }
    }
    qsort(menu->primaryList, primaryCount, 2, dataTable1bOr1cCompareRecordKeys);
    FUN_00203b40(&menu->primaryCursor, primaryCount, 10, 1, 1, 1);
    FUN_00203b40(&menu->alternateCursor, alternateCount, 10, 1, 1, 1);
    uiQuestSortListByEntryKind(0);
    for (s32 i = 0; i < primaryCount; i++) {
        if (partyEntryFlagsBit1(menu->primaryList[i]) != 0) {
            FUN_002a4964(&menu->primaryCursor, i);
            break;
        }
    }
    for (s32 i = 0; i < alternateCount; i++) {
        if (partyEntryFlagsBit1(menu->alternateList[i]) != 0) {
            ItemDataRecord *quest = FUN_001ad9b4(menu->alternateList[i]);
            if (quest != NULL && quest->ordering.sortGroup != 0 && quest->ordering.sortGroup != 10) {
                FUN_002a4964(&menu->alternateCursor, i);
                break;
            }
        }
    }
    if (menu->filtered != 0)
        return;
    s32 offset = gameDataGetIndexedPair(0)->second;
    if (menu->primaryList[gameDataGetIndexedPair(0)->first + offset] == 0 ||
        gameDataGetIndexedPair(0)->second + uiSearchPrimary(&menu->primaryCursor) >
            objectApplyIfUnblocked(&menu->primaryCursor)) {
        gameDataGetIndexedPair(0)->second = 0;
        gameDataGetIndexedPair(0)->first = 0;
    }
    scrollOwnerSetValue(&menu->primaryCursor, gameDataGetIndexedPair(0)->second);
    flaggedEntrySetValueA(&menu->primaryCursor, gameDataGetIndexedPair(0)->first);
    offset = gameDataGetIndexedPair(1)->second;
    if (menu->alternateList[gameDataGetIndexedPair(1)->first + offset] == 0 ||
        gameDataGetIndexedPair(1)->second + uiSearchPrimary(&menu->alternateCursor) >
            objectApplyIfUnblocked(&menu->alternateCursor)) {
        gameDataGetIndexedPair(1)->second = 0;
        gameDataGetIndexedPair(1)->first = 0;
    }
    scrollOwnerSetValue(&menu->alternateCursor, gameDataGetIndexedPair(1)->second);
    flaggedEntrySetValueA(&menu->alternateCursor, gameDataGetIndexedPair(1)->first);
}
}
