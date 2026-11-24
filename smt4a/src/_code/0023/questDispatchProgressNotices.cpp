/* NON_MATCHING: spilled scan values, the initialized requirement input and shared notification tails differ. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "code/Code001b.h"
#include "code/Code002c_Smt4a.h"
#include "game/GameStateA.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/MapSaveBlockA.h"
#include "gamedata/ProgressionUnlock.h"
#include "gamedata/Table2FType1Entry.h"
#include "quest_center/QuestRecordA.h"
#include "quest_center/QuestUnlock.h"

extern "C" {

s32 goalConditionsSatisfied(s32 id);
void FUN_002466a8(void);
void FUN_00295024(void);
void popupTryStartStory(s32 immediate);
void gameDataSetStatusFlag(u32 index, s8 value);
void rt_aeabi_memclr(void *buffer, u32 size);
void mapIfDispatchCommand(u32 command, u32 item, u32 amount);
void mapIfStartTransition(u32 kind, u32 item, u32 amount);
void FUN_003deea4(u16 value);
void partyEntryTriggerIfLevelAndFlag3(s32 id);
void gameFlagUnlockEntryById(s32 id);
u32 questIsCompleted(s32 index);
void gameFlagSlotSetEnableBit(s32 index, s8 enabled);
void flagValueAdd(s32 id, u32 amount);
u32 recordIsAvailable(s32 id);
s32 FUN_003dedf0(u32 id);
s32 questGetRequirementProgress(u32 quest, s32 index, QuestRequirementProgress *progress);
u32 partyEntryBitsBit5(s32 index);
u32 partyEntryBitsBit1(s32 index);

enum {
    QUEST_NOTICE_NONE = 0,
    QUEST_NOTICE_SECOND_COMPLETE = 1,
    QUEST_NOTICE_FIRST_COMPLETE = 2,
    QUEST_NOTICE_COUNTER = 4,
    QUEST_NOTICE_GOAL = 5,
    QUEST_NOTICE_GOAL_BIT5 = 6,
    QUEST_NOTICE_LEVEL = 99,
    FIRST_TRACKED_QUEST = 100,
    END_TRACKED_QUESTS = 400,
    QUEST_KIND_GOAL = 10,
};

/* Dispatches quest objective and unlock notices after a change in the field. */
s32 questDispatchProgressNotices(void)
{
    s32 notice = QUEST_NOTICE_NONE;
    MapSaveBlockA *flags = gameFlagsGetBlock();
    u32 secondCompletion = 0;
    u16 unlocks[END_TRACKED_QUESTS - FIRST_TRACKED_QUEST];
    rt_aeabi_memclr(unlocks, sizeof(unlocks));
    s32 unlockCount = 0;

    if (g_gameState.table2FCounterPending) {
        const Table2FType1Entry *entry = dataTable2FType1GetEntry(flags->savePoint.tableId);
        g_gameState.table2FCounterId = entry->counterId;
        flagValueAdd(g_gameState.table2FCounterId, 1);
        g_gameState.table2FCounterPending = 0;
        return QUEST_NOTICE_COUNTER;
    }

    s32 finishedQuests = 0;
    /* The kind-7 resolver reads current progress before assigning remaining. */
    QuestRequirementProgress objective;
    objective.current = 0;
    for (u16 id = FIRST_TRACKED_QUEST; id < END_TRACKED_QUESTS; ++id) {
        if (!gameUnlockRecordRequirementsMet(id)) {
            continue;
        }
        if (!dataTable1bOr1cRecordHasFlag1(id) && questIsCompleted(id)) {
            ++finishedQuests;
        }
        if (questHasNewMark(id)) {
            s32 kind = table1bOr1cGetRecordValue(id);
            if (kind == QUEST_KIND_GOAL) {
                if (notice == QUEST_NOTICE_SECOND_COMPLETE) {
                    continue;
                }
                u32 finished = questIsCompleted(id);
                if (goalConditionsSatisfied(id) & ~finished) {
                    FUN_003deea4(id);
                    notice = QUEST_NOTICE_GOAL;
                    if (partyEntryBitsBit5(id)) {
                        notice = QUEST_NOTICE_GOAL_BIT5;
                    }
                    continue;
                }
            } else if (kind == 1) {
                if (partyEntryBitsBit1(id)) {
                    bool changed = false;
                    s32 supported = 0;
                    s32 complete = 0;
                    s32 totalRemaining = 0;
                    s32 changedRemaining = 0;
                    u32 otherItem = 0;
                    s32 otherRemaining = 0;
                    s16 completedItem = flags->secondCompletedItem;
                    s16 progressedItem = flags->secondProgressedItem;
                    for (s32 index = 0; index < 4; ++index) {
                        if (questGetRequirementProgress(id, index, &objective)) {
                            u16 item = objective.id;
                            ++supported;
                            if (objective.remaining > 0) {
                                if (item == progressedItem) {
                                    changed = true;
                                    changedRemaining = objective.remaining;
                                } else {
                                    otherItem = item;
                                    otherRemaining = objective.remaining;
                                }
                            } else {
                                ++complete;
                                if (item == completedItem) {
                                    changed = true;
                                }
                            }
                            totalRemaining += objective.remaining;
                        }
                    }
                    bool finished = false;
                    if (changed) {
                        if (supported >= 2) {
                            if (totalRemaining == 0) {
                                mapIfDispatchCommand(6, (u16)completedItem, 0);
                                FUN_003deea4(id);
                                finished = true;
                            } else if (completedItem != 0) {
                                s32 unfinished = supported - complete;
                                if (unfinished >= 2) {
                                    mapIfDispatchCommand(7, (u16)completedItem, (u16)unfinished);
                                } else {
                                    mapIfDispatchCommand(8, (u16)otherItem, (u16)otherRemaining);
                                }
                            } else {
                                mapIfDispatchCommand(9, (u16)progressedItem, (u16)changedRemaining);
                            }
                        } else if (totalRemaining == 0) {
                            mapIfDispatchCommand(10, (u16)completedItem, 0);
                            FUN_003deea4(id);
                            finished = true;
                        } else {
                            mapIfDispatchCommand(11, (u16)progressedItem, (u16)changedRemaining);
                        }
                    }
                    if (finished) {
                        secondCompletion = 1;
                        notice = QUEST_NOTICE_SECOND_COMPLETE;
                    }
                    gameFlagSlotSetEnableBit(id, 0);
                }
            } else if (kind == 0) {
                if (notice == QUEST_NOTICE_GOAL || notice == QUEST_NOTICE_GOAL_BIT5) {
                    continue;
                }
                if (partyEntryBitsBit1(id)) {
                    if (recordIsAvailable(id)) {
                        u32 changed = 0;
                        s32 supported = 0;
                        s32 complete = 0;
                        s32 totalRemaining = 0;
                        s32 changedRemaining = 0;
                        u32 otherItem = 0;
                        s32 otherRemaining = 0;
                        s16 progressedItem = flags->progressedItem;
                        s16 completedItem = flags->completedItem;
                        for (s32 index = 0; index < 4; ++index) {
                            if (questGetRequirementProgress(id, index, &objective)) {
                                u16 item = objective.id;
                                ++supported;
                                if (objective.remaining > 0) {
                                    if (item == progressedItem) {
                                        changed = 1;
                                        changedRemaining = objective.remaining;
                                        if (otherItem == 0) {
                                            otherItem = item;
                                            otherRemaining = objective.remaining;
                                        }
                                    } else {
                                        otherItem = item;
                                        otherRemaining = objective.remaining;
                                    }
                                } else {
                                    ++complete;
                                    if (item == completedItem) {
                                        changed = 1;
                                    }
                                }
                                totalRemaining += objective.remaining;
                            }
                        }
                        if (changed & ~secondCompletion) {
                            if (supported >= 2) {
                                if (totalRemaining == 0) {
                                    mapIfStartTransition(0, (u16)completedItem, 0);
                                    notice = QUEST_NOTICE_FIRST_COMPLETE;
                                } else if (completedItem != 0) {
                                    s32 unfinished = supported - complete;
                                    if (unfinished >= 2) {
                                        mapIfStartTransition(1, (u16)completedItem, (u16)unfinished);
                                    } else {
                                        mapIfStartTransition(2, (u16)otherItem, (u16)otherRemaining);
                                    }
                                } else {
                                    mapIfStartTransition(3, (u16)progressedItem, (u16)changedRemaining);
                                }
                            } else if (totalRemaining == 0) {
                                mapIfStartTransition(4, (u16)completedItem, 0);
                                notice = QUEST_NOTICE_FIRST_COMPLETE;
                            } else {
                                mapIfStartTransition(5, (u16)progressedItem, (u16)changedRemaining);
                            }
                        }
                    }
                    gameFlagSlotSetEnableBit(id, 0);
                }
            }
        }

        if (notice != QUEST_NOTICE_NONE) {
            continue;
        }
        if (FUN_003dedf0(id)) {
            partyEntryTriggerIfLevelAndFlag3(id);
        }
        u16 playerLevel = gameGetPlayerData()->level;
        if (gameFlagEntryGetBit(id, 0) == 0) {
            const QuestRecordA *quest = questDataGetRecord(id);
            if (quest != NULL && quest->requiredLevel != 0 && quest->requiredLevel <= playerLevel) {
                if (table1bOr1cGetRecordValue(id) == QUEST_KIND_GOAL && goalConditionsSatisfied(id)) {
                    gameFlagUnlockEntryById(id);
                    notice = QUEST_NOTICE_LEVEL;
                } else {
                    unlocks[unlockCount++] = id;
                }
            }
        }
    }

    if (notice == QUEST_NOTICE_NONE) {
        for (s32 index = 0; index < unlockCount; ++index) {
            gameFlagUnlockEntryById(unlocks[index]);
        }
        if (unlockCount != 0) {
            if (g_gameState.suppressQuestUnlockNotice) {
                g_gameState.suppressQuestUnlockNotice = 0;
            } else {
                FUN_00295024();
            }
        }
        for (u16 id = 0; id < 32; ++id) {
            const ProgressionUnlockRecord *entry = FUN_003de92c(id);
            if (entry != NULL && gameDataStatusFlagGet(id) == 0 && entry->threshold <= finishedQuests) {
                gameDataSetStatusFlag(id, 1);
                FUN_002466a8();
            }
        }
    }

    flags->secondCompletedItem = 0;
    flags->secondProgressedItem = 0;
    if (notice != QUEST_NOTICE_GOAL && notice != QUEST_NOTICE_GOAL_BIT5) {
        flags->completedItem = 0;
        flags->progressedItem = 0;
    }
    if (g_gameState.pendingStoryPopup != 0) {
        popupTryStartStory(0);
        g_gameState.pendingStoryPopup = 0;
    }
    return notice;
}

} /* extern "C" */
