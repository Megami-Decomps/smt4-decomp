/* NON_MATCHING: register allocation and spill order differ (retail keeps the first-random-slot argument in r8 and the slot list in r7); the slot-clearing loop compiles to a counted pointer loop instead of retail's indexed 2x-unrolled one */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

/* One tab's 20 quest slots: a quest index, QC_SLOT_FREE (-2, not filled yet) or QC_SLOT_BONUS (-1). */
struct QcTab {
    /* 0x00 */ s32 slots[20];
};

enum {
    QC_SLOT_BONUS = -1,
    QC_SLOT_FREE = -2,
};

/* The quest center's tab lists. */
struct QcTabListState {
    /* 0x00 */ u8 group;           /* quest table group */
    /* 0x01 */ u8 unk01[0xb];
    /* 0x0c */ u16 pinnedCategory; /* category whose first quest is placed in slot 0 */
    /* 0x0e */ u8 unk0e[2];
    /* 0x10 */ QcTab tabs[4];      /* 0x50 bytes each */
};

/* A quest table record (0x20 bytes). */
struct QcQuestRecord {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u16 category;
    /* 0x18 */ u16 requiredFlag;   /* the quest is skipped once this flag is set */
    /* 0x1a */ u8 weight;
    /* 0x1b */ u8 unk1b[5];
};

/* A quest that can still be picked: its index, category and remaining weight. */
struct QcCandidate {
    /* 0x00 */ u16 index;
    /* 0x02 */ u16 category;
    /* 0x04 */ s32 weight;
};

extern "C" {
s32 QcUtility_GetQuestTableChunkCount(s32 group, s32 tableGroup);
QcQuestRecord *dataTable26GroupGetRecord(s32 group, s32 tableGroup, s32 index);
s32 gameFlagIsSet(s32 flagId);
s32 randNextInRange(u16 range);
s32 QcActive_GetField20(void);
s32 QcActive_GetField22(void);
s32 QcActive_GetField24(void);
s32 QcActive_GetField26(void);
s32 QcUtility_CountFlaggedSubQuests(void);
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 region, u32 size, u32 option);
void asdMemFree(void *memory);

/* Fills one tab of the list from the group's quest table: the pinned category first, a bonus
   slot where `forcedSlot` says (or by chance within [firstRandomSlot, lastRandomSlot]), and the
   rest by weighted random draw. Returns 1 when a bonus slot was placed. */
u32 QcUtility_BuildTabList(QcTabListState *list, s32 tab, s32 group, s32 forcedSlot, s32 weightOffset,
                           s32 firstRandomSlot, s32 lastRandomSlot)
{
    u32 result = 0;
    s32 *slots = list->tabs[tab].slots;
    for (s32 i = 0; i < 20; i++) {
        slots[i] = QC_SLOT_FREE;
    }

    s32 questCount = QcUtility_GetQuestTableChunkCount(group, list->group);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\quest_center\\qcUtility.cpp", 172);
    QcCandidate *candidates = (QcCandidate *)asdMemoryAlloc(0x100, 0x100, 0, questCount << 3, 1);

    u32 totalWeight = 0;
    s16 candidateCount = 0;
    QcQuestRecord *records = dataTable26GroupGetRecord(group, list->group, 0);
    for (s32 i = 0; i < questCount; i++) {
        QcQuestRecord *record = &records[i];
        QcQuestRecord *weighted = (QcQuestRecord *)((u8 *)record + weightOffset);
        if (weighted->weight != 0 && (record->requiredFlag == 0 || !gameFlagIsSet(record->requiredFlag))) {
            QcCandidate *candidate = &candidates[candidateCount];
            candidate->index = i;
            candidate->category = record->category;
            totalWeight += weighted->weight;
            candidate->weight = weighted->weight;
            candidateCount++;
        }
    }

    if (list->pinnedCategory != 0) {
        for (s32 i = 0; i < candidateCount; i++) {
            if (candidates[i].category == list->pinnedCategory) {
                slots[0] = candidates[i].index;
                s32 weight = candidates[i].weight;
                candidates[i].weight = 0;
                totalWeight -= weight;
                break;
            }
        }
    }

    /* Chance (percent) that a slot becomes a bonus slot, from the quests done. */
    s32 flagged = QcUtility_CountFlaggedSubQuests();
    s32 bonusChance = 0;
    s32 progress;
    switch (tab) {
    case 0:
        bonusChance = QcActive_GetField20() / 20 + flagged / 10;
        if (bonusChance > 80) {
            bonusChance = 80;
        }
        break;
    case 1:
        progress = QcActive_GetField22();
        bonusChance = progress / 10 + flagged / 10;
        if (progress < 10) {
            bonusChance = 0;
        } else if (bonusChance > 80) {
            bonusChance = 80;
        }
        break;
    case 2:
        progress = QcActive_GetField24();
        bonusChance = progress / 10 + flagged / 10;
        if (progress < 10) {
            bonusChance = 0;
        } else if (bonusChance > 80) {
            bonusChance = 80;
        }
        break;
    case 3:
        progress = QcActive_GetField26();
        bonusChance = progress / 10 + flagged / 10;
        if (progress < 10) {
            bonusChance = 0;
        } else if (bonusChance > 80) {
            bonusChance = 80;
        }
        break;
    }

    u8 bonusPlaced = 0;
    for (s32 slot = 0; slot < 20; slot++) {
        if (slots[slot] != QC_SLOT_FREE) {
            continue;
        }
        bool placeBonus = false;
        if (forcedSlot >= 0) {
            placeBonus = forcedSlot == slot;
        } else if (!bonusPlaced && slot >= firstRandomSlot && slot <= lastRandomSlot &&
                   (slot == lastRandomSlot || (bonusChance != 0 && randNextInRange(99) < bonusChance))) {
            placeBonus = true;
        }
        if (placeBonus) {
            bonusPlaced = 1;
            slots[slot] = QC_SLOT_BONUS;
            result = 1;
            continue;
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
            s16 category = candidates[i].category;
            if ((category == 3 || category == 4 || category == 5) &&
                !(firstRandomSlot < slot && slot < lastRandomSlot)) {
                continue;
            }
            slots[slot] = candidates[i].index;
            s32 weight = candidates[i].weight;
            candidates[i].weight = 0;
            totalWeight -= weight;
            break;
        }
    }
    asdMemFree(candidates);
    return result;
}

} /* extern "C" */
