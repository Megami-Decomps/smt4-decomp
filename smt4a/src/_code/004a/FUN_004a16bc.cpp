/* NON_MATCHING: register allocation only: retail keeps the menu-pressed flag in sl and the shared zero in r9 (built the reverse). */
#include "common.h"
#include "code/Code0033.h"
#include "shard/Shard004A.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

/* One row of the quest list: the quest id sits at +4. */
struct QuestListRow {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 id;
    /* 0x06 */ u8 unk06[0x1A];

    u16 getId() const { return id; }
};

/* The menu's control block. */
struct QuestControls {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ s8 cursorRow;
    /* 0x13 */ u8 unk13[0x31];
};

/* The quest menu screen. */
struct QuestMenu {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ s32 state;
    /* 0x018 */ u32 stateArg;
    /* 0x01C */ u8 unk01C[4];
    /* 0x020 */ u8 holder[0x7F8];      /* flagged value holder: the selected row index */
    /* 0x818 */ QuestControls controls;
    /* 0x85C */ u32 job;
    /* 0x860 */ u8 unk860;
    /* 0x861 */ s8 page;
    /* 0x862 */ u8 unk862;
    /* 0x863 */ u8 pageChanged;
    /* 0x864 */ s16 rowCount;
    /* 0x866 */ u8 unk866[2];
    /* 0x868 */ u8 unk868[0x1C];
};

extern "C" {
extern s32 g_animatedPageSelection[];
s32 inputIsQuestMenuPressed(void);
s32 FUN_004d0584(void);
s32 questControlsGetCursorRow(QuestControls *controls);
s32 inputIsQuestConfirmPressed(void);
s32 inputIsQuestCancelPressed(void);
s32 gameGetMode(void);
void FUN_004d0680(QuestMenu *menu);
const char *FUN_00180118(u32 id);
const char *FUN_0014bf3c(u32 id, u32 option);
char *libc_strcpy(char *destination, const char *source);
void scrScriptProcessStartEntry(u32 job, u32 entry);
void sendEvent100020E(void);
void screen4AEnter(QuestMenu *menu);
void uniteCreatePreviewModel(void);
void sysPlaySe(u32 id);
void *slotRecordFindById(u16 id);
void FUN_0035ad50(u32 id, char *buffer);
void FUN_0032d0c8(s32 a, s32 b, u32 id, void *data);

// Per-frame input for the quest menu: start the detail view, confirm the page or cancel.
void FUN_004a16bc(QuestMenu *menu)
{
    s32 selected = 0;
    s32 confirm = 0;
    s32 cancel = 0;
    s32 menuPressed = inputIsQuestMenuPressed();
    if (menu->rowCount > 0) {
        selected = FUN_004d0584();
        confirm = inputIsQuestConfirmPressed();
        cancel = inputIsQuestCancelPressed();
        if (selected == 0) {
            selected = questControlsGetCursorRow(&menu->controls);
        }
    }
    if (gameGetMode() != 0) {
        FUN_004d0680(menu);
        return;
    }
    QuestListRow *rows = (QuestListRow *)&menu->rowCount;
    if (selected != 0) {
        char text[304];
        u32 id = rows[flaggedValueHolderGetTotal(reinterpret_cast<const FlaggedValueHolder *>(menu->holder))].id;
        libc_strcpy(text, FUN_00180118(id));
        FUN_003180c4(8, text);
        libc_strcpy(text, FUN_0014bf3c(id, 0));
        FUN_003180c4(16, text);
        scrScriptProcessStartEntry(menu->job, 7);
        FUN_003343f0(1);
        menu->state = 8;
        menu->stateArg = 0;
        sendEvent100020E();
        return;
    }
    if (menuPressed != 0) {
        screen4AEnter(menu);
        uniteCreatePreviewModel();
        return;
    }
    if (confirm != 0) {
        g_animatedPageSelection[1] = -1;
        menu->page = menu->page + 1;
        if (menu->page > 1) {
            menu->page = 0;
        }
        sendEvent100020E();
        menu->pageChanged = 1;
        sysPlaySe(menu->page == 1 ? 78 : 79);
        s16 id = rows[flaggedValueHolderGetTotal(reinterpret_cast<const FlaggedValueHolder *>(menu->holder))].getId();
        if (menu->page == 1) {
            FUN_0032d0c8(0, 1, (u16)id, slotRecordFindById((u16)id));
        } else {
            char text[304];
            FUN_0035ad50((u16)id, text);
            FUN_0032d0c8(0, 1, (u16)id, text);
        }
        return;
    }
    if (cancel != 0) {
        g_animatedPageSelection[1] = -1;
        FUN_003343f0(1);
        menu->state = 9;
        menu->stateArg = 0;
        scrScriptProcessStartEntry(menu->job, 8);
        sendEvent100020E();
        return;
    }
}

}
