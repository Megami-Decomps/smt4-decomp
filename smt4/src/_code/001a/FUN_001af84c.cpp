/* NON_MATCHING: draws the status icon of a quest list row (new, in progress, done, locked, selected) and returns the row
 * text colour, in retail's branch order (the add-on test questIsOfferable || questQueryFalse is the linker-inlined
 * mov r0, #0); retail computes the colour into r4 first and keeps the selected colours in r5/r9, and it keeps the
 * dimmed-colour blocks of the availability path where this build keeps those of the detail path. */
#include "common.h"
#include "quest_center/QuestRecord.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match1_BgmRequestChannel.h"
#include "code/Code001a_Smt4.h"

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

struct QuestUi {
    /* 0x000 */ u8 unk000[0x5C4];
    /* 0x5C4 */ u8 detailOpen;
};

extern "C" {
extern QuestUi *g_uiQuest;

s32 questPassesAvailabilityConditions(s32 quest);
bool questIsOfferable(u16 quest);
s32 questQueryFalse(void);
s32 questIsCompleted(s32 quest);
s32 FUN_00298dc8(void);
s32 FUN_00298e00(s32 quest);
s32 FUN_00298e40(s32 quest, s32 step, s32 *progress);
s32 recordCategoryNineIsActiveInMode24(s32 quest);
void texDrawCompositeSprite(u32 layer, u32 table, u32 sprite, u32 x, u32 y, u32 flags);

/* The row text colours: full colour words or the plain-text form. */
static __inline u32 questColorNormal(s32 full)
{
    return full != 0 ? QUEST_COLOR_NORMAL_FULL : QUEST_COLOR_NORMAL_PLAIN;
}

static __inline u32 questColorDim(s32 full)
{
    return full != 0 ? QUEST_COLOR_DIM_FULL : QUEST_COLOR_DIM_PLAIN;
}

static __inline u32 questColorSelected(s32 full)
{
    return full != 0 ? QUEST_COLOR_SELECTED_FULL : QUEST_COLOR_SELECTED_PLAIN;
}

/* Draws the icon of `quest` at (x, y) and returns the colour for its row. */
u32 FUN_001af84c(u16 quest, u32 x, u32 y, u32 flags, s32 full)
{
    u32 color = questColorNormal(full);
    s32 progress[3];

    if (g_uiQuest->detailOpen != 0) {
        if (FUN_00298dc8() != 0) {
            if (rosterGetLeaderId() != 0) {
                texDrawTableEntryAtStoredOrigin(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_ACTIVE_LOCKED, x, y, flags);
                color = questColorDim(full);
            } else {
                texDrawCompositeSprite(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_ACTIVE, x, y, flags);
                color = questColorSelected(full);
            }
        } else if (questIsCompleted(quest) != 0) {
            texDrawTableEntryAtStoredOrigin(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_DONE, x, y, flags);
            color = questColorDim(full);
        }
        return color;
    }

    QuestRecord *record = questDataGetRecord(quest);
    if (record == NULL)
        return color;

    if (record->kind == 0) {
        bool allDone = true;
        for (s32 step = 0; step < QUEST_STEP_COUNT; step++) {
            if (FUN_00298e40(quest, step, progress) != 0
                && ((questIsCompleted(quest) != 0 && FUN_00298e00(quest) == 0) || progress[0] > 0)) {
                allDone = false;
                break;
            }
        }
        if (questPassesAvailabilityConditions(quest) != 0) {
            if (allDone) {
                texDrawCompositeSprite(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_NEW, x, y, flags);
            } else if (questIsCompleted(quest) != 0) {
                texDrawTableEntryAtStoredOrigin(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_DONE, x, y, flags);
                if (FUN_00298e00(quest) != 0)
                    color = questColorNormal(full);
                else
                    color = questColorDim(full);
            }
        } else if (FUN_00298e00(quest) == 0 && questIsCompleted(quest) != 0) {
            texDrawTableEntryAtStoredOrigin(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_DONE, x, y, flags);
        } else {
            texDrawTableEntryAtStoredOrigin(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_AVAILABLE_ENTRY, x, y, flags);
        }
    } else if (questIsOfferable(quest) || questQueryFalse()) {
        if (rosterGetLeaderId() == quest) {
            texDrawCompositeSprite(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_SELECTED, x, y, flags);
            color = questColorSelected(full);
        } else if (questIsCompleted(quest) != 0) {
            texDrawTableEntryAtStoredOrigin(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_DONE, x, y, flags);
        }
    } else {
        if (recordCategoryNineIsActiveInMode24(quest) != 0)
            texDrawTableEntryAtStoredOrigin(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_LOCKED, x, y, flags);
        else if (questIsCompleted(quest) != 0)
            texDrawTableEntryAtStoredOrigin(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_DONE, x, y, flags);
        else
            texDrawTableEntryAtStoredOrigin(QUEST_ICON_LAYER, QUEST_ICON_TABLE, QUEST_ICON_LOCKED, x, y, flags);
        color = questColorDim(full);
    }
    return color;
}

} /* extern "C" */
