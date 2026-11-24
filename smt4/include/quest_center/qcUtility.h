#pragma once
#include "common.h"

extern "C" {

void FUN_00385aec(u32 *control);

} /* extern "C" */

extern "C" {
u16 QcActive_GetField22(void);
}

extern "C" {
void FUN_00385af4(u32 *arg0);
}

/* One tab's 20 quest slots: a quest index, QC_SLOT_FREE (not filled yet) or QC_SLOT_BONUS. */
struct QcTab {
    /* 0x00 */ s32 slots[20];
};

enum {
    QC_SLOT_BONUS = -1,
    QC_SLOT_FREE = -2
};

/* The quest center's tab lists (the part QcUtility_BuildTabList fills). */
struct QcTabListState {
    /* 0x00 */ u8 group;           /* quest table group */
    /* 0x01 */ u8 unk01[7];
    /* 0x08 */ u8 flags;           /* bit 4: the extra tab (4) was built */
    /* 0x09 */ u8 builtTabs;       /* one bit per tab that has been built */
    /* 0x0A */ u8 tab;             /* the tab shown */
    /* 0x0B */ u8 unk0B;
    /* 0x0C */ u16 pinnedCategory; /* category whose first quest is placed in slot 0, 0 = none */
    /* 0x0E */ u8 unk0E[2];
    /* 0x10 */ QcTab tabs[5];      /* 0x50 bytes each; tab 4 has no bonus chance */
};

/* One 0x20-byte record of the quest center's quest table (data table 0x26). */
struct QcQuestRecord {
    /* 0x00 */ char name[0x16];    /* shown on the board when the quest has no category */
    /* 0x16 */ u16 category;       /* row of data table 0x25 naming the quest, 0 = none */
    /* 0x18 */ u16 requiredFlag;   /* the quest is skipped once this game flag is set */
    /* 0x1A */ u8 weights[6];      /* the quest's draw weight in each list kind, 0 = never drawn */
};

typedef char QcQuestRecordCheck[sizeof(QcQuestRecord) == 0x20 ? 1 : -1];

extern "C" {
/* Picks the next ordinary tab without a repeat, or returns 5 when that tab is already built. */
u32 qcTabListPickRandomTab(QcTabListState *list);

/* Fills tab `tab` of the list; returns 1 when a bonus slot was placed. */
u32 QcUtility_BuildTabList(QcTabListState *list, s32 tab, s32 group, s32 forcedSlot, s32 weightKind,
                           s32 firstRandomSlot, s32 lastRandomSlot);
}
