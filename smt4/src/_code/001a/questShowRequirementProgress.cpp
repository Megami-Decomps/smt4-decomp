#include "gamedata/MapSaveBlock.h"
#include "quest_center/QuestRequirement.h"
#include "code/Code0028.h"
#include "code/Code0028_Smt4.h"
#include "game/GameState.h"

/* unit-local: the one field this function reads of data table 0x2f's second list */
struct SpecialRecord {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ s16 value;
};

extern "C" {

SpecialRecord *dataTable2fSub1GetRecord(s32 id);
void saveFlagSetOrAddCounter(s32 value, s32 mode);
s32 questHasNewMark(u16 quest);
s32 table1bOr1cGetRecordValue(u16 quest);
s32 FUN_00287874(u16 quest);
s32 questPassesAvailabilityConditions(u16 quest);
u32 questGetRequirementProgress(s32 quest, s32 index, QuestRequirementProgress *progress);
void mapIfShowItemResultMessage(u32 result, u32 item, s32 count);
void mapIfShowRemainingRequirementDialog(u32 kind, u32 item, s32 count);

/* Walks the open quests (ids 100-399) after the player gained something a quest asks for and shows
 * the progress message each one calls for: how many requirements remain, how many of the gained
 * item are still missing, or that the quest is ready to be reported. Returns the follow-up the map
 * has to run (0 none, 1/2 a quest became complete, 3 a pending support reward, 4 a special
 * record). */
s32 questShowRequirementProgress(void)
{
    s32 result = 0;
    MapSaveBlock *block = gameGetMapBlock();
    bool firstKindDone = false;
    if (g_gameState.statusActive != 0) {
        g_gameState.unk0B0 = dataTable2fSub1GetRecord(block->savePoint.tableId)->value;
        saveFlagSetOrAddCounter(g_gameState.unk0B0, 1);
        g_gameState.statusActive = 0;
        return 4;
    }
    for (u16 quest = 100; quest < 400; quest++) {
        if (questHasNewMark(quest) == 0) {
            continue;
        }
        s32 kind = table1bOr1cGetRecordValue(quest);
        if (kind == 1) {
            /* Each kind declares its locals at the top of its block, C89 style (retail's spill slots). */
            s16 completed;
            s16 progressed;
            s32 totalRemaining;
            s32 i;
            bool concerned = false;          /* the quest asks for one of the two gained entries */
            s32 progressedRemaining = 0;
            s32 requirements = 0;
            s32 fulfilled = 0;
            u32 openId = 0;             /* a requirement still open, other than the progressed one */
            s32 openRemaining = 0;
            /* Every requirement is met: the quest can be reported. Retail tests it (bics) before the dialog
             * chain, where it is still false, and again after it. */
            bool ready = false;
            if (FUN_00287874(quest) != 0) {
                totalRemaining = 0;
                completed = block->secondCompletedItem;
                progressed = block->secondProgressedItem;
                for (i = 0; i < 6; i++) {
                    QuestRequirementProgress progress;
                    if (questGetRequirementProgress(quest, i, &progress) != 0) {
                        requirements++;
                        if (progress.remaining > 0) {
                            if (progress.id == progressed) {
                                progressedRemaining = progress.remaining;
                                concerned = true;
                            } else {
                                openId = progress.id;
                                openRemaining = progress.remaining;
                            }
                        } else {
                            fulfilled++;
                            if (progress.id == completed) {
                                concerned = true;
                            }
                        }
                        totalRemaining += progress.remaining;
                    }
                }
                if (concerned && !ready) {
                    if (requirements >= 2) {
                        if (totalRemaining == 0) {
                            mapIfShowRemainingRequirementDialog(6, (u16)completed, 0);
                            ready = true;
                        } else if (completed != 0) {
                            s32 open = requirements - fulfilled;
                            if (open >= 2) {
                                mapIfShowRemainingRequirementDialog(7, (u16)completed, (u16)open);
                            } else {
                                mapIfShowRemainingRequirementDialog(8, (u16)openId, (u16)openRemaining);
                            }
                        } else {
                            mapIfShowRemainingRequirementDialog(9, (u16)progressed, (u16)progressedRemaining);
                        }
                    } else if (totalRemaining == 0) {
                        mapIfShowRemainingRequirementDialog(10, (u16)completed, 0);
                        ready = true;
                    } else {
                        mapIfShowRemainingRequirementDialog(11, (u16)progressed, (u16)progressedRemaining);
                    }
                }
                if (ready) {
                    firstKindDone = true;
                    result = 1;
                }
                FUN_0028784c(quest, 0);
            }
        } else if (kind == 0) {
            s16 completed;
            s16 progressed;
            s32 totalRemaining;
            s32 i;
            bool concerned = false;
            s32 progressedRemaining = 0;
            s32 requirements = 0;
            s32 fulfilled = 0;
            u32 openId = 0;
            s32 openRemaining = 0;
            bool ready = false;
            if (FUN_00287874(quest) != 0) {
                if (questPassesAvailabilityConditions(quest) != 0) {
                    totalRemaining = 0;
                    completed = block->completedItem;
                    progressed = block->progressedItem;
                    for (i = 0; i < 6; i++) {
                        QuestRequirementProgress progress;
                        if (questGetRequirementProgress(quest, i, &progress) != 0) {
                            requirements++;
                            if (progress.remaining > 0) {
                                if (progress.id == progressed) {
                                    progressedRemaining = progress.remaining;
                                    concerned = true;
                                    if (openId == 0) {
                                        openId = progress.id;
                                        openRemaining = progress.remaining;
                                    }
                                } else {
                                    openId = progress.id;
                                    openRemaining = progress.remaining;
                                }
                            } else {
                                fulfilled++;
                                if (progress.id == completed) {
                                    concerned = true;
                                }
                            }
                            totalRemaining += progress.remaining;
                        }
                    }
                    if (concerned && !ready && !firstKindDone) {
                        if (requirements >= 2) {
                            if (totalRemaining == 0) {
                                mapIfShowItemResultMessage(0, (u16)completed, 0);
                                ready = true;
                            } else if (completed != 0) {
                                s32 open = requirements - fulfilled;
                                if (open >= 2) {
                                    mapIfShowItemResultMessage(1, (u16)completed, (u16)open);
                                } else {
                                    mapIfShowItemResultMessage(2, (u16)openId, (u16)openRemaining);
                                }
                            } else {
                                mapIfShowItemResultMessage(3, (u16)progressed, (u16)progressedRemaining);
                            }
                        } else if (totalRemaining == 0) {
                            mapIfShowItemResultMessage(4, (u16)completed, 0);
                            ready = true;
                        } else {
                            mapIfShowItemResultMessage(5, (u16)progressed, (u16)progressedRemaining);
                        }
                    }
                    if (ready) {
                        result = 2;
                    }
                }
                FUN_0028784c(quest, 0);
            }
        }
    }
    if (result == 0 && supportUnitProgressIsComplete() != 0) {
        result = 3;
    }
    block->secondCompletedItem = 0;
    block->secondProgressedItem = 0;
    block->completedItem = 0;
    block->progressedItem = 0;
    return result;
}

} /* extern "C" */
