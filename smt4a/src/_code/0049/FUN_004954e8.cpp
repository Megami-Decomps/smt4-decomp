#include "common.h"
#include "code/Code0049_Smt4a.h"

struct SubmenuRecord {
    /* 0x00 */ u8 unk00[0x74];
};
struct SubmenuView;
struct SubmenuViewTable {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ void (*setRecord)(SubmenuView *view, SubmenuRecord *record);
};
struct SubmenuView {
    /* 0x00 */ SubmenuViewTable *table;
};
struct SubmenuSelectionOwner {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ s8 active;
    /* 0x13 */ u8 unk13[0x21];
};
struct SubmenuWork {
    /* 0x000 */ u8 unk000[0x3CC];
    /* 0x3CC */ u8 unk3CC[0x73C];
    /* 0xB08 */ SubmenuSelectionOwner selection;
    /* 0xB3C */ SubmenuView *view;
    /* 0xB40 */ s32 recordIndex;
    /* 0xB44 */ u8 unkB44[0x1C];
    /* 0xB60 */ SubmenuRecord records[1]; /* trailing record table */
};
extern "C" {
void menuSynchronizeFlaggedSelection(SubmenuSelectionOwner *owner, SubmenuRecord *record);
void sub10OwnerStart(SubmenuRecord *record);
void entryDispatchUpdate(void *owner, s32 value);
s32 selectOwnerGetSelected(SubmenuSelectionOwner *owner);
s32 selectOwnerGetActive(const SubmenuSelectionOwner *owner);
s32 FUN_004d0058(SubmenuRecord *record, s32 selected);

/* Starts the current submenu record and applies an active flagged selection. */
u32 FUN_004954e8(SubmenuWork *work)
{
    SubmenuRecord *record = &work->records[work->recordIndex];
    menuSynchronizeFlaggedSelection(&work->selection, record);
    work->view->table->setRecord(work->view, record);
    sub10OwnerStart(record);
    entryDispatchUpdate(work->unk3CC, 2);
    entryDispatchUpdate(work->unk3CC, 12);
    u32 result = 0;
    if (selectOwnerGetActive(&work->selection) != 0) {
        if (FUN_004d0058(record, selectOwnerGetSelected(&work->selection)) != 0) {
            result = 1;
        }
    }
    return result;
}
}
