#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "quest_center/QuestStatus.h"
#include "quest_center/qcUtility.h"
#include "quest_center/QuestStatus_Smt4.h"
#include "util/Random.h"

/* unit-local: a quest that can still be drawn (its index, category and remaining weight); the array exists
 * only while this function runs */
struct QcCandidate {
    /* 0x00 */ u16 index;
    /* 0x02 */ u16 category;
    /* 0x04 */ s32 weight;
};

extern "C" {
s32 QcUtility_GetQuestTableChunkCount(s32 group, s32 tableGroup);
QcQuestRecord *dataTable26GroupGetRecord(s32 group, s32 tableGroup, s32 index);
s32 gameFlagIsSet(s32 flagId);
u16 QcActive_GetField26(void);
s32 QcUtility_CountFlaggedSubQuests(void);
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 region, u32 size, u32 option);

/* Chance (percent) that a slot of `tab` becomes a bonus slot, from the quests done: at most 80, and none on
 * the later tabs before ten of their quests are done. Retail inlines it: `tab` is copied into its own stack slot
 * before the chance is zeroed and the flagged quests are counted. */
static __inline s32 qcTabBonusChance(s32 tab)
{
    s32 chance = 0;
    s32 flagged = QcUtility_CountFlaggedSubQuests();

    switch (tab) {
    case 0: {
        s32 progress = QcActive_GetField20();
        chance = progress / 20 + flagged / 10;
        break;
    }
    case 1: {
        s32 progress = QcActive_GetField22();
        chance = progress / 10 + flagged / 10;
        if (progress < 10) {
            chance = 0;
        }
        break;
    }
    case 2: {
        s32 progress = QcActive_GetField24();
        chance = progress / 10 + flagged / 10;
        if (progress < 10) {
            chance = 0;
        }
        break;
    }
    case 3: {
        s32 progress = QcActive_GetField26();
        chance = progress / 10 + flagged / 10;
        if (progress < 10) {
            chance = 0;
        }
        break;
    }
    }
    if (chance > 80) {
        chance = 80;
    }
    return chance;
}

/* Fills one tab of the list from the group's quest table: the pinned category first, a bonus
   slot where `forcedSlot` says (or by chance within [firstRandomSlot, lastRandomSlot]), and the
   rest by weighted random draw. Returns 1 when a bonus slot was placed. */
u32 QcUtility_BuildTabList(QcTabListState *list, s32 tab, s32 group, s32 forcedSlot, s32 weightKind,
                           s32 firstRandomSlot, s32 lastRandomSlot)
{
    u32 result = 0;
    QcTab *page = &list->tabs[tab];

    for (s32 i = 0; i < 20; i++) {
        page->slots[i] = QC_SLOT_FREE;
    }

    s32 questCount = QcUtility_GetQuestTableChunkCount(group, list->group);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\quest_center\\qcUtility.cpp", 172);
    QcCandidate *candidates = (QcCandidate *)asdMemoryAlloc(0x100, 0x100, 0, questCount << 3, 1);

    u32 totalWeight = 0;
    s16 candidateCount = 0;
    QcQuestRecord *records = dataTable26GroupGetRecord(group, list->group, 0);
    for (s32 i = 0; i < questCount; i++) {
        if (records[i].weights[weightKind] != 0 && (records[i].requiredFlag == 0 || !gameFlagIsSet(records[i].requiredFlag))) {
            totalWeight += records[i].weights[weightKind];
            candidates[candidateCount].index = i;
            candidates[candidateCount].category = records[i].category;
            candidates[candidateCount].weight = records[i].weights[weightKind];
            candidateCount++;
        }
    }

    if (list->pinnedCategory != 0) {
        for (s32 i = 0; i < candidateCount; i++) {
            if (candidates[i].category == list->pinnedCategory) {
                page->slots[0] = candidates[i].index;
                totalWeight -= candidates[i].weight;
                candidates[i].weight = 0;
                break;
            }
        }
    }

    s32 bonusChance = qcTabBonusChance(tab);

    u8 bonusPlaced = 0;
    for (s32 slot = 0; slot < 20; slot++) {
        if (page->slots[slot] != QC_SLOT_FREE) {
            continue;
        }
        /* the bonus slot: the forced one, else one of the random slots by chance, the last of them at the latest */
        if (forcedSlot >= 0) {
            if (forcedSlot == slot) {
                bonusPlaced = 1;
                page->slots[slot] = QC_SLOT_BONUS;
                result = 1;
                continue;
            }
        } else if (!bonusPlaced && slot >= firstRandomSlot && slot <= lastRandomSlot) {
            if (slot == lastRandomSlot) {
                bonusPlaced = 1;
                page->slots[slot] = QC_SLOT_BONUS;
                result = 1;
                continue;
            }
            if (bonusChance != 0 && (s32)randNextInRange(99) < bonusChance) {
                bonusPlaced = 1;
                page->slots[slot] = QC_SLOT_BONUS;
                result = 1;
                continue;
            }
        }
        s32 roll = randNextInRange((u16)totalWeight);
        for (s32 i = 0; i < candidateCount; i++) {
            if (candidates[i].weight == 0) {
                continue;
            }
            roll -= candidates[i].weight;
            if (roll > 0) {
                continue;
            }
            /* categories 3 to 5 only go strictly between the random slots */
            u16 category = candidates[i].category;
            if ((category == 3 || category == 4 || category == 5) &&
                !(firstRandomSlot < slot && slot < lastRandomSlot)) {
                continue;
            }
            page->slots[slot] = candidates[i].index;
            totalWeight -= candidates[i].weight;
            candidates[i].weight = 0;
            break;
        }
    }
    asdMemFree(candidates);
    return result;
}

} /* extern "C" */
