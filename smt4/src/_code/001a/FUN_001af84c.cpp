/* NON_MATCHING: draws the status icon of a quest list row (new, in progress, done, locked, selected) and returns the row text colour; written from the decompilation, the dataTable1bOr1cGetRecord argument is inferred and branch layout not compared with retail */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "shard/FUN_002903f0.h"

#define QUEST_ICON_LAYER 2
#define QUEST_ICON_TABLE 0x29
#define QUEST_ICON_NEW 0xE
#define QUEST_ICON_SELECTED 0xD
#define QUEST_ICON_ACTIVE 0xC
#define QUEST_ICON_AVAILABLE_ENTRY 0xC2
#define QUEST_ICON_LOCKED 0x91
#define QUEST_ICON_ACTIVE_LOCKED 0x92
#define QUEST_ICON_DONE 0x93

#define QUEST_COLOR_NORMAL_PLAIN 0xFF
#define QUEST_COLOR_NORMAL_FULL 0xFFFFFFFF
#define QUEST_COLOR_DIM_PLAIN 0x5A5A5AFF
#define QUEST_COLOR_DIM_FULL 0x787878FF
#define QUEST_COLOR_SELECTED_PLAIN 0x8400FF
#define QUEST_COLOR_SELECTED_FULL 0x72E027FF

#define QUEST_STEP_COUNT 6

struct QuestRecord {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u8 oneShot;       /* set for quests that are offered rather than tracked */
};

struct QuestUi {
    /* 0x000 */ u8 unk000[0x5C4];
    /* 0x5C4 */ u8 detailOpen;
};

extern "C" {
extern QuestUi *g_uiQuest;

QuestRecord *dataTable1bOr1cGetRecord(s32 quest);
s32 questPassesAvailabilityConditions(s32 quest);
s32 questIsOfferable(u16 quest);
s32 questIsCompleted(s32 quest);
s32 FUN_00298dc8(void);
s32 FUN_00298e00(s32 quest);
s32 FUN_00298e40(s32 quest, s32 step, s32 *progress);
s32 recordCategoryNineIsActiveInMode24(s32 quest);
void FUN_002bf380(u32 layer, u32 table, u32 sprite, u32 x, u32 y, u32 flags);

static __inline u32 questColorDim(s32 full)
{
    return full != 0 ? QUEST_COLOR_DIM_FULL : QUEST_COLOR_DIM_PLAIN;
}

static __inline u32 questColorSelected(s32 full)
{
    return full != 0 ? QUEST_COLOR_SELECTED_FULL : QUEST_COLOR_SELECTED_PLAIN;
}

/* Draws the icon of `quest` at (x, y) and returns the colour for its row. */
u32 FUN_001af84c(s32 quest, u32 x, u32 y, u32 flags, s32 full)
{
    u32 normal = full != 0 ? QUEST_COLOR_NORMAL_FULL : QUEST_COLOR_NORMAL_PLAIN;

    if (g_uiQuest->detailOpen == 0) {
        QuestRecord *record = dataTable1bOr1cGetRecord(quest);
        if (record == NULL)
            return normal;

        if (record->oneShot == 0) {
            bool allDone = true;
            for (s32 step = 0; step < QUEST_STEP_COUNT; step++) {
                s32 progress[3];
                if (FUN_00298e40(quest, step, progress) != 0
                    && ((questIsCompleted(quest) != 0 && FUN_00298e00(quest) == 0) || progress[0] > 0)) {
                    allDone = false;
                    break;
                }
            }
            if (questPassesAvailabilityConditions(quest) != 0) {
                if (allDone) {
                    FUN_002bf380(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_NEW, x, y, flags);
                    return normal;
                }
                if (questIsCompleted(quest) == 0)
                    return normal;
                FUN_002bf288(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_DONE, x, y, flags);
                if (FUN_00298e00(quest) != 0)
                    return normal;
                return questColorDim(full);
            }
            if (FUN_00298e00(quest) != 0 || questIsCompleted(quest) == 0) {
                FUN_002bf288(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_AVAILABLE_ENTRY, x, y, flags);
                return normal;
            }
        } else {
            if (questIsOfferable((u16)quest) == 0) {
                if (recordCategoryNineIsActiveInMode24(quest) != 0)
                    FUN_002bf288(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_LOCKED, x, y, flags);
                else if (questIsCompleted(quest) != 0)
                    FUN_002bf288(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_DONE, x, y, flags);
                else
                    FUN_002bf288(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_LOCKED, x, y, flags);
                return questColorDim(full);
            }
            if (FUN_002903f0() == quest) {
                FUN_002bf380(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_SELECTED, x, y, flags);
                return questColorSelected(full);
            }
            if (questIsCompleted(quest) == 0)
                return normal;
        }
        FUN_002bf288(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_DONE, x, y, flags);
        return normal;
    }

    if (FUN_00298dc8() != 0) {
        if (FUN_002903f0() == 0) {
            FUN_002bf380(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_ACTIVE, x, y, flags);
            return questColorSelected(full);
        }
        FUN_002bf288(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_ACTIVE_LOCKED, x, y, flags);
    } else {
        if (questIsCompleted(quest) == 0)
            return normal;
        FUN_002bf288(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_DONE, x, y, flags);
    }
    return questColorDim(full);
}

} /* extern "C" */
